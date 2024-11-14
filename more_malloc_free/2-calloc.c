#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * _calloc - Alloue de la mémoire pour un tableau en utilisant malloc
 * @nmemb: le nombre d'éléments dans le tableau
 * @size: la taille de chaque éléments en octets
 * Return: un pointeur vers la mémoire allouée,
 * ou NULL en cas d'échec
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;
	unsigned int i;
	char *p;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	ptr = malloc(nmemb * size);
	if (ptr == NULL)
	{
		return (NULL);
	}

	p = (char *)ptr;

	for (i = 0; i < (nmemb * size); i++)
	{
		p[i] = 0;
	}
	return (ptr);
}
