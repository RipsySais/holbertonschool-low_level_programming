#include "main.h"
#include <stdio.h>

/**
 * swap_int - Echange les valeurs de 2 entiers
 * @a: pointeur vers le prémier entier
 * @b: pointeur vers le deuxième entier
 */

void swap_int(int *a, int *b)
{
	int temp = *a;

	*a = *b;
	*b = temp;
}
