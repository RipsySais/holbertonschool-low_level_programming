#include "function_pointers.h"
#include <stdio.h>

/**
 * int_index - recherche un entier dans le tableau
 * @array:le tableau d'un entiers
 * @size:le nombre d'élément dans un tableau
 * @cmp:pointeur vers la fonction à utiliser pour comparer les valeurs
 * Return:l'index du prémier élément pour lequel cmp ne renvoie pas 0
 * si aucun élément ne correspond ou si size <= 0, retourne -1
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || cmp == NULL || size <= 0)
	{
		return (-1);
	}

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
		{
			return (i);
		}
	}
	return (-1);
}
