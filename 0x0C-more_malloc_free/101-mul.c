#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * is_valid_number - Check if a string contains only digits
 * @str: The input string to check
 * 
 * Return: 1 if it's a valid number, 0 otherwise
 */
int is_valid_number(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++) 
		if (!isdigit(str[i])) 
			return (0);  /* Not a valid number */
	return (1);  /* Valid number */
}

/**
 * multiply - Multiply two positive numbers
 * @num1: The first number
 * @num2: The second number
 * 
 * Return: The product of num1 and num2
 */
int multiply(int num1, int num2)
{
	return (num1 * num2);
}

int main(int argc, char *argv[])
{
	char *num1_str; = argv[1];
	char *num2_str;= argv[2];
	int num1, num2, result;

	num1_str = argv[1];
	num2_str = argv[2];
	num1 = atoi(num1_str);
	num2 = atoi(num2_str);

	if (argc != 3)
	{
		printf("Error\n");
		return (98);  /* Incorrect number of arguments */
	}

	if (!is_valid_number(num1_str) || !is_valid_number(num2_str))
	{
		printf("Error\n");
		return (98);
	}

	if (num1 < 0 || num2 < 0)
	{
		printf("Error\n");
		return (98);
	}

	result = multiply(num1, num2);
	printf("%d\n", result);
	return (0);
}
