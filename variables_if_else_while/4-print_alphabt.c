#include <studio.h>

/**
 * main - programme qui imprime l'alphabet en minuscules
 *  suivi d'une nouvelle ligne.
 *
 *  Return: 0 (sucess)
 */

int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)

	{
		if (ch != 'q' && ch != 'e')
		{
			putchar (ch);
		}

	}
	putchar ('\n');

	return (0);
}
