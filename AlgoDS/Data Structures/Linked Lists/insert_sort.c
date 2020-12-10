#include<stdio.h>
#include<stdlib.h>

struct Node
{
	int data;
	//self referential pointer
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
	while(p!=NULL)
	{
		printf("%d ",p->data);
		p=p->next;
	}
	printf("\n");
	
}

int count(struct Node *p)
{
	int l=0;
	while(p)
	{
		l++;
		p=p->next;
	}
	return l;
}

void SortedInsert(struct Node *p,int x)
{
	struct Node *t,*q=NULL;
	
	t=(struct Node*)malloc(sizeof(struct Node));
	t->data=x;
	t->next=NULL;
	
	if(first==NULL)
		first=t;
	else
	{
		while(p && p->data<x)
		{
			q=p;
			p=p->next;
		}
		if(p==first)
		{
			t->next=first;
			first=t;
		}
		else
		{
			t->next=q->next;
			q->next=t;
		}
	}
}


int main()
{
	//int a[]={2,4,8,10,20};
	//create(a,5);
	Display(first);
	SortedInsert(first,15);
	Display(first);
	SortedInsert(first,1);
	Display(first);
	SortedInsert(first,25);
	Display(first);
	
	return 0;
}
