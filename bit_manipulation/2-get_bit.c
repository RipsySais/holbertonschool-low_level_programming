#include "main.h"

/**
 * get_bit - renvoie la valeur d'un bit à un index donné
 * @n: le nombre à partir duquel obtenir le bit
 * @index: l'index, en partant de '0', du bit
 * que l'on souhaite obtenir
 * Return: la valeur du bit à l'index spécifié
 * ou -1 si une erreur se produite
 */

int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	return ((n >> index) & 1);
}
