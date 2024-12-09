#include "lists.h"

/**
 * delete_dnodeint_at_index - supprime le noeud à l'index spécifié
 * d'une liste dlistint
 * @head: double pointeur vers la tete de la liste
 * @index: index du noeud à supprimer, l'index commence à 0
 * Return: 1 en cas de reussite, -1 en cas d'échec
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current = *head;
	unsigned int count = 0;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = current->next;
		if (*head != NULL)
			(*head)->prev = NULL;
		free(current);
		return (1);
	}

	while (current != NULL && count < index)
	{
		current = current->next;
		count++;
	}

	if (current == NULL)
		return (-1);

	if (current->next != NULL)
		current->next->prev = current->prev;
	if (current->prev != NULL)
		current->prev->next = current->next;

	free(current);

	return (1);
}
