#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * str_concat - concat 2 chaines de caractere
 * @s1: la premier chaine de concat
 * @s2: la deuxiem chaine
 * Return: vers la nouvelle chaine concat
 */
char *str_concat(char *s1, char *s2)
{
	int index = 0, lenght1 = 0, lenght2 = 0;
	int j = 0;
	char *ptr1;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	while (s1[lenght1] != '\0')
		lenght1++;


	while (s2[lenght2] != '\0')
		lenght2++;

	ptr1 = (char *)malloc((lenght1 + lenght2 + 1) * sizeof(char));

	if (ptr1 == NULL)
		return (NULL);


	while (s1[index] != '\0')
	{
		ptr1[index] = s1[index];
		index++;
	}


	while (s2[j] != '\0')
	{
		ptr1[index + j] = s2[j];
		j++;
	}

	ptr1[index + j] = '\0';

	return (ptr1);
}
