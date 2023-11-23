#include "main.h"
#include <stdio.h>

/**
 * print_binary - prints the binary representation of a number.
 * @n: the number to convert.
 *
 * Return: void
 */

void print_binary(unsigned long int n)
{
	int i, num = 0;
	unsigned long int mask = 1UL << 63;

	for (i = 0; i < 64; i++)
	{
		if (n <  2)
		{
			_putchar('0' + n);
			break;
		}
		if (n & mask)
		{
			_putchar('1');
			num = 1;
		}
		else
		{
			if (num == 1)
				_putchar('0');
		}
		mask >>= 1;
	}
}
