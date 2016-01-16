// Program to convert a positive integer to another base

#include <stdio.h>

int			convertedNumber[64];
long int	numberToConvert;
int			base = 0;
int			digit = 0;


int main(void)
{
	void getNumberAndBase(void);
	void convertNumber(void);
	void displayConvertedNumber(void);

	while (1) 
	{
		getNumberAndBase();
		if (numberToConvert == 0)
			return 0;
		convertNumber();
		displayConvertedNumber();
	}
}


void getNumberAndBase(void)
{
	printf("Number to be converted: ");
	scanf("%li", &numberToConvert);

	if (numberToConvert == 0)
		return;

	while (base < 2  || base > 16) {
		printf("Base: ");
		scanf("%i", &base);

		if (base < 2  || base > 16)
			printf("Bad base - must be between 2 and 16!\n");
	}
}


void convertNumber(void)
{
	do {
		convertedNumber[digit] = numberToConvert % base;
		++digit;
		numberToConvert /= base;
	}
	while (numberToConvert != 0);
}


void displayConvertedNumber(void)
{
	const char baseDigits[16] =
				{'0', '1', '2', '3', '4', '5', '6', '7',
				 '8', '9', 'A', 'B', 'C', 'D', 'E', 'F'};
	int nextDigit;

	printf("Converted number = ");

	for (--digit; digit >= 0; --digit) {
		nextDigit = convertedNumber[digit];
		printf("%c", baseDigits[nextDigit]);
	}

	printf("\n");
}
