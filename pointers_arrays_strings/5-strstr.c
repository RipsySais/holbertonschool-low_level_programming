#include "main.h"
#include <string.h>
#include <stdio.h>

/**
 * _strstr - Recherche la première occurrence de la sous-chaîne needle
 * dans la chaîne haystack.
 * @haystack: pointeur vers la chaîne de caractères principale
 * @needle: pointeur vers la sous-chaîne à rechercher
 * Return: Pointeur vers le début de la sous-chaîne localisée,
 * ou NULL si la sous-chaîne n'est pas trouvée.
 */
char *_strstr(char *haystack, char *needle)
{
	char *h, *n;

	while (*haystack)
	{
		h = haystack;
		n = needle;

		while (*n && *h == *n)
		{
			h++;
			n++;
		}
		if (!*n)
		{
			return (haystack);
		}
		haystack++;
	}
	return (NULL);
}
