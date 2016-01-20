#include <stdio.h>

struct entry
{
	char word[15];
	char definition[50];
};

int main(void)
{
	void dictionarySort(struct entry dict[], int n);

	int i;
	struct entry dictionary[100] =
	    {{"abyss",      "a bottomless pit"},
	     {"aerie",      "a high nest"},
	     {"acumen",     "mentally sharp; keen"},
	     {"addle",      "to become confused"},
	     {"affix",      "to append; attach"},
	     {"aardvark",   "a burrowing African mammal"},
	     {"agar",       "a jelly made from seaweed"},
	     {"aigrette",   "an ornamental cluster of feathers"},
	     {"ahoy",       "a nautical call or greeting"},
	     {"ajar",       "partially opened"}};
	int entries = 10;

	dictionarySort(dictionary, entries);

	for (i = 0; i < 10; ++i)
	{
		printf("%s, %s\n", dictionary[i].word, dictionary[i].definition);
	}
	return 0;
}


int compareStrings(const char s1[], const char s2[])
{
	int i = 0, answer;

	while (s1[i] == s2[i] && s1[i] != '\0')
		++i;


	if (s1[i] < s2[i])
		answer = -1;
	else if (s1[i] == s2[i])
		answer = 0;
	else 
		answer = 1;

	return answer;
}


void dictionarySort(struct entry dict[], int n)
{
	int compareStrings(const char s1[], const char s2[]);

	int i, j;
	struct entry temp[1];

	for (i = 0; i < n - 1; ++i)
	{
		for (j = i + 1; j < n; ++j)
		{
			if (compareStrings(dict[i].word, dict[j].word) == 1)
			{
				temp[0] = dict[i];
				dict[i] = dict[j];
				dict[j] = temp[0];
			}
		}
	}
}
