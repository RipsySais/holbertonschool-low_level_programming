#include "main.h"
#include <stdio.h>

/**
 *  print_diagsums - Imprime la somme des 2 diagonales
 *  d'une matrix carré d'entier
 *  @a: pointeur vers le tableau d'entier
 *  @size: Taille de la matrix carré (nombre de ligne et de colone)
 */

void print_diagsums(int *a, int size)
{
	int sum1 = 0;
	int sum2 = 0;
	int i;

	for (i = 0; i < size; i++)
	{
		sum1 += a[i * size + i];
		sum2 += a[i * size + (size - 1 - i)];
	}
	printf("%d, %d\n", sum1, sum2);
}
