#include <stdio.h>

int main(void)
{
	int strToInt(const char string[]);

	printf("%i\n", strToInt("245"));
	printf("%i\n", strToInt("100"));
	printf("%i\n", strToInt("13x5"));

	return 0;
}


int strToInt(const char string[])
{
	// Function to convert a string into an integer

	int i, intValue, result = 0;

	for (i = 0; string[i] >= '0' && string[i] <= '9'; ++i)
	{
		intValue = string[i] - '0';
		result = result * 10 + intValue;
	}

	return result;
}
