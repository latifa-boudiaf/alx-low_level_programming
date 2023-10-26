#include <stdio.h>
#include "main.h"

/**
 * prime - Check if number is prime
 * @n: Number to check
 * @i: Number to check against
 *
 * Return: 1 if prime, 0 if otherwise
 */

int prime(int n, int i)
{
	if (n % i == 0 && i < (n / 2))
		return (0);
	else if (i >= (n / 2))
		return (1);
	else
		return (prime(n, i + 1));
}

/**
 * is_prime_number - Check if an integer is a prime number.
 * @n: The integer to be checked.
 *
 * Return: 1 if n is a prime number, 0 otherwise.
 */

int is_prime_number(int n)
{
	if (n > 1)
		return (prime(n, 2));
	return (0);
}
