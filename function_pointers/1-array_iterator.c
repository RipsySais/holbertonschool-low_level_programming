#include "function_pointers.h"
#include <stdio.h>
/**
 * array_iterator - Exécute une fonction sur chaque élément d'un tableau
 * @array: le tableau d'un entier
 * @size: la taille du tableau
 * @action: pointeur vers la fonction à exécuter sur chaque élément
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array != NULL && action != NULL)
	{
		for (i = 0; i < size; i++)
		{
			action(array[i]);
		}
	}
}
