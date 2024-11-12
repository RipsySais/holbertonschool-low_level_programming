#include <stdlib.h>
#include <stdio.h>

/**
 * main - programme qui imprime tous les arguments reçus
 * @argc: le nombre d'arguments passés au programme
 * @argv: le tabeau de chaine de caractères répresentant les arguments
 * Return: 0 si le programme s'éxecute corretement
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
