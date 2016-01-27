#include <stdio.h>

int main(void)
{
	int w1 = 0236;
	unsigned int w2 = 0236u;

	printf("w1 = %o\n", w1 >> 2);
	printf("w2 = %o\n", w2 >> 2);

	return 0;
}
