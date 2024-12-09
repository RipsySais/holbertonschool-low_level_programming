#include "lists.h"

/**
 * free_dlistint - libère une liste dlistint_t
 * @head: pointeur vers le début de la liste
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp;

	while (head)
	{
		temp = head;
		head = head->next;
		free(temp);
	}
}
