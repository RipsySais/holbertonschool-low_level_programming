#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * str_concat - concatène deux chaines de carectères
 * @s1: la première chaine de caractère
 * @s2: la deuxième chaine de caractère
 * Return: un pointeur vers un espace nouvellement alloué
 * en mémoire contenant le contenu S1 et S2 ou NULL en cas d'échec
 */

char *str_concat(char *s1, char *s2)
{
	char *const_str;
	unsigned int len1 = 0, len2 = 0;
	unsigned int i, j;

	if (s1 != NULL)
	{
		while (s1[len1] != '\0')
			len1++;
	}

	if (s2 != NULL)
	{
		while (s2[len2] != '\0')
			len2++;
	}

	const_str = malloc(sizeof(char) * (len1 + len2 + 1));

	if (const_str == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < len1; i++)
	{
		const_str[i] = s1[i];
	}

	for (j = 0; j < len2; j++)
	{
		const_str[i] = s2[j];
	}
	const_str[i] = '\0';
	return (const_str);
}
