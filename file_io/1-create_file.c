#include "main.h"

/**
 * create_file - crée un fichier
 * @filename: nom du fichier à créer
 * @text_content: chaine terminé par NULL à écrire dans le fichier
 * Return: 1 en cas de succès ou -1 en cas d'échec
 */

int create_file(const char *filename, char *text_content)
{	int file;
	ssize_t write_file;
	int len = 0;

	if (filename == NULL)
		return (-1);

	file = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (file == -1)
		return (-1);

	if (text_content != NULL)
	{
		while (text_content[len])
			len++;

		write_file = write(file, text_content, len);
		if (write_file == -1 || write_file != len)
		{
			close(file);
			return (-1);
		}
	}

	close(file);
	return (1);
}
