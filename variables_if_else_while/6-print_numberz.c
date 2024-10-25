#include <stdio.h>
/**
 * main - imprime tous les nombres à un chiffre de base 10
 * en commençant par 0, suivis d'une nouvelle ligne.
 *
 * Return: 0 (sucess)
 */

int main(void)
{
	int num;

	for (num = 0; num < 10; num++)
	{
		putchar((num % 10) + '0');
	}

	putchar('\n');

	return (0);
}
