#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * _strdup - renvoie un pointeur vers un nouvel espave mémoire
 * qui contient une copie de la chaîne donnée en paramètre.
 * @str: la chaine de caractère a dupliquer
 * Return: un pointeur vers la chaine a dupliquer,ou NULL si
 * str = NULL ou si la mémoire est insuffisante
 */

char *_strdup(char *str)
{
	char *dup;
	unsigned int i, len = 0;

	if (str == NULL)
	{
		return (NULL);
	}

	while (str[len] != '\0')
	{
		len++;
	}

	dup = malloc(sizeof(char) * (len + 1));

	if (dup == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < len; i++)
	{
		dup[i] = str[i];
	}
	dup[len] = '\0';
	return (dup);
}
