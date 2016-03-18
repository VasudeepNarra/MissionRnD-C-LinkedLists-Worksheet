/*
OVERVIEW: Given an unsorted single linked list, sort the linked list without using extra array or linked list.
E.g.: 4->2->1->5->3, output is 1->2->3->4->5.

INPUTS: An unsorted single linked list.

OUTPUT: Sort the linked list.

ERROR CASES: Return NULL for error cases.

NOTES: Without using extra array or linked list.
*/

#include <stdio.h>

struct node {
	int num;
	struct node *next;
};

void swap1(struct node *a, struct node *b)
{
	int t = a->num;
	a->num = b->num;
	b->num = t;
}


struct node * sortLinkedList(struct node *head) {

	if (head == NULL)
		return NULL;
	int flag;
	struct node *ptr, *lptr = NULL;
	do
	{
		flag = 0;
		ptr = head;
		while (ptr->next != lptr)
		{
			if (ptr->num > ptr->next->num)
			{
				flag = 1;
				swap1(ptr, ptr->next);
			}
			ptr = ptr->next;
		}
		lptr = ptr;
	} while (flag);
	return head;
}