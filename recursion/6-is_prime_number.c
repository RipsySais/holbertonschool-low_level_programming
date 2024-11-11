#include "main.h"
#include <stdio.h>

/**
 * helper - fonction auxiliaire pour vérifier la primalité d'un nombre
 * @n: le nombre à vérifier
 * @i: le diviseur courant pour vérifier la primalité
 * Return: 1 si n est un nombre premier sinon 0
 */

int helper(int n, int i)
{
	if (n <= 1)
	{
		return (0);
	}
	if (i * i > n)
	{
		return (1);
	}
	if (n % i == 0)
	{
		return (0);
	}
	return (helper(n, i + 1));
}

/**
 * is_prime_number - une fonction qui renvoie 1
 * si l'entier d'entrée est un nombre  premier,sinon renvoie 0
 * @n: le nombre à vérifier
 * Return: 1 si n est un nombre premier sinon 0
 */

int is_prime_number(int n)
{
	return (helper(n, 2));
}
