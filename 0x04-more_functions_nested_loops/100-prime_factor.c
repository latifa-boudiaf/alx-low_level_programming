#include <stdio.h>
#include <math.h>

int main(void)
{
	long long number = 612852475143;
	long long largestPrime = -1;

	while (number % 2 == 0)
	{
		largestPrime = 2;
		number /= 2;
	}

	for (long long i = 3; i <= sqrt(number); i += 2)
	{
		while (number % i == 0)
		{
			largestPrime = i;
			number /= i;
		}
	}

	if (number > 2)
	{
		largestPrime = number;
	}

	printf("%lld\n", largestPrime);

	return (0);
}
