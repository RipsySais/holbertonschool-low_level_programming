#include "main.h"
#include <stdio.h>

/**
 * more_numbers - fonction qui imprime 10 fois les nombres,
 * de 0 à 14, suivis d'une nouvelle ligne.
 */

void more_numbers(void)
{
	int a;
	int b;

	for (a = 0; a <= 9; a++)
	{
	for (b = 0; b <= 14; b++)
	{
		if (b > 9)
			_putchar(b / 10 + '0');
		_putchar(b % 10 + '0');
	}
	_putchar('\n');
	}
}
