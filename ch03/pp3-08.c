#include <stdio.h>

int main(void)
{
	int i = 256, j = 7;
	int Next_multiple = i + j - i % j;

	printf("%i\n", Next_multiple);

	return 0;
}
