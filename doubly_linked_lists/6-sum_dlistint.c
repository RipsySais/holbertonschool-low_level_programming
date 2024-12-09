#include "lists.h"

/**
 * sum_dlistint - renvoie la somme de de toutes les valeurs
 * des noeuds d'une liste dlistint_t
 * @head: pointeur vers début de la liste
 * Return: la somme de toutes les valeurs des noeuds
 * ou 0 si la liste est vide
 */

int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
