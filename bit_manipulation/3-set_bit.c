#include "main.h"

/**
 * set_bit - définit la valeur d'un bit à 1 à un bit donné
 * @n: pointeur vers le nombre à modifier
 * @index: l'index du bit à definir à 1
 * Return: 1 si opérateur reussit, -1 si une erreur se produite
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	*n |= (1UL << index);

	return (1);
}
