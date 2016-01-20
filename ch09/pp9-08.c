#include <stdio.h>
#include <stdbool.h>

int main(void)
{
	void replaceString(char source[], char s1[], char s2[]);

	char text[] = "1 uno is 1 won";
	replaceString(text, "1", "one");
	printf("%s\n", text);

	return 0;
}


int stringLen(char s[])
{
	int count = 0;

	while (s[count] != '\0')
		++count;

	return count;
}


int findString(const char source[], const char sub[])
{
	int i, j = 0;
	bool lookingForWord = true;

	for (i = 0; source[i] != '\0'; ++i)
	{
		if (source[i] == sub[i])
		{
			if (lookingForWord)
			{
				lookingForWord = false;
			}

			++j;

			if  (sub[j] == '\0')
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


void removeString(char source[], int start, int count)
{
	int i;

	for (i = 0; source[i + start] != '\0'; ++i)
		source[i + start] = source[i + start + count];
}


void insertString(char source[], char sub[], int start)
{
	int stringLen(char s[]);

	int srclen = stringLen(source);
	int sublen = stringLen(sub);
	int i;
	char store[srclen - start];
	bool subend = false;

	for (i = 0; source[i + start] != '\0'; ++i)
	{
		store[i] = source[i + start];
	}

	store[i] = '\0';

	for (i = 0; (i + start) < (srclen + sublen); ++i)
	{
		if (! subend)
		{
			if (sub[i] == '\0')
				subend = true;
			else
				source[i + start] = sub[i];
		}
		source[i + start + sublen] = store[i];
	}

	source[i + start + sublen] = '\0';
}


void replaceString(char source[], char s1[], char s2[])
{
	int findString(const char source[], const char sub[]);
	int stringLen(char s[]);

	int index = findString(source, s1);
	int s1_len = stringLen(s1);

	if (index == -1)
	{
		printf("Substring parameter s1 could not be found within string.\n");
		return;
	}

	removeString(source, index, s1_len);

	insertString(source, s2, index);
}
