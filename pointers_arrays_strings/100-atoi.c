#include "main.h"
#include <stdio.h>

/**
 * _atoi - une fonction qui convertit une chaîne en entier.
 * @s: pointeur vers la chaine de caractère
 * Return: returne l'entier converti de la chaine
 */

int _atoi(char *s)
{
	int sign = 1;
	int result = 0;

	while (*s)
	{
		if (*s == '-')
		{
			sign = -1;
		}
		else if (*s >= '0' && *s <= '9')
		{
			result = result * 10 + (*s - '0');
		}
		else if (result > 0)
		{
			break;
		}
		s++;
	}
	return (result * sign);

}
