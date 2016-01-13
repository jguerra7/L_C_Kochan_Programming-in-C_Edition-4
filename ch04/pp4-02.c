#include <stdio.h>

int main(void)
{
	int n;

	printf("TABLE OF n AND n SQUARES\n\n");
	printf(" n	 n squared\n");
	printf("--- --------------------\n");

	for (n = 1; n <= 10; n += 1)
	{
		printf("%2i		%i\n", n, n * n);
	}

	return 0;
}
