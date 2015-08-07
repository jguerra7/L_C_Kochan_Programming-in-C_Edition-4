/*  Program to fin the greates common divisor
	of two nonnegative intefer values			*/

#include <stdio.h>

int main(void)
{
	int u, v, temp;
	printf("Please type in two nonnegative intetgers.\n");
	scanf("%i%i", &u, &v);

	while (v != 0)
	{
		temp = u % v;
		u = v;
		v = temp;
	}

	printf("Their greatest common divisor is %i\n", u);

	return 0;
}