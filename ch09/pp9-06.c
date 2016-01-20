#include <stdio.h>


int main(void)
{
	int stringLen(char s[]);
	void removeString(char source[], int start, int count);

	char text1[] = "the wrong son";

	removeString(text1, 4, 6);
	printf("%s\n", text1);

	printf("%i\n", stringLen(text1));
	return 0; 
}


int stringLen(char s[])
{
	int count = 0;

	while (s[count] != '\0')
		++count;

	return count;
}


void removeString(char source[], int start, int count)
{
	int i;
	
	for (i = 0; source[i + start] != '\0'; ++i)
		source[i + start] = source[i + start + count];
}
