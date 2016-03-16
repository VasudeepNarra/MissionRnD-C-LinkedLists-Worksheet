/*
OVERVIEW: Given a single linked list, remove every Kth node in the linked list.
E.g.: 1->2->3->4->5 and K 2, output is 1->3->5.

INPUTS: A linked list and Value of K.

OUTPUT: Remove every Kth node in the linked list.

ERROR CASES: Return NULL for error cases.

NOTES:
*/

#include <stdio.h>

struct node {
	int num;
	struct node *next;
};

typedef struct node * lptr;
struct node * removeEveryKthNode(struct node *head, int K) {
	if (head == NULL || K <= 1) return NULL;
	lptr t = head; int flag = 0;

	while (t != NULL) {
		flag++; t = t->next;
	}
	if(flag>K) return head;
	if (flag == K) {
		t = head;
		while (t->next->next != NULL) t->next;
		t->next = NULL;
		return head;
	}
	t = head;
	while (t != NULL)
	{
		int k = K;
		while (k != 2 && t!=NULL)
		{
			t = t->next; k--;
		}
		if (t != NULL)
		{
			if (t->next->next ==NULL) return head;
			t->next = t->next->next;
		}
		else if (t==NULL)
		{
			return head; 
		}
		else{}
	}
	return head;
}