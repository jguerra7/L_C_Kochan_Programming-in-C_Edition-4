// Tests if n1 is divisible by n2

#include <stdio.h>

int main(void)
{
	int n1, n2;

	printf("Type in the two numbers you want tested:\n");
	scanf("%i %i", &n1, &n2);

	if (n2 == 0)
	{
		printf("Division by zero not possible.\n");
	}
	else if (n1 % n2 == 0)
	{
		printf("%.2f | %i\n", (float) n1 / n2, n1 % n2);
		printf("The first number is evenly divisible by the second.\n");
	}
	else
	{
		printf("%.2f | %i\n", (float) n1 / n2, n1 % n2);
		printf("The first number is NOT evenly divisible by the second.\n");
	}

	return 0;
}
