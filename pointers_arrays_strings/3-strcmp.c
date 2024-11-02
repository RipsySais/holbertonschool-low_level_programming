#include "main.h"
#include <string.h>
#include <stdio.h>

/**
 * _strcmp - compare deux chaines de caractères
 * @s1: pointeur vers la première chaine
 * @s2: pointeru vers la deuxième chaines
 * Return: un entier inférieur, égal ou superieur à zéro
 * si s1 est respectivement inférieur, égal ou supérieur à s2
 */

int _strcmp(char *s1, char *s2)
{
	while (*s1 && (*s1 == *s2))
	{
		s1++;
		s2++;
	}
	return (*(unsigned char *)s1 - *(unsigned char *)s2);
}
