#ifndef CALC_H
#define CALC_H

#include <stdlib.h>
#include <stdio.h>
#include <stddef.h>

/**
 * struct op - structure des opérations
 * @op: L'opérateur
 * @f: la fonction associée pour effectuer les opération
 */

typedef struct op
{
	char *op;
	int (*f)(int a, int b);
} op_t;

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);
int (*get_op_func(char *s))(int, int);

#endif
