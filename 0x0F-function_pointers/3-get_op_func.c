#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *get_op_func - no idea
 *@s: type of operation
 *Return: operation or null
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

	while (i < 5)
	{
		if (s && s[0] == ops[i].op[0] && !s[1])
			return (ops[i].f);
		i++;
	}
	printf("Error\n");
	exit(99);
}
