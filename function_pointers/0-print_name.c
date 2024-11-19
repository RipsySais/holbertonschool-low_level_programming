#include "function_pointers.h"
#include <stdio.h>

/**
 * print_name - imprime un nom en utilisant une fonction fournie
 * @name: le nom à imprimer
 * @f: pointeur vers la fonction qui imprime le nom
 */

void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
	{
		f(name);
	}
}
