#include "main.h"

/**
 * print_binary - affiche la répresentation binaire
 * d'un nombre non signé
 * @n: le nombre à convertir et afficher
 */

void print_binary(unsigned long int n)
{
	if (n > 1)
		print_binary(n >> 1);

	putchar((n & 1) ? '1' : '0');
}
