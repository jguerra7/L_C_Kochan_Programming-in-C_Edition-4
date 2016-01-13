// Program to generate a table of prime numbers

#include <stdio.h>

int main(void)
{
	int 	p, d;
	_Bool	isPrime;

	for (p = 2; p <= 50; ++p)				// checks integers 2-50 for primes
	{
		isPrime = 1;

		if (p % 2 == 0  &&  p != 2)			// skips all even numbers as possible primes except 2
		{
			continue;
		}

		for (d = 2; d < p; ++d)				// checks if p is divisible by any numbers below it
		{
			if (d % 2 == 0  &&  d != 2)		// skips even numbers as possible divisors except 2
			{
				continue;
			}

			if (p % d == 0)					// number is not prime of divisible by another number			
			{
				isPrime = 0;
				continue;
			}
		}

		if (isPrime != 0)					// prints prime numbers
		{
			printf("%i  ", p);
		}
	}

	printf("\n");

	return 0;
}
