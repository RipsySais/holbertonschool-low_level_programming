#include <stdio.h>
#include <stdlib.h>

/**
 * main - imprimer sa propre fonction
 * @argc: nombres d'arguments
 * @argv: taille de chaine
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int index, bytes;
	int (*address)(int, char **) = main;

	unsigned char inserer;

	if (argc != 2)
	{
		printf("Error\n");
			exit(1);
	}

	bytes = atoi(argv[i]);
	if (bytes < 0)
	{
		printf("Error\n");
		exit(2);
	}

	for (index = 0; index < bytes; index++)
	{
		inserer = *(unsigned char *)address;
		printf("%.2x", inserer);
		if (index == bytes - 1)
			continue;

		printf(" ");
		address++;
	}
	printf("\n");

	return (0);
}
