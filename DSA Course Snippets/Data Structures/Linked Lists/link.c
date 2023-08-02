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
	while(p!=NULL)
	{	
		printf("%d ",p->data);
		p=p->next;
	}	
}

void Max(struct Node *p)
{
	int max=0;
	while(p!=NULL)
	{
		if(p->data>max)
			max=p->data;
		p=p->next;
	}
	printf("\nMax value is %d",max);
}

int RMax(struct Node *p)
{
	int x=0;
	if(p==0)
		return 0;
	x=RMax(p->next);
	if(x>p->data)
		return x;
	else
		return p->data;
}


int main()
{
	int a[]={2,4,8,10,15};
	create(a,5);
	Display(first);
	Max(first);
	//recursive
	int x=RMax(first);
	printf("\nRecursive Max %d",x);	
	return 0;
}
