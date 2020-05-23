#include<stdio.h>

struct Node 
{
	struct Node *prev;
	int data;
	struct Node *next;
}*first=NULL;


void create(int A[], int n)
{
	struct Node *t,*last;
	int i;
	
	first=(struct Node*)malloc(sizeof(struct Node*));
	first->data=A[0];
	first->prev=first->next=NULL;
	last=first;
	for(i=1;i<n;i++)
	{
		t=(struct Node*)malloc(sizeof(struct Node*));
		t->data=A[i];
		t->next=last->next;
		t->prev=last;
		last->next=t;
		last=t;
	}	
}

void Display(struct Node *p)
{
	while(p)
	{
		printf("%d ",p->data);
		p=p->next;
	}
	printf("\n");
}


int Length(struct Node *p)
{
	int len=0;
	while(p)
	{
		len++;
		p=p->next;
	}
	return len;
}

int delete(struct Node *p,int index)
{
	struct Node *q;
	int i,x=-1;
	if(index<1 || index>Length(p))
		return -1;
	if(index==1)
	{
		first=first->next;
		if(first)first->prev=NULL;
		x=p->data;
		free(p);
	}
	else
	{
		for(i=0;i<index-1;i++)
			p=p->next;
		p->prev->next=p->next;
		if(p->next)
			p->next->prev=p->prev;
		x=p->data;
		free(p);
	}
	return x;
}

int main()
{
	int A[]={1,2,3,4,5};
	create(A,5);
	Display(first);
	delete(first,1);
	Display(first);
}
