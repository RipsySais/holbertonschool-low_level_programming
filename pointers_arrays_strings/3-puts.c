#include "main.h"

/**
 * _puts - imprime une chaîne, suivie d'une nouvelle ligne, sur stdout.
 * @str: pointeur vers la chaine de caractèers
 */

void _puts(char *str)
{
	int a = 0;

	while (str[a] != '\0')
	{
		_putchar(str[a]);
		a++;
	}
	_putchar('\n');
}
