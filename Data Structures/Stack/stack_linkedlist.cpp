#include<iostream>
using namespace std;
class Node
{
	public:
		int data;
		Node *next;
};

class Stack
{
	private:
		Node *top;
	public:
		Stack(){top=NULL;}
		void push(int x);
		int pop();
		void display();
};

void Stack::push(int x)
{
	Node *t=new Node;
	if(t==NULL)
		cout<<"Stack is Full\n";
	else
	{
		t->data=x;
		t->next=top;
		top=t;
	}
}

int Stack::pop()
{
	int x=-1;
	if(top==NULL)
		cout<<"Stack is Empty\n";
	else
	{
		x=top->data;
		Node *t=top;
		top=top->next;
		delete t;
	}
	return x;
}

void Stack::display()
{
	Node *p=top;
	while(p!=NULL)
	{
		cout<<"\t"<<p->data<<"\n";
		p=p->next;	
	}	
	cout<<endl;
}

int main()
{
	Stack stk;
	
	stk.push(11);
	stk.push(12);
	stk.push(13);
	stk.push(14);
	stk.push(15);
	
	stk.display();
	
	cout<<stk.pop()<<" is popped \n";
	
	stk.display();
	
	return 0;
}
