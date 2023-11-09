#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_numbers - Prints a variable number of integers with a separator.
 * @separator: The string to be printed between numbers.
 * @n: The number of integers to print.
 * @...: The variable number of integers to be printed.
 *
 * Description: This function prints a variable number of integers separated
 * by the specified separator. A new line is printed at the end.
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	int number;

	va_list args;
	va_start(args, n);
	va_end(args);

	for (i = 0; i < n; i++)
	{
		number = va_arg(args, int);
		printf("%d", number);
		if (i < n - 1 && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
}
