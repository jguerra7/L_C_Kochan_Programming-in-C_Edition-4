#include <stdio.h>

int main(void)
{
	int n = 150;
	int primes[n];
	int i, j;

	for (i = 0; i <= n; ++i) {
		primes[i] = 1;
	}

	primes[0] = 0;
	primes[1] = 0;

	for (i = 2; i <= n; ++i) {
		if (primes[i] == 1) {
			for (j = 2; i * j <= n; ++j){
				primes[i * j] = 0;
			}
		}
	}

	for (i = 0; i <= n; ++i) {
		if (primes[i] == 1) {
			printf("%i ", i);
		}
	}

	printf("\n");
	return 0;
}