#include "main.h"

/**
 * flip_bits - renvoie le nombre de bits à inverser
 * pour passé de n à m
 * @n: le premier nombre
 * @m: le second nombre
 * Return: le nombre de bits à inverser
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xor = n ^ m;
	unsigned int count = 0;

	while (xor)
	{
		count += xor & 1;
		xor >>= 1;
	}

	return (count);
}
