#include <stdio.h>

void uppercase(char source[])
{
	int i;

	for (i = 0; source[i] != '\0'; ++i)
		if (source[i] >= 'a' && source[i] <= 'z')
			source[i] = source[i] - 'a' + 'A';

}


int main(void)
{
	char dog[] = "dog";
	char sun[] = "sun";

	uppercase(dog);
	printf("'dog' uppercase is '%s'\n", dog);

	uppercase(sun);
	printf("'sun' uppercase is '%s'\n", sun);

	return 0;
}