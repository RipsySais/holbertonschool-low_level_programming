#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * malloc_checked - Alloue de la mémoire en utilisant malloc
 * @b: la taille de la mémoire à allouer
 * Return: pointeur vers la mémoire allouée,ou terminé le programme
 * avec un état de 98 si allocation échoue
 */

void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);

	if (ptr == NULL)
	{
		exit(98);
	}
	return (ptr);
}
