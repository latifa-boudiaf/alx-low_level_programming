#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - Prints a variable number of strings.
 * @separator: The string to be printed between the strings.
 * @n: The number of strings to be printed.
 * @...: The variable number of strings to be printed.
 * Description: This function prints a variable number of strings separated
 * by the specified separator. If a string is NULL, it prints "(nil)".
 * A new line is printed at the end.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *str;
	va_list args;
	va_start(args, n);


	for (i = 0; i < n; i++)
	{
		str = va_arg(args, char *);
		if (str != NULL)
			printf("%s", str);
		else
			printf("(nil)");

	if (i < n - 1 && separator != NULL)
		printf("%s", separator);
	}

	va_end(args);
	printf("\n");
}
