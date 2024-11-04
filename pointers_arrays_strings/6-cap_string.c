#include "main.h"
#include <stdio.h>

/**
 * cap_string - une fonction qui met en majuscule tous les mots d'une chaîne.
 * @str: pointeur vers la chaine de caractère
 * Return: pointeur vers la chaine résultante
 */

char *cap_string(char *str)
{
	char *ptr = str;
	int capitalize_next = 1;

	while (*ptr != '\0')
	{
		if (capitalize_next && *ptr >= 'a' && *ptr <= 'z')
		{
			*ptr = *ptr - 32;
		}
		if (*ptr == ' ' || *ptr == '\t' || *ptr == '\n' ||
			*ptr == ',' || *ptr == ';' || *ptr == '.' ||
			*ptr == '!' || *ptr == '?' || *ptr == '"' ||
			*ptr == '(' || *ptr == ')' || *ptr == '{' ||
			*ptr == '}')
		{
			capitalize_next = 1;
		}
		else
		{
			capitalize_next = 0;
		}
		ptr++;
	}
	return (str);
}
