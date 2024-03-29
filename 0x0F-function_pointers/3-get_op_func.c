#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * get_op_func- This is the get_op_func function
 * Description: This function gets the operator for the operation
 * @s: The operator to be used
 * Return: Returns integers
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[6] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i;

	i = 0;
	while (i < 6)
	{
		if (strcmp(s, ops[i].op) == 0)
		{
			return (ops[i].f);
		}
		i = i + 1;
		}
	return (NULL);
}
