#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * string_nconcat - concatène deux chaines de caractères en utilisant
 * les premier n octet de s2
 * @s1: la première chaine de caractère
 * @s2: la deuxième chaine de caractère
 * @n: le nombre d'octet de s2 à utiliser
 * Return: pointeur vers un espace nouvellement alloué en mémoire
 * qui contient s1 suivi des n premier de s2 ou termine par nul
 * ou NULL en cas d'échec
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *concat;
	unsigned int len1 = 0, len2 = 0, i, j;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	while (s1[len1] != '\0')
	len1++;

	while (s2[len2] != '\0')
		len2++;

	if (n >= len2)
		n = len2;

	concat = malloc(sizeof(char) * (len1 + n + 1));


	if (concat == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < len1; i++)
	{
		concat[i] = s1[i];
	}

	for (j = 0; j < n; j++, i++)
	{
		concat[i] = s2[j];
	}
	concat[i] = '\0';

	return (concat);
}
