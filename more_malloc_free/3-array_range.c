#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * array_range - crée un tableau d'entiers de min(inclus) à max (inclus)
 * @min: la valeur minimale(inclus)
 * @max: la valeur maximale(inclus)
 * Return: un pointeur vers un tableau nouvellement crée
 * ou NULL si min > max ou si malloc échoue
 */

int *array_range(int min, int max)
{
	int *array;
	int i;
	int contain = max - min + 1;

	if (min > max)
	{
		return (NULL);
	}

	array = malloc(contain * sizeof(int));

	if (array == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < contain; i++)
	{
		array[i] = min + 1;
	}

	return (array);
}

