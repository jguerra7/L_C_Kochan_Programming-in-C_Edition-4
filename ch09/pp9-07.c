#include <stdio.h>
#include <stdbool.h>

int main(void)
{
	void insertString(char source[], char sub[], int start);

	char text1[] = "the wrong son";

	insertString(text1, "per", 10);
	printf("%s\n", text1);

	return 0;	
}


int stringLen(char s[])
{
	int count = 0;

	while (s[count] != '\0')
		++count;

	return count;
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
