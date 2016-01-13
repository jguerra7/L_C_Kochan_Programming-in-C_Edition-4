#include <stdio.h>

int main(void)
{
	int lcm(int u, int v);

	printf("The lcm of 15 and 10 is %i\n", lcm(15, 10));
	printf("The lcm of 15 and -1 is %i\n", lcm(15, -1));
	return 0;
}


int gcd(int u, int v)
{
	int temp;

	while (v != 0)
	{
		temp = u % v;
		u = v;
		v = temp;
	}

	return u;
}


int lcm(int u, int v)
{
	int gcd(int u, int v);

	int result;

	if (u < 0  ||  v < 0)
	{
		printf("One or both of the values entered are negative.\n");
		return -1;
	}

	result = (u * v) / gcd(u, v);

	return result;
}
