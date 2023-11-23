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
	unsigned long int mask = 1UL << (sizeof(unsigned long int) * 8 - 1);

	for (i = 0; i < 64; i++)
	{
		if (n <  2)
		{
			putchar('0' + n);
			break;
		}
		if (n & mask)
		{
			putchar('1');
			num = 1;
		}
		else
		{
			if (num == 1)
				putchar('0');
		}
		mask >>= 1;
	}
}
