/*	Takes two integers and displays the result
	to three-decimal-place accuracy
*/

#include <stdio.h>

int main(void)
{
	int n1, n2;

	printf("Type in the two numbers you want divided: ");
	scanf("%i %i", &n1, &n2);

	if (n2 == 0)
	{
		printf("Divsion by zero.\n");
	}

	else
	{
		printf("The quotient is %.3f\n", (float) n1 / n2);
	}

	return 0;
} 