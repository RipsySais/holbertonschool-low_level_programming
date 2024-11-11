#include "main.h"
#include <math.h>
#include <stdio.h>

/**
 * _pow_recursion - une fonction qui renvoie la valeur
 * de x élevée à la puissance y.
 * @x: la base
 * @y: l'exposant
 * Return: la valeur de x élévée à la puissance y,
 * renvoyer -1 pour indiquer une erreur
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	if (y == 0)
	{
		return (1);
	}
	return (x * _pow_recursion(x, y - 1));
}
