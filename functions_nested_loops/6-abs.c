#include "main.h"
#include <stdio.h>

/**
 * _abs - calcule la valeur absolue d'un entier
 * @n: l'entier dont on veut calculer la valeur absolue
 * Return: la valeur absolue de l'entier
 */

int _abs(int n)
{
	if (n >= 0)
		return (n);
	else
		return (-n);
}
