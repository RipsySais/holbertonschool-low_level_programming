#include <stdio.h>

/**
 * main - imprime toutes les combinaisons possibles de deux chiffres.
 * Les nombres doivent être séparés par ,, suivi d'un espace
 * Return: 0 (sucess)
 */

int main(void)
{
	int i, j;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			putchar(i + '0');
			putchar(j + '0');
			if (i != 8 || j != 9)
			{
				putchar(',');

				putchar(' ');
			}

		}
	}
	putchar('\n');
	return (0);
}
