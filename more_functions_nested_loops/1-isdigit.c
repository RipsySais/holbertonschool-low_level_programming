#include "main.h"
#include <stdio.h>

/**
 * _isdigit - fonction qui vérifie la présence d'un chiffre (de 0 à 9)
 * @c: caractère qui doit etre tester
 * Return: 1 si C est un chiffre sinon 0
 */

int _isdigit(int c)
{
	if (c >= 0 && c <= 9)
		return (1);

	else
		return (0);
}
