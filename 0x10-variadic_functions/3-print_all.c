#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_all - Prints anything based on the format string.
 * @format: A list of types of arguments to be printed.
 * Description: This function prints arguments according to the given format.
 * Supported format characters: c (char), i (integer), f (float), s (char*).
 * If the string is NULL, it prints "(nil)".
 * Any other format character is ignored.
 * A new line is printed at the end.
 */
void print_all(const char * const format, ...)
{
	unsigned int i;
	char *separator;
	char *str;
	va_list args;
	va_start(args, format);
	i = 0;
	separator = "";


	while (format != NULL && format[i])
	{
		switch (format[i])
		{
			case 'c':
				printf("%s%c", separator, va_arg(args, int));
				break;
			case 'i':
				printf("%s%d", separator, va_arg(args, int));
				break;
			case 'f':
				printf("%s%f", separator, va_arg(args, double));
				break;
			case 's':
				{
					str = va_arg(args, char *);
					if (str == NULL)
						str = "(nil)";
					printf("%s%s", separator, str);
					break;
				}
			default:
				break;
		}
		separator = ", ";
		i++;
	}

	va_end(args);
	printf("\n");
}
