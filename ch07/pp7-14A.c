#include <stdio.h>

int i, j, n = 47;
int primes[47];


int main(void)
{
	printf("%i\n", prime());

	return 0;
}


int prime(void)
{
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
