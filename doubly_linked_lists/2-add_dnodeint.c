#include "lists.h"

/**
 * add_dnodeint - ajoute un nouveau noeud au début d'une liste dlistint_t
 * @head: double pointeur vers la tete de la liste
 * @n:valeur intière à stocker dans le nouveau noeud
 * Return: l'adresse du nouvel élément, ou NULL en cas d'échec
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
	{
		return (NULL);
	}

	new_node->n = n;
	new_node->prev = NULL;
	new_node->next = *head;

	if (*head != NULL)
	{
		(*head)->prev = new_node;
	}

	*head = new_node;

	return (new_node);
}
