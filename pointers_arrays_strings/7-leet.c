#include "main.h"
#include <stdio.h>

/**
 * leet - une fonction qui encode une chaîne en 1337.
 * @str: pointeur vers la chaine de caractère
 * Return: returne vers la chaine de resultante
 */

char *leet(char *str)
{
	char leet_map[256] = {0};
	char *ptr = str;

	leet_map['a'] = '4';
	leet_map['A'] = '4';
	leet_map['e'] = '3';
	leet_map['E'] = '3';
	leet_map['o'] = '0';
	leet_map['O'] = '0';
	leet_map['t'] = '7';
	leet_map['T'] = '7';
	leet_map['l'] = '1';
	leet_map['L'] = '1';

	while (*ptr != '\0')
	{
		if (leet_map[ptr] != 0)
		{
			*ptr = leet_map[ptr];
		}
		ptr++;
	}
	return (str);
}
