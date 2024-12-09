#include "lists.h"

/**
 * insert_dnodeint_at_index - insère un nouveau noeud à une
 * position donnée dans la liste dlistint_t
 * @h: double pointeur vers la tete de liste
 * @idx: index de la liste où le nouveau noeud doit etre ajouté
 * index commence à 0
 * @n: valeur entière à stocker dans le nouveau noeud
 * Return: l'adresse du nouveau noeud, ou NULL en cas d'échec
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *newNode, *tmp = *h;
	unsigned int index;

	if (h == NULL)
		return (NULL);

	newNode = malloc(sizeof(dlistint_t));
	if (newNode == NULL)
		return (NULL);
	newNode->n = n;

	if (idx == 0)
	{
		newNode->next = *h;
		newNode->prev = NULL;
		if (*h != NULL)
			(*h)->prev = newNode;
		*h = newNode;
		return (newNode);
	}

	for (index = 0; tmp != NULL && index < idx - 1; index++)
		tmp = tmp->next;

	if (tmp == NULL)
	{
		free(newNode);
		return (NULL);
	}

	newNode->next = tmp->next;
	newNode->prev = tmp;
	if (tmp->next != NULL)
		tmp->next->prev = newNode;
	tmp->next = newNode;

	return (newNode);
}
