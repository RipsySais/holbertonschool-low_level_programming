#include "main.h"
#include <stdio.h>

/**
 * _print_rev_recursion - une fonction qui imprime une chaîne à l'envers.
 * suivie d'une nouvelle ligne
 * @s: la chaine de caractère a imprimer en envers
 */

void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		_print_rev_recursion(s + 1);
		putchar(*s);
	}
}
