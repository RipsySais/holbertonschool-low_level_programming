#include "dog.h"
#include <stdio.h>

/**
 * init_dog - initialise une variable de type struct dog
 * @d: pointeur vers la structure à initialiser
 * @name: nom de chien
 * @age: age du chien
 * @owner:propriétaire du chien
 * description: cette fonction initialise une variable de type
 * struct dog a	vec la valeur fournies.
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
