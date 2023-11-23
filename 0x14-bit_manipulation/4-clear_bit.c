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
	if (index >= 64)
		return (-1);
	if (*n& (1UL << index))
		*n &= ~(1UL << index);

	return (1);
}
