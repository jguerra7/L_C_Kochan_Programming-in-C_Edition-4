#include <stdio.h>
#include <stdbool.h>

int main(void)
{
	int findString(const char source[], const char sub[]);

	printf("%i\n", findString("a chatterbox", "hat"));
	printf("%i\n", findString("ha ha hat ha", "hat"));
	printf("%i\n", findString("ha ha ta at", "hat"));
	printf("%i\n", findString("1 uno is 1", "1"));

	return 0;
}


int findString(const char source[], const char sub[])
{
	int i, j = 0;
	bool lookingForWord = true;

	for (i = 0; source[i] != '\0'; ++i)
	{
		if (source[i] == sub[j])
		{
			if (lookingForWord)
			{
				lookingForWord = false;
			}

			++j;

			if (sub[j] == '\0')
			{
				return i - j + 1;
			}
		}
		else
		{
			j = 0;
			lookingForWord = true;
		}
	}
	return -1;
}
