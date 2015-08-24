#include <stdio.h>

int array_sum(int a[], int aLen)
{
	int i, aSum = 0;

	for (i = 0; i < aLen; ++i) {
		aSum += a[i];
	}
	return aSum;
}

int main(void)
{
	int array1[5] = {1, 2, 3, 4, 5};
	int array2[7] = {6, 7, 8, 9, 1, 2, 3};
	int array3[4] = {10, 10, 10, 100};

	printf("array 1 sum is %i\n", array_sum(array1, 5));
	printf("array 2 sum is %i\n", array_sum(array2, 7));
	printf("array 3 sum is %i\n", array_sum(array3, 4));
	
	return 0;
}