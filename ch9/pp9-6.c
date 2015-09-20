#include <stdio.h>

void removeString(char source[], int start, int count)
{
	int i;
	
	for (i = 0; source[i + start] != '\0'; ++i)
		source[i + start] = source[i + start + count];
}


int main(void)
{
	char text1[] = "the wrong son";
	
	removeString(text1, 4, 6);
	printf("%s\n", text1);

	printf("%lu\n", strlen(text1));
	return 0;
}