#include "main.h"
#include <stdlib.h>

/**
 * create_array - crée un tableau de caractère et l'initialise
 * avec un caractère spécifique
 * @size: la taille du tableau à crée
 * @c: le caractère avec lequel initialiser le tableau
 * Return: un pointeur vers le tableau, ou NULL si
 * size = 0 ou en cas d'échec
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *array;

	if (size == 0)
	{
		return (NULL);
	}

	array = malloc(sizeof(char) * size);

	if (array == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		array[i] = c;
	}

	return (array);
}
