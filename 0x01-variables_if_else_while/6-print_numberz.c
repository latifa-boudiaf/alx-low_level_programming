#include <stdio.h>

/* prints all single digit numbers of base 10 */
/**
 * main- the entry point of the program.
 * Return: 0(success).
 */
int main(void)
{
	int num = 0;
	while (num < 10)
	{
		putchar(num + '0');
		num++;
	}
	putchar('\n');
	return (0);
}
