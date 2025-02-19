#include <stdio.h>

/**
 * main - Affiche tous les nombres de base en 16 en minuscule
 * Description: Utilis√ putchar pour afficher les caract√res
 * Return: 0 (succ√s)
 */

int main(void)
{
	char ch;

	for (ch = '0'; ch <= '9'; ch++)
		putchar(ch);

	for (ch = 'a'; ch <= 'f'; ch++)
		putchar(ch);
	putchar('\n');

	return (0);
}
