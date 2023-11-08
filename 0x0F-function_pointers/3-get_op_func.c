#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * get_op_func - select the correct operation function asked by user
 * @s: operator argument
 * Return: function pointer corresponding to operator given
 */

int (*get_op_func(char *s))(int, int)
{
	int i;
	
	if (s == NULL)
		return (NULL);
	
	op_t operations[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};

	i = 0;
	
	while (i < 5)
	{
		if (operations[i].op[0] == s[0])
			return (operations[i].f);
		i++;
	}
	return (NULL);
}
