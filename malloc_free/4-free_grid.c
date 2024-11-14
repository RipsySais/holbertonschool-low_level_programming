#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * free_grid - libère une grille bidimensionnelle d'entiers
 * @grid: pointeur vers le tableau bidimensionnel à libérer
 * @height: hauteur du tableau (nombres de ligne)
 */

void free_grid(int **grid, int height)
{
	int i;

	if (grid == NULL || height <= 0)
		return;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
