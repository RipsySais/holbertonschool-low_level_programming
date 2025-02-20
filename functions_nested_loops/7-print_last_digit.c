#include "main.h"
#include <stdio.h>

/**
 * print_last_digit - Affiche le dernier chiffre d'un nombre
 * @n: Le nombre à vérifie
 * Return: la valeur du dernier chiffre
 */

int print_last_digit(int n)
{
	int last_digit;

	last_digit = n % 10;
	if (last_digit < 0)
	{
		last_digit = -last_digit;
	}
	_putchar('0' + last_digit);
	return (last_digit);
}


