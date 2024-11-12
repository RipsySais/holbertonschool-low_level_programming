#include <stdlib.h>
#include <stdio.h>

/**
 * main - programme qui affiche le nombre d'argument passé
 * @argc: nombre d'arguments passés au programme
 * @argv: le  tableau de chaine de caractères répresentant les arguments
 * Return: 0 si le programme s'exécute corretement
 */

int main(int argc, char *argv[])
{
	(void)argv;

	printf("%d\n", argc - 1);
	return (0);
}
