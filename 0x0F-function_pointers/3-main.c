#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>


/**
 * main - Entry point
 * @argc: the number of the parameters
 * @argv: the parameters in the case the number to be calculated.
(* a blank line
* Description: this program is the enttry point for a calculator)?
(* section header: 3-calc.h)*
* Return: 0 in success
*/

int main(int argc, char *argv[])
{
	int num1, num2, res;
	int (*fun)(int, int);

	if (argc < 4 || argc > 4)
	{
		printf("Error\n");
		exit(98);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);

	fun = get_op_func(argv[2]);

	if (fun == NULL)
	{
		printf("Error\n");
		exit(99);
	}
	res = fun(num1, num2);

	printf("%d\n", res);
	return (0);
}
