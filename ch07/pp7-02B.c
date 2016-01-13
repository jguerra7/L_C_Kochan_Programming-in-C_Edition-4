#include <stdio.h>

int main(void)
{
	int get_number(void);
	int calculate_triangular_number(int n);

	int number, counter;

	for (counter = 1; counter <= 5; ++counter)
	{
		number = get_number();
		printf("Triangular number %i is %i\n\n", number, calculate_triangular_number(number));
	}

	return 0;
}


int get_number(void)
{
	int number;

	printf("What triangular number do you want? ");
	scanf("%i", &number);

	return number;
}


int calculate_triangular_number(int n)
{
	int i, triangularNumber = 0;

	for (i = 1; i <= n; ++i)
		triangularNumber += i;

	return triangularNumber;
}
