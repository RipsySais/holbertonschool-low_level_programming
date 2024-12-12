#include "main.h"

/**
 * clear_bit - définit la valeur d'un bit à 0 à un index donné
 * @n: pointeur vers le nombre à modifier
 * @index: l'index du bit à définir à 0
 * Return: 1 si l'opérateur reussi, -1 si une erreur se produite
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	*n &= ~(1UL << index);

	return (1);
}
