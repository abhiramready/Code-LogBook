#include<stdio.h>
#include<stdlib.h>
struct Node 
{
	char data;
	struct Node *next;	
}*top=NULL;

void push(char x)
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

char pop()
{
	char x=-1;
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

int balance(char *exp)
{
	int i;
	
	for(i=0;exp[i]!='\0';i++)
	{
		if(exp[i]=='(')
			push(exp[i]);
		else if(exp[i]==')')
		{
			if(top==NULL)
				return 0;
			pop();
		}
	}
	
	if(top==NULL)
		return 1;
	else
		return 0;
}

int main()
{
	char *exp="((a+b)*(a-b))";
	
	printf("%d ",balance(exp));

	return 0;
}
