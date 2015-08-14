// Program to determine if a number is even or odd

#include <stdio.h>

int main(void)
{
	int number_to_test, remainder1;

	printf("Enter you number to be tested: ");
	scanf("%i", &number_to_test);

	remainder1 = number_to_test % 2;

	if (remainder1 == 0)
		printf("The number is even.\n");
	
	if (remainder1 != 0)
		printf("The number is odd.\n");

	return 0;
}