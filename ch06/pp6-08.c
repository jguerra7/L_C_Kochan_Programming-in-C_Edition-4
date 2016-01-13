#include <stdio.h>

int main(void)
{
	int list[] = {};
	int i;

	list[0] = 0;
	list[1] = 1;
	list[2] = 2;
	list[3] = 3;

	for (i = 0; i <= 3; ++i)
		printf("%i ", list[i]);

	printf("\n");
	return 0;
}
