#include "main.h"
#include <stdio.h>

/**
 * reverse_array - inverse le contenu d'un tableau d'entier
 * @a: pointeur vers le tableau d'entier
 * @n: nombre d'élements du tableau
 * Return: void
 */

void reverse_array(int *a, int n)
{
	int temp, i;

	for (i = 0; i < n / 2; i++)
	{
		temp = a[i];
		a[i] = a[n - 1 - i];
		a[n - 1 - i] = temp;
	}
}
