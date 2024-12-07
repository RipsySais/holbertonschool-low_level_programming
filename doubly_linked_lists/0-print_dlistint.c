#include "lists.h"

/**
 * print_dlistint - imprimer tous les éléments d'une liste dlistint_t
 * @h: pointeur vers le debut de la liste
 * Return: le nombre de noeuds dans la liste
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		count++;
	}
	return (count);
}
