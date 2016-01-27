// Program to demonstrate the bitwise AND operator

#include <stdio.h>

int main(void)
{
	unsigned int word1 = 077u, word2 = 0150u, word3 = 0210u;

	printf("%o ", word1 & word2);
	printf("%o ", word1 & word1);
	printf("%o ", word1 & word2 & word3);
	printf("%o\n", word1 & 1);

	printf("%i\n", word1 & word2 & word3);

	printf("%i")

	return 0;
}
