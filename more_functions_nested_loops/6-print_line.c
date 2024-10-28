#include "main.h"
#include <stdio.h>

/**
 * print_line - fonction qui dessine une ligne droite dans le terminal.
 * @n: nombr de fois que le carectère '_'doit etre imprimer
 */

void print_line(int n)
{
	int i;

	for (i = 0; i < n; i++)
		_putchar('_');

	_putchar('\n');
}
