#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * op_add - retourne la somme de a et b
 * @a:le premier entier
 * @b: le second entier
 * Return: retourne la somme de a et b
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - retourne la différence de a et b
 * @a: le premier entier
 * @b: second entier
 * Return: retourne la différence de a et b
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - retourne le produit de a et b
 * @a:le premier entier
 * @b:second entier
 * Return: le produit de a et b
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - retourne le résultat de division de a et b
 * @a:premier entier
 * @b:second entier
 * Return: de la division de a et b
 */

int op_div(int a, int b)
{
	if (b == 0)

	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}

/**
 * op_mod - retourne le reste de division de a par b
 * @a:premier entier
 * @b:second entier
 * Return: le reste de division de a par b
 */

int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
