#include <stdio.h>

/**
 * main - imprime tous les nombres de base 16
 * en minuscules, suivis d'une nouvelle ligne.
 * Return: 0 (sucess)
 */

int main(void)
{
	int num;

	for (num = 0; num < 16; num++)
	{
		if (num + '0')
			putchar(num + '0');
		else
			putchar(num - 10 + 'a');
	}

	putchar('\n');

	return (0);
}
