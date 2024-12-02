#include "lists.h"

/**
 * add_node - ajoute un nouveau noeud au début d'une liste list_t
 * @head: double pointeur vers la tete de la liste
 * @str: chaine de caractère à dupliquer pour le nouveau noeud
 * Return: l'adresse du nouveau élément ou NULL en cas d'échec
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;
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
	new_node->next = *head;
	*head = new_node;

	return (new_node);
}
