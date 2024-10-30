#include "main.h"

/**
 * print_rev - fonction qui imprime une chaîne,
 * à l'envers, suivie d'une nouvelle ligne.
 * @s: le pointeur vers la chaine de caractère
 */

void print_rev(char *s)
{
	int a = 0;

	while (s[a] != '\0')
	{
		a++;
	}
	while (a)
	{
		_putchar(--a);
	}
	_putchar('\n');
}
