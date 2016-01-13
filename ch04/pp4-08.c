#include <stdio.h>

int main(void)
{
	int n, number, triangularNumber, counter, limit;

	printf("Enter the number of Triangular Numbers you want calculated: ");
	scanf("%i", &limit);

	for (counter = 1; counter <= limit; ++counter)
	{
		printf("What Triangular Number do you want?: ");
		scanf("%i", &number);
		
		triangularNumber = 0;

		for (n = 1; n <= number; ++n)
		{
			triangularNumber += n;
		}

		printf("Triangular number %i is %i\n\n", number, triangularNumber);
	}

	return 0;
}
