#include <stdio.h>

int main(void)
{
	int 	i;
	float	total = 0;
	float 	average;
	float	values[10] = {
		5, 5, 5, 5, 5,
		10, 10, 10, 10, 10};
	
	for (i = 0; i < 10; ++i)
		total += values[i];

	average = total / i;
	printf("The average of the array values is %.2f\n", average);

	return 0;
}
