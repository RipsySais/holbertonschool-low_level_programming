#include <stdio.h>

/**
 * main - en minuscule, suivi d'une nouvelle ligne.
 * Return: 0 (sucess)
 *
 */

int main(void)
{
	char ch = 'a';

	while (ch <= 'z')

	{
		putchar(ch);
		ch++;
	}
	putchar('\n');

	return (0);
}
