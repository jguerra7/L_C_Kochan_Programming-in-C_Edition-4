// Program to sort an array of integers into ascending order using pointers

#include <stdio.h>

// void sort(int *a, int n)
// {
// 	int i1 = 0, j1, temp1;
// 	int *i = &i1, *j = &j1, *temp = &temp1;

// 	for (; *i < n - 1; ++i) {
// 		for (*j = *i + 1; *j < n; ++j) {
// 			if (*(a + *i) > *(a + *j)) {
// 				*temp = *(a + *i);
// 				*(a + *i) = *(a + *j);
// 				*(a + *j) = *temp;
// 			}
// 		}
// 	}
// }

void sort(int *a, int n)
{
	int i, j, temp;

	for (i = 0; i < n - 1; ++i) {
		for (j = i + 1; j < n; ++j) {
			if (*(a + i) > *(a + j)) {
				temp = *(a + i);
				*(a + i) = *(a + j);
				*(a + j) = temp;
			}
		}
	}
}

int main(void)
{
	int i;
	int array[16] = {34, -5, 6, 0, 12, 100, 56, 22,
					 44, -3, -9, 12, 17, 22, 6, 11};

	printf("The array before the sort:\n");

	for (i = 0; i < 16; ++i) {
		printf("%i ", array[i]);
	}

	sort(array, 16);

	printf("\n\nThe array after the sort\n");

	for (i = 0; i < 16; ++i) {
		printf("%i ", array[i]);
	}

	printf("\n");

	return 0;
}