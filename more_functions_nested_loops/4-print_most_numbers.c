#include "main.h"
#include <stdio.h>

/**
 * print_most_number - fonction qui imprime les nombres, de 0 à 9,
 * suivis d'une nouvelle ligne.
 */
void print_most_numbers(void)
{
	int num;

	for (num = 0; num <= 9; num++)
	{
		if (num == 2 || num == 4)
		{
			continue;
		}
		else
		{
			_putchar(num + '0');
		}
	}

	_putchar ('\n');
}
