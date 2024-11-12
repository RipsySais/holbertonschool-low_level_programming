#include <stdlib.h>
#include <stdio.h>

/**
 * main - programme qui multiplie deux nombres passés en arguments
 * @argc: le nombre d'arguments passés au programme
 * @argv: un tableau de chaine de carctères répresentant les arguments
 * Return: 0 si le programme s'exécute correctement,1 si erreur
 */

int main(int argc, char *argv[])
{
	int num1, num2, result;

	if (argc != 3)
	{
		printf("Erreur\n");
		return (1);
	}
	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);
	result = num1 * num2;

	printf("%d\n", result);

	return (0);
}
