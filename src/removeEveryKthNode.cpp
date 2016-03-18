/*
OVERVIEW: Given a single linked list, remove every Kth node in the linked list.
E.g.: 1->2->3->4->5 and K 2, output is 1->3->5.

INPUTS: A linked list and Value of K.

OUTPUT: Remove every Kth node in the linked list.

ERROR CASES: Return NULL for error cases.

NOTES:
*/

#include <stdio.h>
#include<malloc.h>
struct node {
	int num;
	struct node *next;
};
struct node * removeEveryKthNode(struct node *head, int K) {
	int i = 1, l = 0;
	struct node *ptr, *t = NULL;
	if (K == 0 || K<0 || head == NULL)
		return NULL;
	ptr = head;
	while (ptr != NULL)
	{
		l++;
		ptr = ptr->next;
	}
	if (K == 1)
		return NULL;
	ptr = head;
	if (ptr->next == NULL && K == 1)
	{
		free(head);
		return NULL;

	}
	int j = l / K;
	int p;

	for (p = 0; p<j; p++)
	{
		while (ptr->next != NULL && (K != i))
		{
			t = ptr;
			ptr = ptr->next;
			i++;

		}
		t->next = ptr->next;
		i = 0;
	}
	return head;

}	/*
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
	*/
