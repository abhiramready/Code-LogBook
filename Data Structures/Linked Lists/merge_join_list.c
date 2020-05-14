#include<stdio.h>
#include<stdlib.h>

struct Node
{
	int data;
	//self referential pointer
	struct Node *next;
}*first=NULL,*second=NULL,*third=NULL;


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

void create2(int a[],int n)
{
	int i;
	struct Node *t, *last;
	second=(struct Node *)malloc(sizeof(struct Node));
	second->data=a[0];
	second->next=NULL;
	last=second;
	
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

void concat(struct Node*p,struct Node *q)
{
	third=p;
	while(p->next!=NULL)
		p=p->next;
	p->next=q;
}


void Merge(struct Node *p,struct Node*q)
{
	struct Node *last;
	
	if(p->data<q->data)
	{
		third=last=p;
		p=p->next;
		third->next=NULL;
	}
	else
	{
		third=last=q;
		q=q->next;
		third->next=NULL;	
	}
	
	while(p && q)
	{
		if(p->data<q->data)
		{
		last->next=p;
		last=p;
		p=p->next;
		last->next=NULL;
		}
		else
		{
		last->next=q;
		last=q;
		q=q->next;
		last->next=NULL;	
		}
	}
	if(p)last->next=p;
	if(q)last->next=q;
}

int main()
{
	int a[]={2,7,8,10,12};
	create(a,5);
	
	int b[]={3,8,9,13,22};
	create2(b,5);
	
	Display(first);
	Display(second);
	
	/*printf("\nConcatinated\n");
	concat(second,first);
	Display(third);
	*/
	
	printf("\nMerged\n");
	Merge(first,second);
	Display(third); 

	return 0;
}
