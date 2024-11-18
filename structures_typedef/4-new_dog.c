#include "dog.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/**
 * new_dog - Crée un nouveau chien
 * @name: Nom du nouveau chien
 * @age: age du nouveau chien
 * @owner: propriétaire du nouveau chien
 * Return: un pointeur vers la nouvelle structure dog,
 * ou NULL si l'allocation échoue
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog;
	char *name_copy;
	char *owner_copy;

	/* Allouée de la mémoire pour la nouvelle structure dog_t */
	new_dog = malloc(sizeof(dog_t));
	if (new_dog == NULL)
	{
		return (NULL);
	}

	/* Alloue de la mémoire et copier le nom */
	name_copy = malloc(strlen(name) + 1);
	if (name_copy == NULL)
	{
		free(new_dog);
		return (NULL);
	}

	strcpy(name_copy, name);

	/* allouée de la mémoire et copier le propriétaire */
	owner_copy = malloc(strlen(owner) + 1);
	if (owner_copy == NULL)
	{
		free(name_copy);
		free(new_dog);
		return (NULL);
	}
	strcpy(owner_copy, owner);

	/* Initialiser la structure */
	new_dog->name = name_copy;
	new_dog->age = age;
	new_dog->owner = owner_copy;

	return (new_dog);
}
