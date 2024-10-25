#include <stdio.h>

/**
 * main - imprime toutes les combinaisons
 * possibles de nombres à un chiffre.
 * Return: 0 (sucess)
 */

int main(void)
{
	int num;

	for (num = 0; num < 10; num++)
	{
		putchar(num + '0');

		if (num < 9)
		{
			putchar(',');

			putchar(' ');
		}
	}

	putchar('\n');
	return (0);
}
