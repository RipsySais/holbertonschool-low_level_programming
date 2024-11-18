#include "dog.h"
#include <stdio.h>

/**
 * print_dog - imprimer les information d'une structure dog
 * @d: pointeur vers la structeur à imprimer
 * description: cette fonction imprime les information d'une structure
 * dog le pointeur d est NULL, la fonction n'imprime rien
 */

void print_dog(struct dog *d)
{
	if (d == NULL)
	{
		return;
	}

	if (d->name == NULL)
	{
		printf("Name: (nil)\n");
	}
	else
	{
		printf("Name: %s\n", d->name);
	}

	printf("Age: %.6f\n", d->age);

	if (d->owner == NULL)
	{
		printf("Owner: (nil)\n");
	}
	else
	{
		printf("Owner: %s\n", d->owner);
	}

}
