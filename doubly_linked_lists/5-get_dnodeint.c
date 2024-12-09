#include "lists.h"

/**
 * get_dnodeint_at_index - renvoie le n-ième
 * noeud d'une liste chainée dlistint_t
 * @head: pointeur vers le début de la liste
 * @index: index du noeud, à partir de 0
 * Return: pointeur vers le noeud à l'index spécifié,
 * ou NULL si le noeud n'existe pas
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int count = 0;

	while (head != NULL)
	{
		if (count == index)
		{
			return (head);
		}
		head = head->next;
		count++;
	}

	return (NULL);
}
