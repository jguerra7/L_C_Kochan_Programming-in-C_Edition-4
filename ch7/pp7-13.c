//

#include <stdio.h>

void sort(int a[], int n, char r)
{
	int i, j, temp;

	for (i = 0; i < n - 1; ++i) {
		for (j = i + 1; j < n; ++j) {
			if 		(r == 'a') {
				if (a[i] > a[j]) {
					temp = a[i];
					a[i] = a[j];
					a[j] = temp;
				}
			}	
			else if (r == 'd') {
				if (a[i] < a[j]) {
					temp = a[i];
					a[i] = a[j];
					a[j] = temp;
				}
			}
			else {
				printf("\n\nInvalid third entry!\n");
				return;
			}
		}
	}
}

int main(void)
{
	int i;
	int array[16] = {34, -5, 6, 0, 12, 100, 56, 22,
					 44, -3, -9, 12, 17, 22, 6, 11};
	void sort(int a[], int n, char r);

	printf("Array before sort:\n");

	for (i = 0; i < 16; ++i) {
		printf("%i ", array[i]);
	}

	sort(array, 16, 'a');

	printf("\n\nArray after ascending sort:\n");

	for (i = 0; i < 16; ++i) {
		printf("%i ", array[i]);
	}

	sort(array, 16, 'd');

	printf("\n\nArray after descending sort:\n");

	for (i = 0; i < 16; ++i) {
		printf("%i ", array[i]);
	}

	sort(array, 16, 'c');

	return 0;
}