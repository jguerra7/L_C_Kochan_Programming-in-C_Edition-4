//

#include <stdio.h>

int 	n = 16;
char 	r = 'a';
int 	a[16] =	{34, -5, 6, 0, 12, 100, 56, 22,
				 44, -3, -9, 12, 17, 22, 6, 11};

void sort(void)
{
	int i, j, temp;

	for (i = 0; i < n; ++i) {
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

	printf("Array before sort:\n");

	for (i = 0; i < 16; ++i) {
		printf("%i ", a[i]);
	}

	sort();

	printf("\n\nArray after sort:\n");

	for (i = 0; i < 16; ++i) {
		printf("%i ", a[i]);
	}

	return 0;
}