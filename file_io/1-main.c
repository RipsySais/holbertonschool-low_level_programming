#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - Programme de test pour create_file
 * @ac: nombre d'arguments
 * @av: tableau d'arguments
 * Return: 0 en cas de succès
 */
int main(int ac, char **av)
{
	int res;

	if (ac != 3)
	{
		dprintf(2, "Usage: %s filename text\n", av[]);
		return (1);
	}

	res = create_file(av[1], av[2]);
	printf("-> %i\n", res);

	return (0);
}
