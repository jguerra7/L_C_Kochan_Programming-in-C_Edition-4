#include <stdio.h>

int compareStrings(const char *s1, const char *s2)
{
	int i = 0, answer;

	while (*(s1 + i) == *(s2 + i) &&
			*(s1 + i) != '\0' && *(s2 + i) != '\0')
		++i;

	if 		(*(s1 + i) < *(s2 + i))
		answer = -1;
	else if (*(s1 + i) == *(s2 + i))
		answer = 0;
	else
		answer = 1;

	return answer;
}

int main(void)
{
	char string1[] = {"I am an elephant"};
	char string2[] = {"I am a"};

	printf("%i\n", compareStrings(string1, string2));

	printf("%i\n", compareStrings(string2, "I am a"));

	return 0;
}