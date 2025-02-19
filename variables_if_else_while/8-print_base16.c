#include <stdio.h>

/**
 * main - imprime tous les nombres de base 16
 * en minuscules, suivis d'une nouvelle ligne.
 * Return: 0 (sucess)
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
