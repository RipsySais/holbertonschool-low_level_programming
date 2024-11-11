#include "main.h"
#include <stdio.h>

/**
 * factorial - une fonction qui renvoie la factorielle d'un nombre donné.
 * @n: le nombre dont la factorielle est à calculer
 * Return: la factorielle du nombre, ou -1 si n est inferieur à 0
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 0)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}
