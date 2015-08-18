#include <stdio.h>

int main(void)
{
	int fib0 = 0, fib1 = 1;
	int current, i;

	printf("%i\n%i\n", fib0, fib1);

	for (i = 2; i < 15; ++i) {
		current = fib0 + fib1;
		fib0 = fib1;
		fib1 = current;
		printf("%i\n", current);
	}
	
	return 0;
}