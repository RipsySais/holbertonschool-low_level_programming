#include "main.h"
#include <string.h>
#include <stdio.h>

/**
 * _strpbrk - recherche la première de l'occurrence dans la chaine
 * s de l'un des octets de la chaine accepte
 * @s: pointeur vers la chaine de caractère principale
 * @accept: pointeur vers la chaine de caractère
 * contenant les caractères recherche
 * Return: pointeur vers l'octet s,qui correspond à un des octet de accept
 * ou NULL si aucun n'est trouvé
 */
char *_strpbrk(char *s, char *accept)
{
	char *a;

	while (*s)
	{
		for (a = accept; *a; a++)
		{
			if (*s == *a)
			{
				return (s);
			}
		}
		s++;
	}
	return (NULL);
}
