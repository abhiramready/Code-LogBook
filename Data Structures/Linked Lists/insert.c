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

void Insert(struct Node *p,int index,int x)
{
	struct Node *t;
	int i;
	
	if(index<0 || index>count(p))
		return;
	
	t=(struct Node *)malloc(sizeof(struct Node));
	t->data=x;
	if(index==0)
	{
		t->next=first;
		first=t; 
	}
	else
	{
		for(i=0;i<index-1;i++)
			p=p->next;
		t->next=p->next;
		p->next=t;
	}
}

int main()
{
	int a[]={2,4,8};
	create(a,3);
	Display(first);
	Insert(first,3,10);
	Display(first);
	Insert(first,4,11);
	Display(first);
	
	return 0;
}
