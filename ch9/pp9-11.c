#include <stdio.h>
#include <stdbool.h>

float strToInt(const char string[])
{
	int i, intValue, result = 0;
	bool isNegative = false;

	for (i = 0; (string[i] >= '0' && string[i] <= '9') || 
			string[i] == '-'; ++i)
	{
		if (! isNegative)
		{
			if (string[i] == '-')
			{
				isNegative = true;
				continue;
			}
		}

		intValue = string[i] - '0';
		result = result * 10 + intValue;
	}

	if (isNegative)
		result = -result;

	return result;
}


int main(void)
{
	float strToInt(const char string[]);

	printf("%.0f\n", strToInt("245"));
	printf("%.0f\n", strToInt("100"));
	printf("%.0f\n", strToInt("13x5"));
	printf("%.0f\n", strToInt("-1234"));

	return 0;
}