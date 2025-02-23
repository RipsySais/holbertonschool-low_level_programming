#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - imprime tous les nombres de n à 98
 * @n: le nombre à partir duquel commencer à imprimer
 */

void print_to_98(int n)
{	int i;

	if (n < 98)
	{
		for (i = n; i < 98; i++)
		{
			print_number(i);
			_putchar(',');
			_putchar(' ');
		}
	}
	else if (n > 98)
	{
		for (i = n; i > 98; i--)
		{
			print_number(i);
			_putchar(',');
			_putchar(' ');
		}
	}
	print_number(98);
	_putchar('\n');
}

#include "main.h"
#include <stdio.h>

/**
 * print_number - imprime un nombre en entier
 * @n: le nombre à imprimer
 */

void print_number(int n)
{
	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}

	if (n / 10 != 0)
	{
		print_number(n / 10);
	}
	_putchar((n % 10) + '0');
}
