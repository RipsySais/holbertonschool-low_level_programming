#include "lists.h"

/**
 * free_list - libère une liste list_t
 * @head: pointeur vers le début de la liste
 */

void free_list(list_t *head)
{
	list_t *temp;

	while (head)
	{
		temp = head;
		head = head->next;
		free(temp->str);
		free(temp);
	}
}
