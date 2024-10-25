#include <stdio.h>

/**
 * main - imprime l’alphabet minuscule à l’envers,
 * suivi d’une nouvelle ligne.
 *Return: 0 (sucess)
 */

int main(void)
{
	char ch;

	for (ch = 'z'; ch >= 'a'; ch--)
	{
		putchar(ch);
	}

	putchar('\n');

	return (0);
}
