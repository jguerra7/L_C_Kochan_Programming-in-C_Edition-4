#include <stdio.h>

int main(void)
{
	int n, nFactorial = 1;

	for (n = 1; n <= 10; n += 1)
	{
		nFactorial *= n;
		printf("%2i		%i\n", n, nFactorial);
	}

	return 0;
}
