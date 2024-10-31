#include "main.h"
#include <stdio.h>

/**
 * puts_half - fonction qui imprime la moitié d'une chaîne,
 * suivie d'une nouvelle ligne.
 * @str: pointeur vers la chaine de caractère
 */

void puts_half(char *str)
{
	int length = 0;
	int i, n;

	while (str[length] != '\0')
	{
		length++;
	}
	if (length % 2 == 0)
	{
		n = length / 2;
	}
	else
	{
		n = (length - 1) / 2;
		n++;
	}
	for (i = n; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
