#include <stdio.h>
#include <stdbool.h>

int main(void)
{
	int countWords(const char string[]);

	const char text1[] = "Well, here goes.";
	const char text2[] = "And here we go... again.";
	const char text3[] = "Well let's finish.";

	printf("%s - words = %i\n", text1, countWords(text1));
	printf("%s - words = %i\n", text2, countWords(text2));	
	printf("%s - words = %i\n", text3, countWords(text3));

	return 0;	
}


bool alphabetic(const char c)
{	
	// Function to determine if a character is alphabetic

	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z') || c == '\'')
		return true;
	else
		return false;
}


int countWords(const char string[])
{	
	// Function to count the number of words in a string

	bool alphabetic(const char c);

	bool lookingForWord = true;
	int i, wordCount = 0;

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
