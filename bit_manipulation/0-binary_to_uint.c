#include "main.h"

/**
 * binary_to_uint - convertit une chaine de caractère binaire
 * en entier non signé
 * @b: pointeur vers une chaine de caractère
 * contenant des '0' et des '1'
 * Return: le nombre converti, ou '0' si:
 * il y'a plusieurs caractères dans la chaine b qui ne sont pas
 * '0' et ou '1', b est NULL
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int num = 0;

	if (b == NULL)
		return (0);

	while (*b)
	{
		if (*b != '0' && *b != '1')
			return (0);

		num = num * 2 + (*b - '0');
		b++;
	}

	return (num);
}
