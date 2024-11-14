#include <stdlib.h>
#include <ctype.h>
#include <stdio.h>

/**
 * main - un programme qui additionne des nombres positifs.
 * @argc: le nombre d'argument passés au programme
 * @argv: un tableau de chaine de caractère
 * Return: 0
 */

int main(int argc, char **argv)
{
	int somme = 0;
	int i, j;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}

	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (argv[i][j] < '0' || argv[i][j] > '9')
			{
				printf("error\n");
				return (1);
			}
		}
		somme += atoi(argv[i]);
	}
	printf("%d\n", somme);
	return (0);
}
