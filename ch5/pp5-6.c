// Displays number with english words

#include <stdio.h>

int main(void)
{
	int n, m = 0, right_zeroes = 0, right_digit;

	printf("Enter your number: ");
	scanf("%i", &n);

	if (n < 0) {
		printf("NEGATIVE ");
		n *= -1;
	}

	do {												// reverse n
		m = m * 10 + n % 10;
		if (m == 0) {
			right_zeroes += 1;
		}
		n /= 10;
	}
	while (n != 0);

	n = m;
	printf("%i\n", right_zeroes);

	do {
		right_digit = n % 10;

		switch (right_digit) {
			case 0:
				printf("Zero ");
				break;
			case 1:
				printf("One ");
				break;
			case 2:
				printf("Two ");
				break;
			case 3:
				printf("Three ");
				break;
			case 4:
				printf("Four ");
				break;
			case 5:
				printf("Five ");
				break;
			case 6:
				printf("Six ");
				break;
			case 7:
				printf("Seven ");
				break;
			case 8:
				printf("Eight ");
				break;
			case 9:
				printf("Nine ");
				break;
		}

		n /= 10;
	}
	while (n != 0);
	
	while (right_zeroes != 0) {
		printf("Zero ");
		right_zeroes -= 1;
	}

	printf("\n");

	return 0;
}