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
	int start = 0;

	while (*s)
	{
		if (*s == '-')
		{
			sign = -sign;
		}
		else if (*s >= '0' && *s <= '9')
		{
			result = result * 10 + (*s - '0');
			start = 1;
		}
		else if (start)
		{
			break;
		}
		s++;
	}
	return (result * sign);

}
