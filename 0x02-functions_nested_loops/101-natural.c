#include <stdio.h>

/**
 * main- entry point.
 * Return: 0(success).
 */

int main(void)
{
	int limit = 1024; /* The limit (exclusive) */
	int sum,i = 0;

	for(i = 1; i < limit; i++)
	{
		if (i % 3 == 0 || i % 5 == 0)
		{
			sum += i;
		}
	}

	printf("The sum of multiples of 3 or 5 below 1024 is: %d\n", sum);

	return (0);
}
