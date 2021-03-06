#include <stdio.h>

int main(void)
{
	float square_root(float x, float epsilon);

	printf("square_root(2.0) = %f\n", square_root(2.0, .00001));
	printf("square_root(144.0) = %f\n", square_root(144.0, .00001));
	printf("square_root(17.5) = %f\n", square_root(17.5, .00001));

	return 0;
}

// Function to calculate the absolute value of a number

float absolute_value(float x)
{
	if (x < 0)
		x = -x;

	return x;
}

// Function to compute the square root of a number

float square_root(float x, float epsilon)
{
	float guess = 1.0;

	while (absolute_value(guess * guess - x) >= epsilon)
	{
		printf("Guess for %f is %f\n", x, guess);
		guess = (x / guess + guess) / 2.0;
	}

	return guess;
}
