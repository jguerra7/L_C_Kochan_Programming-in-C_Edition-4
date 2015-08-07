/* 	This program adds two interger values
	and displays the results				
*/

#include <stdio.h>

int main(void)
{
	int value1, value2, sum;										// Declare variables

	value1 = 50;													// Assign values and calculate their sum
	value2 = 25;
	sum = value1 + value2;

	printf("The sum of %i and %i is %i\n", value1, value2, sum);	// Display the result

	return 0;
}