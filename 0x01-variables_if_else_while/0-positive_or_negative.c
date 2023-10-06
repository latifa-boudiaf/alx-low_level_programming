#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/* This program checks if a number is positive or negative */

/**
 * main- The main function of the program.
 * It checks whether a number is positive, negative, or zero.
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
		printf("%d is positive\n", n);
	else if (n == 0)
		printf("%d is zero\n", n);
	else
		printf("%d is negative\n", n);
	/**
	* main- The entry point in C.
	* Return: 0(success)
	*/
	return (0);
}
