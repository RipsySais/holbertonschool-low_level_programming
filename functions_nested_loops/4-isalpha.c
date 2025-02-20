#include "main.h"
#include <stdio.h>

/**
 * _isalpha - Vérifie si un caractère est alphabétique.
 * @c: Le caractère à vérifier.
 * Return: 1 si c est une lettre, minuscule ou majuscule, 0 sinon.
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
