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
	ssize_t bytes_read = 0, bytes_written = 0;
	char *buffer;

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
	{
		free(buffer);
		close(fd);
		return (0);
	}

	bytes_written = write(STDOUT_FILENO, buffer, bytes_read);
	free(buffer);
	close(fd);

	if (bytes_written != bytes_read)
		return (0);

	return (bytes_written);
}
