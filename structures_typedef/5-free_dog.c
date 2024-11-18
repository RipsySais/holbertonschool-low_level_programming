#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - libère la mémoire allouée pour la structure dog_t
 * @d: pointeur vers la structure libérer
 * description: cette fonction libère la mémoire allouée pour la structure
 * y compris les chaines de caractère pour le nom et le propriétaire
 */

void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
