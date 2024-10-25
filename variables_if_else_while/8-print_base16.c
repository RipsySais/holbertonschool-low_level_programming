#include <stdio.h>

/**
 * main - imprime tous les nombres de base 16
 * en minuscules, suivis d'une nouvelle ligne.
 * Return: 0 (sucess)
 */

int main(void)
{
	int num;
	int seize;

	{
		for (num = 0; num < 16; num++)
			putchar((num % 10) + '0');

		for (seize = 'a'; seize < 'f'; seize++)
			putchar(seize);
	}

	putchar('\n');

	return (0);
}
