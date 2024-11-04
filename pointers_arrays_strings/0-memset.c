#include "main.h"
#include <string.h>
#include <stdio.h>

/**
 * _memset - remplie une zone mémoire avec un octet constant
 * @s: pointeur vers la zone mémoire à remplie
 * @b: octet constant utilisé pour remplie la zone mémoire
 * @n: nombre d'octets à remplie
 * Return: pointeur vers la zone memoire remplie
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
