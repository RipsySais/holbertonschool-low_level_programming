#include "main.h"

/**
 * read_textfile - lit un fichier texte et imprime son contenu
 * @filename: nom du fichier à lire
 * @letters: nombres de lettres à lire et imprimer
 * Return: nombre réel de lettres lues et imprimées,
 * ou 0 en cas d'échec
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t read_file, write_file;
	char *buffer;

	if (filename == NULL)
		return (0);

	buffer = malloc(letters);
	if (buffer == NULL)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		free(buffer);
		return (0);
	}

	read_file = read(fd, buffer, letters);
	if (read_file == -1)
	{
		free(buffer);
		close(fd);
		return (0);
	}

	write_file = write(STDOUT_FILENO, buffer, read_file);
	if (write_file == -1 || write_file != read_file)
	{
		free(buffer);
		close(fd);
		return (0);
	}

	free(buffer);
	close(fd);

	return (write_file);
}
