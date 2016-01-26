#include <stdio.h>

void sort3(int *n1, int *n2, int *n3)
{
	int temp;

	if (*n1 > *n2)
	{
		temp = *n1;
		*n1 = *n2;
		*n2 = temp;
	}

	if (*n1 > *n3)
	{
		temp = *n1;
		*n1 = *n3;
		*n3 = temp;
	}

	if (*n2 > *n3)
	{
		temp = *n2;
		*n2 = *n3;
		*n3 = temp;
	}
}

int main(void)
{
	int a = 10;
	int b = 5;
	int c = 22;

	int *p1 = &a;
	int *p2 = &b;
	int *p3 = &c;

	sort3(p1, p2, p3);
	printf("%i %i %i", a, b, c);

	return 0;
}
