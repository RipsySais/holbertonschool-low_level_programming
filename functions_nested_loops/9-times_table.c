#include "main.h"
#include <stdio.h>

/**
 * times_table - imprime la table de 9 fois
 */

void times_table(void)
{
	int i, j;
	int result;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			result = i * j;
			if (j != 0)
			{
				printf(", ");
				if (result < 10)
					printf(" ");
			}
			printf("%d", result);
		}
		printf("$\n");
	}
}
