#include "main.h"

/**
 * sqrt - Find the square root
 * @n: Number to find square root of
 * @i: The number checked to see if it's the sqrt of n
 *
 * Return: The square root value
 */

int sqrt(int n, int i)
{
	if (i * i == n)
	{
		return (i);
	}
	else if (i >= n / 2)
		return (-1);
	return (sqrt_check(n, i + 1));
}

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: The number for which to calculate the square root
 * Return: The natural square root of n, or -1 if n has no natural square root
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	if (n <= 1)
		return (n);
	else
		return (sqrt(n, 2));
}
