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

	if  	(operator1 == '+')
		printf("%.2f\n", value1 + value2);
	else if (operator1 == '-')
		printf("%.2f\n", value1 - value2);
	else if (operator1 == '*')
		printf("%.2f\n", value1 * value2);
	else if (operator1 == '/')
		if  	(value2 == 0)
			printf("Division by zero is no possible.\n");
		else
			printf("%.2f\n", value1 / value2);
	else
		printf("Unknown operator.\n");

	return 0;
}
