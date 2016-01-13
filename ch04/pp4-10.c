//	Program to reverse the digits, including negatives

#include <stdio.h>

int main(void)
{
	int number, right_digit;

	printf("Enter your number.\n");
	scanf("%i", &number);

	if (number < 0)
	{
		number *= -1;
		printf("%c", '-');
	}

	while (number != 0)
	{
		right_digit = number % 10;
		printf("%i", right_digit);
		number /= 10;
	}

	printf("\n");

	return 0;
}
