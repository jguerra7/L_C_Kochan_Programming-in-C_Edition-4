//	Program to generate a table of prime numbers

#include <stdio.h>

int main(void)
{
	int 	p, d;
	_Bool 	isPrime;

	for (p = 2; p <= 50; ++p) 				// checks integers 2-50 for primes
	{
		isPrime = 1;						// prime indicator

		if (p % 2 == 0  &&  p != 2)			// skips all even numbers except 2 as possible primes
		{
			continue;
		}

		for (d = 2; d < p; ++d)				// checks if p is divisble by any numbers below it
		{
			if (d % 2 == 0  &&  d != 2)		// skips even numbers except 2 as possible divisors
			{
				continue;
			}
			
			if (p % d == 0) 				// the number is nonprime if divisible by another number
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