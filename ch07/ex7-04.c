// Function to calculate the nth triangular number 

#include <stdio.h>

void calculate_triangular_number(int n)
{
	int i, triangularNumber = 0;

	for (i = 1; i <= n; ++i)
		triangularNumber += i;

	printf("Triangular number %i is %i\n", n, triangularNumber);
}


int main(void)
{
	calculate_triangular_number(10);
	calculate_triangular_number(20);
	calculate_triangular_number(50);

	return 0;
}
