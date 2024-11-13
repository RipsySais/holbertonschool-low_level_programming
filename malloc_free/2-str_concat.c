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
	int concat = 0, len1 = 0, len2 = 0;
	int j = 0;
	char *str;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	while (s1[len1] != '\0')
		len1++;

	while (s2[len2] != '\0')
		len2++;

	str = (char *)malloc((len1 + len2 + 1) * sizeof(char));

	if (str == NULL)
		return (NULL);

	while (s1[concat] != '\0')
	{
		str[concat] = s1[concat];
		concat++;
	}

	while (s2[j] != '\0')
	{
		str[concat + j] = s2[j];
		j++;
	}

	str[concat + j] = '\0';

	return (str);
}
