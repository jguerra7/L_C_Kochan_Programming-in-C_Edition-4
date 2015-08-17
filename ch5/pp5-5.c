//	Program to reverse the digits of a number
//  works with nagative numbers

#include <stdio.h>

int main(void)
{
	int n, right_digit;

	printf("Enter your number: ");
	scanf("%i", &n);

	if (n >= 0)
	{
		do
		{
			right_digit = n % 10;
			printf("%i", right_digit);
			n /= 10;
		}
		while (n != 0);
	}

	else
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

	printf("\n");

	return 0;
}