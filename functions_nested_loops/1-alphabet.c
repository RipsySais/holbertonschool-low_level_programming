#include "main.h"
#include "stdio.h"

/**
 * print_alphabet - imprime l'alphabet en minuscules suivi d'une nouvelle ligne
 */

void print_alphabet(void)
{
	char y;

	for (y = 'a'; y <= 'z'; y++)
	{
		putchar(y);
	}
	putchar('\n');
}
