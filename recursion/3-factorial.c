#include "main.h"
#include <stdio.h>
/**
 * factorial - fonction qui renvoie la factorielle
 * @n: pointeur
 * Return: factorial de n
 */
int factorial(int n)
{
	if (n == 0 || n == 1)
	{
		return (1);
	}
	if (n > 1)
	{
		return (n * factorial(n - 1));
	}
	else
		return (-1);
}

