/*  Program to evaluate simple expression of the form
	value  operator  value
*/

#include <stdio.h>

int main(void)
{
	float	value1, value2;
	char	operator1;

	printf("Type in your expression.\n");
	scanf("%f %c %f", &value1, &operator1, &value2);

	switch (operator1)
	{
		case '+':
			printf("%.2f\n", value1 + value2);
			break;
		case '-':
			printf("%.2f\n", value1 - value2);
			break;
		case '*':
			printf("%.2f\n", value1 * value2);
			break;
		case '/':
			if (value2 == 0)
				printf("Division by zero no possible.\n");
			else
				printf("%.2f\n", value1 / value2);
			break;
		default:
			printf("Unknown operator.\n");
			break;
	}

	return 0;
}
