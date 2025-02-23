#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - imprime tous les nombres de n à 98
 * @n: le nombre à partir duquel commencer à imprimer
 */

void print_to_98(int n)
{
	int i;

	if (n < 98)
	{
		for (i = n; i < 98; i++)
		{
			printf("%d, ", 98);
		}
	}
	else
	{
		for (i = n; i > 98; i--)
		{
			printf("%d, ", i);
		}
	}
	printf("98\n");
}
