#include "main.h"
#include <stdio.h>

/**
 *  puts2 - imprime tous les autres caractères d'une chaîne, en commençant
 *  par le premier caractère, suivi d'une nouvelle ligne.
 *  @str: pointeur vers la chaine de caractère
 */

void puts2(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		if (i % 2 == 0)
		{
			_putchar(str[i]);
		}
		i++;
	}
	_putchar('\n');
}
