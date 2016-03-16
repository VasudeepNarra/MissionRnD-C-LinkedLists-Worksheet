/*
OVERVIEW:  Given a number convert that to single linked list (each digit as a node).
E.g.: Input: 234, Output: 2->3->4.

INPUTS:  A number.

OUTPUT: Create linked list from given number, each digit as a node.

ERROR CASES: 

NOTES: For negative numbers ignore negative sign.
*/

#include <stdio.h>
#include <malloc.h>
#include<math.h>

struct node {
	int num;
	struct node *next;
};
typedef struct node * lptr;

lptr insert_into_SSL(lptr head, int ele)
{
	lptr p = (lptr)malloc(sizeof(struct node));
	p->num = ele;
	if (head == NULL)
	{
		head = p;
		p->next = NULL;
		return head;
	}
	else
	{
		p->next = head;
		head = p;
		return head;
	}
}
struct node * numberToLinkedList(int N) {
	lptr head = NULL;
	int nu=0, rem = 0;
	N = abs(N); nu = N;
	if (N == 0) return insert_into_SSL(head, 0);
	else
	{
		while (nu != 0)
		{
			rem = nu % 10;
			nu = nu / 10;
			head=insert_into_SSL(head, rem);
		}
	}
	return head;
}
