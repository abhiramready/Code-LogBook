#include<stdio.h>
#include<stdlib.h>

struct Node
{
	int data;
	struct Node *next;
}*first;
 
void create(int a[],int n)
{
	int i;
	struct Node *t, *last;
	first=(struct Node *)malloc(sizeof(struct Node));
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

void Display(struct Node *p)
{
	printf("\n");
	while(p!=NULL)
	{	
		printf("%d ",p->data);
		p=p->next;
	}	
}

struct Node * LSearch(struct Node *p,int key)
{
	struct Node *q;
	while(p!=NULL)
	{
		if(key==p->data)
		{
			q->next=p->next;
			p->next=first;
			first=p;
			return p;
		}
		q=p;
		p=p->next;
	}
	return NULL;
}

int main()
{
	struct Node *t;
	int a[]={2,4,8,10,15};
	create(a,5);
	Display(first);
	t=LSearch(first,15);
	if(t!=NULL)
		printf("\nKey is found");
	else
		printf("\nKey not found");
	Display(first);	
	return 0; 
}
