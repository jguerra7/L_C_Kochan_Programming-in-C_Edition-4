#include <stdio.h>

int int_size(void)
{
	unsigned int result = ~0;

	return result;
}

int main(void)
{
	printf("%u", int_size());

	return 0;
}
