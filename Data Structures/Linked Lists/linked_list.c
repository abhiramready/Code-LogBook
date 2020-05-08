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
	
}

void RDisplay(struct Node *p)
{
	if(p!=NULL)
	{
		printf("%d ",p->data);
		RDisplay(p->next);
	}
	
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

int Rcount(struct Node *p)
{
	if(p==NULL)
		return 0;
	return count(p->next)+1;
}


int sum(struct Node *p)
{
	int s=0;
	while(p)
	{
		s+=p->data;
		p=p->next;
	}
	return s;
}

int Rsum(struct Node *p)
{	
	if(p==NULL)
		return 0;
	return Rsum(p->next)+p->data;
}
int main()
{
	int a[]={2,4,8,10,15};
	create(a,5);
	RDisplay(first);
	printf("\n Length is %d",Rcount(first));
	printf("\n Sum is %d",Rsum(first));

	return 0;
}
