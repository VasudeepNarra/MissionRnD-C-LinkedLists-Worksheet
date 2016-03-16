/*
OVERVIEW:  Given a single linked list of 0s 1s and 2s ,Sort the SLL such that zeroes 
will be followed by ones and then twos.


INPUTS:  SLL head pointer

OUTPUT: Sorted SLL ,Head should Finally point to an sll of sorted 0,1,2


ERROR CASES:

NOTES: Only 0,1,2, will be in sll nodes
*/

#include <stdio.h>
#include <malloc.h>

struct node {
	int data;
	struct node *next;
};
typedef struct node * lptr;
void sll_012_sort(struct node *head){
	int arr[3] = {0,0,0},k=0;
	lptr t1=head;
	while (head != NULL)
	{
		if (head->data == 0) arr[0]++;
		else if (head->data == 1) arr[1]++;
		else if (head->data == 2) arr[2]++;
		else{}
		head = head->next;
	}
	head = t1;
	while (head != NULL)
	{
		while (k != 3)
		{
			while (arr[k] != 0)
			{
				head->data = k;
				head = head->next;
				arr[k]--;
			}
			k++;
		}
	}
	head = t1;
}