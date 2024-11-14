#include <stdlib.h>
#include <ctype.h>
#include <stdio.h>

/**
 * is_number - Vérifier si la chaine de caractère est un nombre
 * @str: la chaine de caractère à vérifier
 * Return: 1 si la chaine est un nombre sinon 0
 */

int is_number(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (!isdigit(str[i]))
		{
			return (0);
		}
	}
	return (1);
}

/**
 * main - programme qui additionne des nombres positifs passés en argument
 * @argc: le nombre d'arguments passés au programme
 * @argv: un tableau de chaine de caractères représentant les arguments
 * Return: 0 si le programme s'exécute corretement, 1 en cas d'erreur
 */

int main(int argc, char *argv[])
{
	int sum = 0;
	int i;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}

	for (i = 0; i < argc; i++)
	{
		if (!is_number(argv[i]))
		{
			printf("Erreur\n");
			return (1);
		}
		sum = sum + atoi(argv[i]);
	}
	printf("%d\n", sum);
	return (0);
}
