#include <stdio.h>

int		n = 16;
int		i, j, temp;
char	r = 'a';
int		a[16] = {34, -5, 6, 0, 12, 100, 56, 22,
				 44, -3, -9, 12, 17, 22, 6, 11};



int main(void)
{
	printf("Array before sort:\n");

	for (i = 0; i < 16; ++i)
		printf("%i ", a[i]);

	sort();

	printf("\n\nArray after ascending sort:\n");

	for (i = 0; i < 16; ++i)
		printf("%i ", a[i]);

	r = 'd';

	sort();

	printf("\n\nArray after descending sort:\n");

	for (i = 0; i < 16; ++i)
		printf("%i ", a[i]);

	return 0;
}


void sort(void)
{
	if		(r == 'a') {
		for (i = 0; i < n - 1; ++i) {
			for (j = i + 1; j < n; ++j) {
				if (a[i] > a [j]) {
					temp = a[i];
					a[i] = a[j];
					a[j] = temp;
				}
			}
		}
	}
	else if (r == 'd') {
		for (i = 0; i < n - 1; ++ i) {
			for (j = i + 1; j < n; ++j) {
				if (a[i] < a[j]) {
					temp = a[i];
					a[i] = a[j];
					a[j] = temp;
				}
			}
		}
	}
	else {
		printf("Invalid third entry!\n-");
	}
}
