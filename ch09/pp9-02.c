#include <stdio.h>
#include <stdbool.h>

int main(void)
{
	bool equalStrings(const char s1[], const char s2[]);
	const char stra[] = "string compare test";
	const char strb[] = "string";

	printf("%i\n", equalStrings(stra, strb));
	printf("%i\n", equalStrings(stra, stra));
	printf("%i\n", equalStrings(strb, "string"));

	return 0;
}


bool equalStrings(const char s1[], const char s2[])
{
	// Function to determine if two strings are equal

	int i = 0;
	bool areEqual;

	while (s1[i] == s2[i] &&	// if s2[i] == '\0', and s1[i] didn't
			s1[i] != '\0')		// loop would terminate anyway
		++i;
	if (s1[i] == '\0' && s2[i] == '\0')
		areEqual = true;
	else
		areEqual = false;

	return areEqual;
}
