#include "main.h"
#include <stdio.h>

/**
 * print_numbers - fonction qui imprime les nombres, de 0 à 9
 * , suivis d'une nouvelle ligne.
 * Return: void
 */

void print_numbers(void)
{
	int num = '0';

	while (num <= '9')
	{
		_putchar(num++);
	}

	_putchar ('\n');
}
