#include<stdio.h>
#incldue<stdlib.h>

struct Node
{
	int data;
	struct Node *next;
}*first;
 
void create(int a[],int n)
{
	int i;
	strcut Node *t, *last;
	//first=(struct Node *)malloc(sizeof(struct Node));
	first->data=a[0];
	first->next=NULL;
	last=first;
	
	for(i=1;i<n;i++)
	{
		t=(struct Node*)malloc(sizeof(struct Node));
		t->data=a[i];
		t->next=NULL;
		last->next=t; 
		last=t; 
	}
}
