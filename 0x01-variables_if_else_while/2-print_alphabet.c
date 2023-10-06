#include <stdio.h>

/* This program prints the letters of the alphabet from a through z */

/**
 * main- the entry point of the C program.
 * Return: 0(success)
 */
int main(void)
{
	char letter = 'a';

	while (letter <= 'z')
	{
		putchar(letter);
		letter++;
	}
	putchar('\n');
	return (0);
}
