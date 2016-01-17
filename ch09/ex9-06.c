#include <stdio.h>

void readLine(char buffer[])
{	//
	// Function to read a line of text from terminal
	//
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


int main(void)
{
	int i;
	char line[81];
	void readLine(char buffer[]);

	for (i = 0; i < 3; ++i)
	{
		readLine(line);
		printf("%s\n\n", line);
	}

	return 0;
}
