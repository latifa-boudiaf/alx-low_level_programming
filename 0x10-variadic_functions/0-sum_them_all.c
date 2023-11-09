#include "variadic_functions.h"

/**
 * sum_them_all - sums all arguments passed
 *
 * @n: number of arguments
 *
 * Return: sum of arguments
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int s;
	va_list list;

	s = 0;

	va_start(list, n);
	for (i = 0; i < n; i++)
		s += va_arg(list, int);

	va_end(list);

	return (s);
}
