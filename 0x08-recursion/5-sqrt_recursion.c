#include "main.h"
/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: The number for which to calculate the square root
 * Return: The natural square root of n, or -1 if n has no natural square root
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0 || n == 1)
		return (n);
	else
		_sqrt_recursion(n - 1);
}
