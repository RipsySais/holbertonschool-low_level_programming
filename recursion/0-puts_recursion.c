#include "main.h"
#include <stdio.h>

/**
 * _puts_recursion - une fonction qui imprime une chaîne,
 * suivie d'une nouvelle ligne.
 * @s: La chaine de caractère à imprimer
 */

void _puts_recursion(char *s)
{
	if (*s)
	{
		putchar(*s);
		_puts_recursion(s + 1);
	}
	else
	{
	       putchar('\n');
	}
}
