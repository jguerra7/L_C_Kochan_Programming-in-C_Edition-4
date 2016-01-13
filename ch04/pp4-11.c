#include <stdio.h>

int main(void)
{
	int number, right_digit, result;

	printf("Enter your number.\n");
	scanf("%i", &number);

	result = 0;

	do
	{
		right_digit = number % 10;
		result += right_digit;
		number /= 10;
	}
	while (number != 0);

	printf("%i\n", result);

	return 0;
}
