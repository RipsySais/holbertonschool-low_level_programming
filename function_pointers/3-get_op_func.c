#include "3-calc.h"

/**
 * get_op_func - sélectionne la fonction correcte pour
 * effectuer l'opération demandée par l'utilisateur
 * @s:l'opérateur passé en argument au programme
 * Return: un pointeur vers la fonction correspondante
 */

int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};

	int i = 0;

	while (ops[i].op != NULL && *(ops[i].op) != *s)
		i++;

	return (ops[i].f);

}
