#include <stdio.h>

struct entry
{
	int value;
	struct entry *prev;
	struct entry *next;
};


void insertEntry(struct entry *newEntry, struct entry *entryNum)
{
	(*newEntry).next = (*entryNum).next;
	(*entryNum).next = newEntry;
}

void removeEntry(struct entry *entryNum)
{
	(*(*entryNum).prev).next = (*entryNum).next; 
	(*(*entryNum).next).prev = (*entryNum).prev;
}


int main(void)
{
	struct entry n0, n1, n2, n3, n4, nE;
	struct entry *listPtr = &n0;

	n0.value = 0;
	n0.prev = 0;
	n0.next = &n1;

	n1.value = 100;
	n1.prev = &n0;
	n1.next = &n2;

	n2.value = 200;
	n2.prev = &n1;
	n2.next = &n3;

	n3.value = 300;
	n3.prev = &n2;
	n3.next = &n4;

	n4.value = 400;
	n4.prev = &n3;
	n4.next = 0;

	nE.value = 350;

	printf("List before insertion:\n");
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

	listPtr = &n0;

	insertEntry(&nE, &n3);

	printf("List after insertion:\n");
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

	listPtr = &n0;

	removeEntry(&n3);  // now the parameter can be the entry to be removed

	printf("List after removal:\n");
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