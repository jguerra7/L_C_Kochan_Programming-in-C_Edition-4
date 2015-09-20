#include <stdio.h>
#include <stdbool.h>

struct entry
{
	char word[15];
	char def[50];
};


int compareStrings(const char s1[], const char s2[])
{
	int i = 0, answer;

	while (s1[i] == s2[i] &&
			s1[i] != '\0' && s2[i] != '\0')
		++i;
	
	if 		(s1[i] < s2[i])
		answer = -1;
	else if (s1[i] == s2[i])
		answer = 0;
	else
		answer = 1;

	return answer;
}


void dictionarySort(struct entry dict[100], int n)
{
	int i, j;
	struct entry temp[100];

	for (i = 0; i < n - 1; ++i) {
		for (j = i + 1; j < n; ++j) {
			if (compareStrings(dict[i].word, dict[j].word) == -1)  {
				temp = dict[i];
				dict[i] = dict[j];
				dict[j] = temp;
			}
		}
	}
}


int main(void)
{
	struct entry dictionary[100] = 
		{{"abyss", 		"a bottomless pit"},
		 {"aerie", 		"a high nest"},
		 {"acumen",		"mentally sharp; keen"},
		 {"addle",		"to become confused"},
		 {"affix",		"to append; attach"},
		 {"aardvark", 	"a burrowing African mammal"},
		 {"agar",		"a jelly made from seaweed"},
		 {"aigrette", 	"an ornamental cluster of feathers"},
		 {"ahoy",		"a nautical call of greeting"},
		 {"ajar",		"partially opened"}};
	int entries = 10;

	dictionarySort(dictionary, entries);

	return 0;
}