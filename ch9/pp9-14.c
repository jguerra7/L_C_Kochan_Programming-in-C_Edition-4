#include <stdio.h>
#include <stdbool.h>


void intToStr(int n, char result[])
{
	int i, j;
	int store[81];
	bool isNegative = false;

	if (n < 0)
	{
		isNegative = true;
		n *= -1;
	}

	for (i = 0; n > 0; ++i)
	{
		store[i] = n % 10;
		n = n / 10;
	}

	for (j = 0; j < i; ++j)
	{
		if (isNegative)
		{
			result[j] = '-';
			++i;
			isNegative = false;
			continue;
		}
		result[j] = '0' + store[i - j - 1];
	}

	result[j] = '\0';
}

int main(void)
{
	char res[81];

	intToStr(1234, res);
	printf("%s\n", res);

	return 0;
}