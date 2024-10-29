#include <stdio.h>
#include <string.h>

/**
 * _strlen - renvoie la longueur d'une chaine
 * @s: pointeur vers la chaine de caractères
 * Return: longueur de la chaine de caractères
 */

int _strlen(char *s)
{
	int length = 0;

	while (s[length] != '\0')
	{
		length++;
	}

	return (length);
}
