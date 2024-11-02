#include "main.h"
#include <string.h>
#include <stdio.h>

/**
 * _strncpy - copie une chaine en utilisant au max n caractère
 * @dest: pointeur vers la chaine de destination
 * @src: pointeur vers la chaine source
 * @n: nombre max de caractère a copier de src
 * Return: vers la chaine résultante dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	for (; i < n; i++)
	{
		dest[i] = '\0';
	}
	return (dest);
}
