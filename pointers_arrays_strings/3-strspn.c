#include "main.h"
#include <string.h>
#include <stdio.h>

/**
 * _strspn - Obtient la longueur d'une sous chaine de préfixe
 * @s: pointeur vers la chaine de caractère principale
 * @accept: pointeur vers la chaine de caractère
 * contenant les caractère acceptés
 * Return: Nmobre octets dans le segment initial de s qui
 * se compose uniquement d'octets provenant de accepte
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int length = 0;
	int found;
	char *a;

	while (*s)
	{
		found = 0;
		for (a = accept; *a; a++)
		{
			if (*s == *a)
			{
				found = 1;
				break;
			}
		}
		if (!found)
		{
			break;
		}
		length++;
		s++;
	}
	return (length);

}
