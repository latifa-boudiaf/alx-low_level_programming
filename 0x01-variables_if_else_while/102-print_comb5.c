#include <stdio.h>

/* Prints all possible combinations of two two-digit numbers. */
/**
 * main - Entry point
 * Return: 0(Success)
 */
int main(void)
{
	int i, j;

	for (i = 0; i <= 98; i++)
	{
		for (j = i + 1; j <= 99; j++)
		{
			/* Print the first two-digit number with leading zeros if needed */
			putchar('0' +  (i / 10));
			putchar('0' + (i % 10));
			/* Print a space between the two numbers */
			putchar(' ');
			/* Print the second two-digit number with leading zeros if needed */
			putchar('0' + (j / 10));
			putchar('0' + (j % 10));
			/* Print a comma and space between combinations */
			if (i != 98 || j != 99)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
