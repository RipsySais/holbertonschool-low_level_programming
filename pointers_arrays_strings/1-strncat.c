#include "main.h"
#include <string.h>
#include <stdio.h>

/**
 * _strncat - Concatène deux chaines en utilisant en plus
 * n octets de src
 * @dest: pointeur vers la chaine de destination
 * @src: pointeur vers la chaine source
 * @n: nombre maximum d'octet de src à utiliser
 *
 * Return: vers la chaine résultant dest
 */

char *_strncat(char *dest, char *src, int n)
{
	char *ptr = dest;

	while (*ptr != '\0')
	{
		ptr++;
	}
	while (n > 0 && *src != '\0')
	{
		*ptr = *src;
		ptr++;
		src++;
		n--;
	}
	*ptr = '\0';
	return (dest);
}
