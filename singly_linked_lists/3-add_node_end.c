#include "lists.h"

/**
 * add_node_end - ajoute un nouveau noeud à la fin d'une liste list_t
 * @head: double pointeur vers la tete de la list
 * @str: chaine de caractère à dupliquer pour le nouveau noeud
 * Return: l'adresse du nouveau élément, ou NULL en cas d'échec
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node, *temp;
	unsigned int len = 0;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);

	while (str[len])
		len++;

	new_node->str = strdup(str);
	if (new_node->str == NULL)
	{
		free(new_node);
		return (NULL);
	}
	new_node->len = len;
	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
	}
	else
	{
		temp = *head;
		while (temp->next)
			temp = temp->next;
		temp->next = new_node;
	}
	return (new_node);

}
