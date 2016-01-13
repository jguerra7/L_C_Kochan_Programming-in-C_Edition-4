#include <stdio.h>

void multiply_by_2(float array[], int n)
{
	int i;

	for (i = 0; i < n; ++i)
		array[i] *= 2;
}


int main(void)
{
	void	multiply_by_2(float array[], int n);

	float	floatVals[4] = {1.2f, -3.7f, 6.2f, 8.55f};
	int 	i;

	multiply_by_2(floatVals, 4);

	for (i = 0; i < 4; ++i)
		printf("%.2f  ", floatVals[i]);

	printf("\n");

	return 0;
}
