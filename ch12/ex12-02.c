/* Function to calcualte the area and circumfrence of a
   circle and the volume of a sphere of a given radius */

#include <stdio.h>

#define PI  3.141592654

double area(double r)
{
	return PI * r * r;
}

double circumfrence(double r)
{
	return 2.0 * PI * r;
}

double volume(double r)
{
	return 4.0 / 3.0 * PI * r * r * r;
}

int main(void)
{
	double area(double r);
	double circumfrence(double r);
	double volume(double r);

	printf("radius = 1:    %.4f    %.4f    %.4f\n",
		   area(1.0), circumfrence(1.0), volume(1.0));
	printf("raduis = 4.98:    %.4f    %.4f    %.4f\n",
		   area(4.98), circumfrence(4.98), volume(4.98));

	return 0;
}
