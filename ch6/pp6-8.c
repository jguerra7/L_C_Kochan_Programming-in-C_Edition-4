#include <stdio.h>

int main(void)
{
	int list[] = {};
	int i;

	list[0] = 0;
	list[1] = 1;
	list[2] = 2;

	for (i = 0; i <= 2; ++i) {
		printf("%i ", list[i]);
	}

	return 0;
}