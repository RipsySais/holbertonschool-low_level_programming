#include "main.h"
#include <string.h>
#include <stdio.h>

/**
 * _strchr - Localise un caractère dans une chaine
 * @s: pointeur vers la chaine de caractère
 * @c: caractère à localiser
 * Return: pointeur vers le prémier occurrence du caractère c.
 * et s, ou NULL si ces par trouvé
 */

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	if (c == '\0')
	{
		return (s);
	}
	return (NULL);
}
