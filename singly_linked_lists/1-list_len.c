#include "lists.h"

/**
 * list_len - renvoie le nombres d'éléments dans une liste
 * chainée list_t
 * @h: pointe vers le debut de la liste
 * Return: le nombre d'élément dans la liste
 */

size_t list_len(const list_t *h)
{
	size_t count = 0;

	while (h)
	{
		count++;
		h = h->next;
	}
	return (count);
}
