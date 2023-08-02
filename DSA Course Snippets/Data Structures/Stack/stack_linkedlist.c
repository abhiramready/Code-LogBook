#include<stdio.h>
#include<stdlib.h>
struct Node 
{
	int data;
	struct Node *next;	
}*top=NULL;

void push(int x)
{
	struct Node *t;
	t=(struct Node*)malloc(sizeof(struct Node));
	
	if(t==NULL)
		printf("Stack is Full\n");
	else
	{
		t->data=x;
		t->next=top;
		top=t;
	}
}

int pop()
{
	int x=-1;
	if(top==NULL)
		printf("Stack is Empty\n");
	else
	{
		struct Node *t;
		t=top;
		top=top->next;
		x=t->data;
		free(t);
	}
	return x;
}

void display()
{
	struct Node *p;
	p=top;
	while(p!=NULL)
	{
		printf("\t %d \n",p->data);
		p=p->next;
	}
	printf("\n");
}

int main()
{
	push(01);
	push(02);
	push(03);
	push(04);
	push(05);
	
	display();
	
	printf("%d is Popped\n",pop());

	display();

	return 0;
}
