#include <stdio.h>

int main(void)
{
	void substring(const char source[], int start, int count, char result[]);
	char s[81];

	substring("character", 4, 3, s);
	printf("%s\n", s);

	substring("two words", 4, 20, s);
	printf("%s\n", s);

	substring("johnny", 1, 2, s);
	printf("%s\n", s);

	return 0;
}


void substring(const char source[], int start, int count, char result[])
{
	int i;

	for (i = 0; i < count && source[i] != '\0'; ++i)
		result[i] = source[start + i];

	result[i] = '\0';
}
