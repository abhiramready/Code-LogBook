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

int isoperand(char x)
{
	if(x=='+'|| x=='-'|| x=='*' || x=='/')
		return 0;
	else
		return 1;
}

int Eval(char *postfix)
{
	int i=0;
	int x1,x2,r;
	
	for(i=0;postfix[i]!='\0';i++)
	{
		if(isoperand(postfix[i]))
		{
			push(postfix[i]-'0');
		}
		
		else
		{
			x2=pop();
			x1=pop();
			switch(postfix[i])
			{
				case '+':r=x1+x2;break;
				case '-':r=x1-x2;break;
				case '*':r=x1*x2;break;
				case '/':r=x1/x2;break;
			}
			push(r);
		}
	}
	return top->data;
}



int main()
{
	char *postfix="234*+82/-";
	
	printf("Result is %d\n",Eval(postfix));
	

	return 0;
}
