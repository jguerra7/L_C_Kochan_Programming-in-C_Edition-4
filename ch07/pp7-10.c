#include <stdio.h>

int main(void)
{
	int prime(int n);
	
	printf("%i\n", prime(10));
	printf("%i\n", prime(47));
	printf("%i\n", prime(67));

	return 0;
}

int prime(int n)
{
	int i, j;
	int primes[n];

	for (i = 0; i <= n; ++i)
		primes[i] = 1;

	primes[0] = 0;
	primes[1] = 0;

	for (i = 2; i <= n; ++i)
		if (primes[i] == 1)
			for (j = 2; i * j <= n; ++j)
				primes[i * j] = 0;

	if (primes[n] != 0)
		return 1;

	return 0;
}
