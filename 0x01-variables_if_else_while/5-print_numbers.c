#include <stdio.h>

/* prints all single digit numbers of base 10 */
/**
 * main- the entry point of the program.
 * Return: 0(success).
 */
int main(void)
{
	int num;

	for(num = 0; num < 10; num++)
	{
		printf("%d", num);
	}
	printf('\n');
	return (0);
}
