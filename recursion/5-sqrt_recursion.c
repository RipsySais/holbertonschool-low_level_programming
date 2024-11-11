#include "main.h"
#include <string.h>
#include <stdio.h>

/**
 * helper - fonction auxiliaire pour trouver la racine carrée
 * @n: le nombre dont ont veut trouver la racine carrée
 * @i: l'itérateur utilisé pour trouver la racine carrée
 * Return: la racine carrée naturelle de n ou -1 si elle l'existe pas
 */

int helper(int n, int i)
{
	if (i * i > n)
	{
		return (-1);
	}
	if (i * i == n)
	{
		return (i);
	}
	return (helper(n, i + 1));
}

/**
 * _sqrt_recursion - une fonction qui renvoie la racine
 * carrée naturelle d'un nombre.
 * @n: le nombre dont ont veut trouver la racine carrée
 * Return: la racine carrée naturelle de n ou -1 si elle n'existe pas
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	return (helper(n, 0));
}
