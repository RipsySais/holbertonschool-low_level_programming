#include "lists.h"

/**
 * dlistint_len - renvoie le nombre d'éléments
 * dans une liste chainée dlistint_t
 * @h: pointeur vers le début de la liste
 * Return: le nombre d'éléments dans la liste
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}

	return (count);
}
