#include "main.h"
#include <string.h>
#include <stdio.h>

/**
 * _strlen_recursion - une fonction qui renvoie la longueur d'une chaîne
 * @s: la chaine du caractère dont la longueur est à calculer
 * Return: la longueur de la chaine de caractère
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	else
	{
		return (1 + _strlen_recursion(s + 1));
	}
}
