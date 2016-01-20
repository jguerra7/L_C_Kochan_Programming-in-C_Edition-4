#include <stdio.h>
#include <stdbool.h>

int main(void)
{
	int countWords(const char string[]);
	void readLine(char buffer[]);

	char text[81];
	int totalWords = 0;
	bool endOfText = false;

	printf("Type in your text.\n");
	printf("When you are done, press 'RETURN'.\n\n");

	while (! endOfText)
	{
		readLine(text);

		if (text[0] == '\0')
			endOfText = true;
		else
			totalWords += countWords(text);
	}

	printf("\n There are %i words in the above text.\n", totalWords);

	return 0;
}


bool alphabetic(const char c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z') || c == '\'')
		return true;
	else
		return false;
}


void readLine(char buffer[])
{
	char character;
	int i = 0;

	do
	{
		character = getchar();
		buffer[i] = character;
		++i;
	}
	while (character != '\n');

	buffer[i - 1] = '\0';
}


int countWords(const char string[])
{	
	bool alphabetic(const char c);

	int i, wordCount = 0;
	bool lookingForWord = true;

	for (i = 0; string[i] != '\0'; ++i)
		if (alphabetic(string[i]))
		{
			if (lookingForWord)
			{
				++wordCount;
				lookingForWord = false;
			}
		}
		else
			lookingForWord = true;

	return wordCount;
}
