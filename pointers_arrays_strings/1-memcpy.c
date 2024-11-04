#include "main.h"
#include <string.h>
#include <stdio.h>

/**
 * _memcpy - Copie n octet de la zone mémoire
 * src vers la zone mémoire dest
 * @dest: pointeur vers la zone mémoire de destination
 * @src: pointeur vers la mémoire source
 * @n: nombre d'octet à copier
 * Return: pointeur vers la zone mémoire de destination dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
