#include "main.h"
#include <stdio.h>

/**
 * jack_bauer - Imprime chaque minute de la journée de 00h00 à 23h59
 * Return: (void)
 */

void jack_bauer(void)
{
	int heure, minute;

	for (heure = 0; heure < 24; heure++)
	{
		for (minute = 0; minute < 60; minute++)
		{
			_putchar((heure / 10) + '0');
			_putchar((heure % 10) + '0');
			_putchar(':');
			_putchar((minute / 10) + '0');
			_putchar((minute % 10) + '0');
			_putchar('\n');
		}
	}
}
