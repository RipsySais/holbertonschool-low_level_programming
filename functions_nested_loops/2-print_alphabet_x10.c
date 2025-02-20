#include "main.h"
#include <stdio.h>

/**
 * print_alphabet_x10 - imprimer 10 fois l'alphabet en miniscules
 */

void print_alphabet_x10(void)
{
	char i, j;

	for (i = 0; i < 10; i++)
	{
		for (j = 'a'; j <= 'z'; j++)
		{
			_putchar(j);
		}

		_putchar('\n');
	}
}
