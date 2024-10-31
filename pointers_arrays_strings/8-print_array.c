#include "main.h"
#include <stdio.h>

/**
 * print_array - fonction qui imprime n éléments d'un tableau d'entiers,
 * suivis d'une nouvelle ligne.
 * @a: pointeur vers la chaine de caractère
 * @n: nombre d'élément à imprimer
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (i != 0)
		{
			printf(", ");
		}
		printf("%d", a[i]);
	}
	printf("\n");
}
