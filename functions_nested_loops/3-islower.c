#include "main.h"
#include <stdio.h>

/**
 * _islower - Vérifie si un caractère est en minuscule.
 * @c: Le caractère à vérifier.
 * Return: 1 si c'est miniscule, 0 sinon
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
