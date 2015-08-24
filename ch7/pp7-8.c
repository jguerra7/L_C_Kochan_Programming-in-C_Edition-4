#include <stdio.h>

// Function to calculate absolute value

float absolute_value(float x)
{
	if (x < 0) {
		x = -x;
	}
	return x;
}

// Function to compute the square root of a number

float square_root(float x)
{
	float guess = 1.0;
	float epsilon = .00001;

	while (absolute_value((guess * guess / x) - 1) >= epsilon) {
		guess = (x / guess + guess) / 2.0;
	}
	return guess;
}


int main(void)
{
	float a, b, c;
	float discriminant;
	float result1, result2;

	printf("Enter value for A: ");
	scanf("%f", &a);

	printf("Enter value for B: ");
	scanf("%f", &b);

	printf("Enter value for C: ");
	scanf("%f", &c);

	discriminant = (b * b) - 4 * a * c;

	if (discriminant < 0) {
		printf("The discriminant is negative.\nRoots are imaginary.\n");
		return 1;
	}

	result1 = ((-b + square_root(discriminant)) / (2 * a));
	result2 = ((-b - square_root(discriminant)) / (2 * a));

	printf("The roots are %.2f and %.2f\n", result1, result2);

	return 0;
}