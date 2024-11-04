#include "main.h"
#include <stdio.h>

/**
 * string_toupper - Transforme toutes les lettres minuscules
 * d'une chaîne en majuscules.
 * @str: Pointeur vers la chaîne de caractères à modifier.
 * Return: Pointeur vers la chaîne résultante.
 */

char *string_toupper(char *str)
{
	char *ptr = str;

	while (*ptr != '\0')
	{
		if (*ptr >= 'a' && *ptr <= 'z')
		{
			*ptr = *ptr - 32;
		}
		ptr++;
	}
	return (str);
}
