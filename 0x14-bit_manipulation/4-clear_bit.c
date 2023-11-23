#include "main.h"
/**
 * clear_bit - sets bit to 0 at given index
 * @n: pointer to unsigned long int
 * @index: index to set to 0
 *
 * Return: 1 if succeed -1 if failed
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int len, k;

	len = sizeof(*n) * 8 - 1;

	if (index > len)
		return (-1);
	k = 1 << index;
	*n = *n & -k;

	return (1);
}
