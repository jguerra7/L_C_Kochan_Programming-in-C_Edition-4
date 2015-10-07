#include <stdio.h>

struct entry
{
	int value;
	struct entry *next;
};


void removeEntry(struct entry *entryNum)
{
	(*entryNum).next = (*(*entryNum).next).next;
}


int main(void)
{
	struct entry n1, n2, n3, n4, n0;
	struct entry *listPtr = &n1;

	n1.value = 100;
	n1.next = &n2;

	n2.value = 200;
	n2.next = &n3;

	n3.value = 300;
	n3.next = &n4;

	n4.value = 400;
	n4.next = 0;

	n0.value = 0;
	n0.next = &n1;

	printf("The list before removing the entry:\n");
	while (listPtr != (struct entry*) 0)
	{
		printf("%i\n", listPtr->value);
		listPtr = listPtr->next;
	}

	listPtr = &n0;

	removeEntry(&n2); 	// The parameter can only be the entry before the one to be removed

	printf("The list after removing the entry:\n");
	while (listPtr != (struct entry*) 0)
	{
		if (listPtr->value == 0)
		{
			listPtr = listPtr->next;
			continue;
		}

		printf("%i\n", listPtr->value);
		listPtr = listPtr->next;
	}

	return 0;
}