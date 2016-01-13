/*  Program to reverse the digits of a number
	works with negative numbers
*/
#include <stdio.h>

int main(void)
{
	int n, right_digit;

	printf("Enter your number: ");
	scanf("%i", &n);

	if (n < 0)
	{
		n *= -1;

		do
		{
			right_digit = n % 10;
			printf("%i", right_digit);
			n /= 10;
		}
		while (n != 0);

		printf("-");
	}

	else
	{
		do
		{
			right_digit = n % 10;
			printf("%i", right_digit);
			n /= 10;
		}
		while (n != 0);
	}

	printf("\n");

	return 0; 
}
