#include <stdio.h>

int main(void)
{
	int n = 1, number, triangularNumber = 0;

	printf("What triangular number do you want?: ");
	scanf("%i", &number);

	while (n <= number)
	{
		triangularNumber += n;
		n += 1;
	}

	printf("Triangular Number %i is %i\n", number, triangularNumber);

	return 0;
}