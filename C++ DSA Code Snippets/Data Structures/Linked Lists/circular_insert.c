#include<stdio.h>
#include<stdlib.h>

struct Node
{
	int data;
	struct Node *next;
}*Head;

void create(int a[],int n)
{
	struct Node *t,*last;
	int i;
	Head=(struct Node*)malloc(sizeof(struct Node));
	Head->data=a[0];
	Head->next=Head;
	last=Head;
	
	for(i=1;i<n;i++)
	{
		t=(struct Node*)malloc(sizeof(struct Node));
		t->data=a[i];
		t->next=last->next;
		last->next=t;
		last=t;
	}
}

void Display(struct Node *h)
{
	do
	{
		printf("%d ",h->data);
		h=h->next;
	}while(h!=Head);
	printf("\n");
}


void Insert(struct Node *p,int index, int x)
{
	struct Node *t;
	int i;
	
	if(index<0 || index > Length(Head))
		return;
	
	if(index==0)
	{
		t=(struct Node*)malloc(sizeof(struct Node));
		t->data=x;
		if(Head==NULL)
		{
			Head=t;
			Head->next=Head;
		}
		else
		{
			while(p->next!=Head)p=p->next;
			p->next=t;
			t->next=Head;
			Head=t;
		}
	}	
	else
	{
		t=(struct Node*)malloc(sizeof(struct Node));
		for(i=0;i<index-1;i++)p=p->next;
		t->data=x;
		t->next=p->next;
		p->next=t;
	}	
}


int Length(struct Node *p)
{
	int len=0;
	do
	{
		len++;
		p=p->next;
	}while(p!=Head);
	return len;
}

int main()
{
	int a[]={1,2,3,4,5};
	create(a,5);
	Display(Head);
	Insert(Head,2,10);
	Display(Head);
	return 0;
}
