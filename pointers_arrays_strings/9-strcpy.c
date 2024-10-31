#include "main.h"
#include <stdio.h>

/**
 * _strcpy - fonction qui copie la chaîne pointée par src, y compris
 * l'octet nul de fin (\0), dans le tampon pointé par dest.
 * @dest: pointeur vers le tampon de destination
 * @src: pointeur vers la chaine source
 * Return: returne le pointeur vers Dest
 */

char *_strcpy(char *dest, char *src)
{
	char *start = dest;

	while (*src)
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (start);
}
