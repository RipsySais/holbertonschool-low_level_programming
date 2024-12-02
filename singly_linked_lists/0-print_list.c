#include  "lists.h"
#include <stdio.h>

/**
 * print_list - imprimer tous les éléments d'une liste list_t
 * @h: pointeur vers le début de la liste
 * Return: le nombre de noeuds dans la liste
 */

size_t print_list(const list_t *h)
{
	size_t count = 0;

	while (h)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", h->len, h->str);

		h = h->next;
		count++;
	}
	return (count);
}