#include<stdio.h>
#include<stdlib.h>
struct Stack
{
	int size;
	int top;
	int *s;
};

void create(struct Stack *st)
{
	printf("Enter size of the stack");
	scanf("%d",&st->size);
	st->top=-1;
	st->s=(int *)malloc(st->size*sizeof(int));
}

void display(struct Stack st)
{
	int i;
	for(i=st.top;i>=0;i--)
		printf("\t%d\n ",st.s[i]);
	printf("\n");
} 

void push(struct Stack *st,int x)
{
	if(st->top==st->size-1)
		printf("Stack Overflow\n");
	else
	{
		st->top++;
		st->s[st->top]=x;
	}
}

int pop(struct Stack *st)
{
	int x=-1;
	if(st->top==-1)
		printf("Stack Underflow");
	else
	x=st->s[st->top--];
	return x;
}

int peek(struct Stack st,int index)
{
	int x=-1;
	if(st.top-index+1<0)
		printf("Invalid Index\n");
	x=st.s[st.top-index+1];
	return x;
}

int isEmpty(struct Stack st)
{
	if(st.top==-1)
		return 1;
	return 0;
	
}

int isFull(struct Stack st)
{
	return st.top==st.size-1;	
}

int stackTop(struct Stack st)
{
	if(!isEmpty(st))
		return st.s[st.top];
	return -1;
}

int main()
{
	struct Stack st;
	create(&st);
	
	push(&st,01);
	push(&st,02);
	push(&st,03);
	push(&st,04);
	push(&st,05);
	
	display(st);
	
	printf("%d is Popped\n",pop(&st));
	
	display(st);
	
	printf("%d is Peeked\n",peek(st,2));
	
	printf("is Full ? %d\n",isFull(st));
	
	printf("is Empty ? %d \n",isEmpty(st));
	
	printf("%d Stack Top\n",stackTop(st));

	return 0;
}
