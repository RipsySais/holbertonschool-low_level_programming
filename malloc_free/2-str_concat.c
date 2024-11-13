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

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	while (s1[len1] != '\0')
		len1++;

	while (s2[len2] != '\0')
		len2++;

	const_str = (char *)malloc((len1 + len2 + 1) * sizeof(char));

	if (const_str == NULL)
	{
		return (NULL);
	}

	while (s1[i] != '\0')
	{
		const_str[i] = s1[i];
		i++;
	}

	while (s2[j] != '\0')
	{
		const_str[i + j] = s2[j];
		j++;
	}

	const_str[i + j] = '\0';
	return (const_str);
}
