#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_all - une fonction qui imprime n'importe quoi.
 * @format: listes des types d'arguments passés à kla fonction
 */

void print_all(const char * const format, ...)
{
	va_list args;
	unsigned int i = 0;
	char *str;
	const char *separator = "";

	va_start(args, format);

	while (format && format[i])
	{

		switch (format[i])
		{
			case 'c':
				printf("%s%c", separator, va_arg(args, int));
				break;
			case 'i':
				printf("%s%d", separator, va_arg(args, int));
				break;
			case 'f':
				printf("%s%f", separator, va_arg(args, double));
				break;
			case 's':
				str = va_arg(args, char *);
				if (!str)
				{
					str = "(nil)";
				}
					printf("%s%s", separator, str);
					break;
			default:
					i++;
				continue;
		}
		separator = ",";
		i++;
	}
	va_end(args);
	printf("\n");
}
