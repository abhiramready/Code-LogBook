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

void Reverse1(struct Node *p)
{
	int *A,i=0;
	struct Node *q=p;
	A=(int *)malloc(sizeof(int)*count(p));
 	while(q!=NULL)
	{
		A[i]=q->data;
 		q=q->next;
 		i++;
 	}
 	q=p;
 	i--;
 	while(q!=NULL)
 	{
 	q->data=A[i];
 	q=q->next;
 	i--;
 	}
}


void Reverse2(struct Node *p)
{
 struct Node *q=NULL,*r=NULL;

 while(p!=NULL)
{
 r=q;
 q=p;
 p=p->next;
 q->next=r;
 }
 first=q;
}


void Reverse3(struct Node *q,struct Node *p)
{
 if(p)
 {
 Reverse3(p,p->next);
 p->next=q;
 }
 else
 first=q;
}


int main()
{
	int a[]={2,11,8,10,12};
	create(a,5);
	Display(first);
	
	Reverse1(first);
	Display(first);
	
	Reverse2(first);
	Display(first);
	
	Reverse3(NULL,first);
	Display(first);

	return 0;
}
