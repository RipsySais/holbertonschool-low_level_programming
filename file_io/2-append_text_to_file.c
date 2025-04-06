#include "main.h"

/**
 * append_text_to_file - ajoute du texte à la fin d'un fichier
 * @filename: nom du fichier
 * @text_content: chaine terminée par NULL à ajouté à la fin du fichier
 * Return: 1 en cas de succès, -1 en cas d'échec
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int file;
	ssize_t write_file = 0;
	int len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		while (text_content[len])
			len++;
	}

	file = open(filename, O_WRONLY | O_APPEND);
	if (file == -1)
		return (-1);

	if (text_content != NULL)
	{
		write_file = write(file, text_content, len);
		if (write_file == -1)
		{
			close(file);
			return (-1);
		}
	}

	close(file);

	return (1);

}
