#include <stdio.h>

int main(void)
{
	double square_root(double x, double epsilon);

	printf("square_root(2.0) = %g\n", square_root(2.0, .00001));
	printf("square_root(144.0) = %g\n", square_root(144.0, .00001));
	printf("square_root(17.5) = %g\n", square_root(17.5, .00001));

	return 0;
}

// Function to calculate the absolute value of a number

double absolute_value(double x)
{
	if (x < 0)
		x = -x;

	return x;
}

// Function to compute the square root of a number

double square_root(double x, double epsilon)
{
	double guess = 1.0;

	while(absolute_value((guess * guess / x) - 1) >= epsilon)
	{
		printf("Guess for %g is %g\n", x, guess);
		guess =  (x / guess + guess) / 2.0;
	}

	return guess;
}
