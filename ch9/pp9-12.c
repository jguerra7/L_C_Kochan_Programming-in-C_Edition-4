#include <stdio.h>
#include <stdbool.h>

float strToInt(const char string[])
{
	int i, intValue;
	float result = 0, deCounter = 10;
	bool isNegative = false, isDecimal = false;

	for (i = 0; (string[i] >= '0' && string[i] <= '9') || 
			string[i] == '-' || string[i] == '.'; ++i)
	{
		if (! isNegative)
		{
			if (string[i] == '-')
			{
				isNegative = true;
				continue;
			}
		}

		if (! isDecimal)
		{
			if (string[i] == '.')
			{
				isDecimal = true;
				continue;
			}

			intValue = string[i] - '0';
			result = result * 10 + intValue;
		}
		else
		{
			intValue = string[i] - '0';
			result = result + (intValue / deCounter);
			deCounter *= 10;
		}
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
	printf("%.4f\n", strToInt("-867.6921"));

	return 0;
}