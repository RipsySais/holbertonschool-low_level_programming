#include "main.h"
#include <stdio.h>
/**
 * _puts_recursion - imprimer une chaine suivie d'une nouvelle ligne
 * @s: pointeur
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		putchar('\n');
		return;
	}
	putchar(*s);
	_puts_recursion(s + 1);
}
