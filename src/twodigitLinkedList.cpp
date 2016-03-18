/*
OVERVIEW:  Given a single linked list (two digits as a node).Convert that to number


INPUTS:  SLL head pointer

OUTPUT: Create a number from the linked list given ,In each node there are two numbers ,digit1 and digit1 ,
So if the nodes are 12->34->56->78 , Final number would be 12345678 ( Integer)

ERROR CASES:

NOTES: Only Postive Numbers
*/

#include <stdio.h>
#include <malloc.h>
#include<stdlib.h>

struct node {
	int digit1;
	int digit2;
	struct node *next;
};

int convert_sll_2digit_to_int(struct node *head){

	int n = 0, i = 0;
	char a[10];
	struct node *pt;
	pt = head;
	while (pt != NULL)
	{
		a[i] = pt->digit1 + '0';
		i++;
		a[i] = pt->digit2 + '0';
		i++;
		pt = pt->next;
	}
	a[i] = '\0';
	n = atoi(a);

	return n;
}
