#include "main.h"

/**
 * close_file - ferme fichier et gère les erreur si échec
 * @fd: description de fichier à fermer
 */

void close_file(int fd)
{
	if (close(fd) == -1)
	{
		dprintf(STDERR_FILENO, "Error: can't close fd %d\n", fd);
		exit(100);
	}
}

/**
 * _error - erreur de sortie
 * @status: code
 * @v: valeur 1
 */

void _error(int status, char *v)
{
	if (status == 97)
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");

	else if (status == 98)
		dprintf(STDERR_FILENO, "Error: can't read from file %s\n", v);

	else if (status == 99)
		dprintf(STDERR_FILENO, "Error: can't write to %s\n", v);

	exit(status);
}

/**
 * main - démarrage du programme
 * @argc: nombre d'argument
 * @argv: tableau d'argument
 * Return: resultat
 */

int main(int argc, char **argv)
{
	int fd_from, fd_to;
	char *filename_from;
	char *filename_to;
	char buffer[1024];
	ssize_t bytes, bytes_w;

	if (argc != 3)
		_error(97, "");

	filename_from = argv[1];
	filename_to = argv[2];
	fd_from = open(filename_from, O_RDONLY);

	if (fd_from == -1)
		_error(98, filename_from);
	fd_to = open(filename_to, O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (fd_to == -1)
		_error(99, filename_to);

	bytes = 1;
	while (bytes)
	{
		bytes = read(fd_from, buffer, 1024);
		if (bytes == -1)
			_error(98, filename_from);
		if (bytes > 0)
		{
			bytes_w = write(fd_to, buffer, bytes);
			if (bytes_w == -1 || bytes_w != bytes)
				_error(99, filename_to);
		}
	}

	close_file(fd_from);
	close_file(fd_to);
	return (0);
}
