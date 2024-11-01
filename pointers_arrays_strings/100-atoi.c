#include "main.h"
#include <stdio.h>
#include <limits.h>

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
			sign *= -1;
		}
		else if (*s >= '0' && *s <= '9')
		{
			if (result > (INT_MAX - (*s - '0')) / 10)
			{
				return ((sign == 1) ? INT_MAX : INT_MIN);
			}
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
