#include <stdio.h>

int main(void)
{
	long int x_to_the_n(int x, int n);

	printf("%li\n", x_to_the_n(2,2));
	printf("%li\n", x_to_the_n(4,2));
	printf("%li\n", x_to_the_n(5,4));

	return 0;
}


long int x_to_the_n(int x, int n)
{
	int i, current = x;

	for (i = 1; i < n; ++i)
		current *= x;

	return current;
}
