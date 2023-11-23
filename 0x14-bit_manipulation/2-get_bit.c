#include "main.h"

/**
 * get_bit -  returns the value of a bit at a given index.
 * @n : unsigned int
 * @index : the index of the bit
 *
 * Return: the value of the bit at index index or -1 if an error.
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int i, result;

	if (index > 64)
		return (-1);

	for (i = 0; i <= index ; i++)
	{
		result = n % 2;
		n /= 2;
	}
	return (result);
}
