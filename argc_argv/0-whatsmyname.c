#include <stdlib.h>
#include <stdio.h>

/**
 * main - programme qui affiche son nom,suivi d'une nouvelle ligne
 * @argc: le nombre d'argument passés au programme
 * @argv: le tableau de chaine de caractère répresentant les arguments
 * Return: retoune 0 si le programme s'exécute correctement
 */

int main(int argc, char *argv[])
{
	(void)argc;

	printf("%s\n", argv[0]);
	return (0);
}
