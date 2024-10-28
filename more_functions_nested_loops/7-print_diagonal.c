#include "main.h"
#include <stdio.h>

/**
 * print_diagonal - fonction qui dessine une ligne diagonale sur le terminal.
 * @n: nombre de fois que caractère '\' doit etre imprimer
 */

void print_diagonal(int n)
{
	int a, b;

	if (n <= 0)
	{
		_putchar('\n');
	}
	for (a = 0; a < n; a++)
	{
		for (b = 0; b < a; b++)
		{
			_putchar(' ');
		}
		_putchar('\\');
		_putchar('\n');
	}
}
