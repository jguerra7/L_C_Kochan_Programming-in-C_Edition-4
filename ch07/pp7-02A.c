// function to declare the nth triangular number

#include <stdio.h>

int main(void)
{
	int calculate_triangular_number(int n);
	printf("Triangular number %i is %i\n", 10, calculate_triangular_number(10));
	printf("Triangular number %i is %i\n", 20, calculate_triangular_number(20));
	printf("Triangular number %i is %i\n", 50, calculate_triangular_number(50));

	return 0;
}


int calculate_triangular_number(int n)
{
	int i, triangularNumber = 0;

	for (i = 1; i <= n; ++i)
		triangularNumber += i;

	return triangularNumber;
}
