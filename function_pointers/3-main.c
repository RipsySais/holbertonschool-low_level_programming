#include "3-calc.h"

/**
 * main - programme principal pour effectuer des opérateurs simples
 *@argc: nombre d'argument
 *@argv: tableau d'argument
 *Return: 0 si tout se passe bien ou un code d'erreur
 */

int main(int argc, char *argv[])
{
	int num1, num2, result;
	char *operator;

	if (argc < 4)
	{
		printf("Error\n");
		exit(98);
	}

	operator = argv[2];
	if (argv[2][1])
	{
		printf("Error\n");
		exit(99);
	}

	if (*operator != '+' && *operator != '-' && *operator != '*' &&
	*operator != '/' && *operator != '%')
	{
		printf("Error\n");
		exit(99);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
	result = (*get_op_func(operator))(num1, num2);
	printf("%d\n", result);

	return (0);
}
