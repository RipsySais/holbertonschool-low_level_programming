#include "main.h"
#include <stdio.h>

/**
 * print_numbers - fonction qui imprime les nombres, de 0 à 9
 * , suivis d'une nouvelle ligne.
 * Return: void
 */

void print_numbers(void)
{
	int i;

	for (i = 0; i < 9; i++)
	{
		putchar(i + '0');
	}
	putchar('\n');
}
