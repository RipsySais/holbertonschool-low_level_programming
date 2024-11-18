#include "dog.h"
#include <stdlib.h>
#include <string.h>
/**
 * _strlen - renvoie la longeur d'une chaine
 * @s: ponteur vers la chaine
 * Return: length
 */

int _strlen(char *s)
{
	int length = 0;

	while (s[length] != '\0')
		length++;

	return (length);
}

/**
 * *_strcpy - renvoie la longueur d'une chaîne
 * @dest: copier la chaine
 * @src: chaine à copier
 * Return: dest
 */

char *_strcpy(char *dest, char *src)
{
	int i;

	i = 0;

	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

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

	if (name == NULL || age < 0 || owner == NULL)
	{
		return (NULL);
	}

	new_dog = malloc(sizeof(dog_t));

	if (new_dog == NULL)
	{
		return (NULL);
	}

	new_dog->name = malloc(sizeof(char) * (_strlen(name) + 1));

	if (new_dog->name == NULL)
	{
		free(new_dog);
		return (NULL);
	}

	new_dog->owner = malloc(sizeof(char) * (_strlen(owner) + 1));

	if (new_dog->owner == NULL)
	{
		free(new_dog->name);
		free(new_dog);
		return (NULL);
	}

	new_dog->name = _strcpy(new_dog->name, name);
	new_dog->age = age;
	new_dog->owner = _strcpy(new_dog->owner, owner);

	return (new_dog);
}
