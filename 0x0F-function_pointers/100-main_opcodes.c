#include<stdio.h>
#include<stdlib.h>

/**
 * main- Entry point
(* a blank line
 *@argc: the number of parameters.
 *@argv: the parameeters in the case the number ob bytes.
* Description: this program prints opcodes in hexa)?
* Return: 0 in succes
*/

int main(int argc, char *argv[])
{
	int i, num;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	num = atoi(argv[1]);
	if (num < 0)
	{
		printf("Error\n");
		return (2);
	}

	for (i = 0; i < num; i++)
	{
		printf("%02hhx", *((char *)main + i));
		if (i < num - 1)
			printf(" ");
		else
			printf("\n");
	}
	return (0);
}
