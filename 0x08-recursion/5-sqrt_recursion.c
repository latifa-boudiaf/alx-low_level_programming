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
		sqrt_helper(n, 1);
}
/**
 * sqrt_helper - helper function to find the square root
 * @n: The number for which to calculate the square root
 * @guess: The current guess for the square root
 * Return: The natural square root of n, or -1 if no exact square root is found
 */
int sqrt_helper(int n, int guess)
{
	if (guess * guess == n)
		return (guess);
	if (guess * guess > n)
		return (-1);
	return (sqrt_helper(n, guess + 1));
}
