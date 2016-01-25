#include <stdio.h>

struct entry
{
	int value;
	struct entry *next;
};


void insertEntry(struct entry *newEntry, struct entry *entryNum)
{
	(*newEntry).next = (*entryNum).next;
	(*entryNum).next = newEntry;
}


int main(void)
{
	struct entry n1, n2, n3, n4, nE;
	struct entry *listPtr = &n1;

	n1.value = 100;
	n1.next = &n2;

	n2.value = 200;
	n2.next = &n3;
	
	n3.value = 300;
	n3.next = &n4;

	n4.value = 400;
	n4.next = 0;

	nE.value = 350;

	printf("The list before adding a new entry:\n");
	while (listPtr != (struct entry*) 0)
	{
		printf("%i\n", listPtr->value);
		listPtr = listPtr->next;
	}

	listPtr = &n1;

	insertEntry(&nE, &n3);

	printf("The list after adding a new entry:\n");
	while (listPtr != (struct entry*) 0)
	{
		printf("%i\n", listPtr->value);
		listPtr = listPtr->next;
	}

	return 0;
}