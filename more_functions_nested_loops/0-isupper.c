#include "main.h"
#include <ctype.h>

/**
 * _isupper - Verification des caractères majuscule
 * Return: 1 si c'est un majuscule, 0 si autres
 * @c: c'est le carectère a vérifier
 */

int _isupper(int c)
{
	if ((c >= 'A') && (c <= 'Z'))
		return (1);

	else
		return (0);
}
