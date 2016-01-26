#include <stdio.h>

int compareStrings(const char *s1, const char *s2)
{
	int i = 0;

	while (*(s1 + i) == *(s2 + i) &&
		   *(s1 + i) != '\0' && *(s2 + i) != '\0')
		++i;

	if (*(s1 + i) < *(s2 + i))
		return -1;
	else if (*(s1 + i) == *(s2 + i))
		return 0;
	else
		return 1;
}

int main(void)
{
	char string1[] = "I am an elephant";
	char string2[] = "I am a";

	printf("%i\n", compareStrings(string1, string2));
	printf("%i\n", compareStrings(string2, "I am a"));
	printf("%i\n", compareStrings(string2, "I am a spoon"));
	printf("%i\n", compareStrings("I am b", "I am e"));

	return 0;
}
