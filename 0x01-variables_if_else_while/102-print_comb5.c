#include <stdio.h>

/* Prints all possible combinations of two two-digit numbers. */
/**
 * main - Entry point
 * Return: 0(Success)
 */
int main(void)
{
	int i, j;

	for (i = 0; i <= 99; i++)
	{
		for (j = i; j <= 99; j++)
		{
			// Print the first two-digit number with leading zeros if needed
			putchar('0' +  (i / 10));
			putchar('0' + (i % 10));
			// Print a space between the two numbers
			putchar('0' + (j / 10));
			putchar('0' + (j % 10));
			// Print a comma and space between combinations
			if (i != 99 || j != 99)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
