#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_char - imprimer un caractère
 * @ap: l'argument de la variable
 */

void print_char(va_list ap)
{
	printf("%c", va_arg(ap, int));
}

/**
 * print_float - imprimer un nombre flottant
 * @ap: l'argument de la variable
 */

void print_float(va_list ap)
{
	printf("%f", va_arg(ap, double));
}

/**
 * print_int - imprimer un nombre entier
 * @ap: l'argument de la variable
 */

void print_int(va_list ap)
{
	printf("%d", va_arg(ap, int));
}

/**
 * print_string - imprimer une chaine de caractère
 * @ap: l'argument de la variable
 */

void print_string(va_list ap)
{
	char *s = va_arg(ap, char*);

	if (!s)
		s = "(nil)";
	printf("%s", s);
}

/**
 * print_all - imprime n'importe quoi en fonction des types spécifiés
 * @format: listes des types d'arguments passés à la fonction
 */

void print_all(const char * const format, ...)
{
	format_specifier_t; specifiers[] = {
		{'c', print_char},
		{'f', print_float},
		{'i', print_int},
		{'s', print_string},
		{'\0', NULL},
	};

	va_list ap;
	int index = 0, j;
	char *separator = "";

	va_start(ap, format);
	while (format && format[index])
	{
		j = 0;
		while (specifiers[j].specifier)
		{
			if (format[index] == specifiers[j].specifier)
			{
				printf("%s", separator);
				specifiers[j].print_func(ap);
				separator = ", ";
				break;
			}
			j++;
		}
		index++;
	}
	va_end(ap);
	printf("\n");
}
