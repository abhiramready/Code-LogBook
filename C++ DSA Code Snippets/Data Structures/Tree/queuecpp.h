#include<stdio.h>
#ifndef Queuecpp_h
#define Queuecpp_h

class Node
{
	public:
		Node *lchild;
	  	int data;
		Node *rchild;
};

class Queue
{
	private:
	int front;
	int rear;
	int size;
	Node **q;
	
public:
	Queue(){front=rear=-1;size=10;q=new Node*[size];}
	Queue(int size){front=rear=-1;this->size=size;q=new Node*[this->size];}
	void enqueue(Node *x);
	Node* dequeue();
	void Display();	
	int isEmpty(){return front==rear;}	
};

void Queue::enqueue(Node *x)
{
	if(rear==size-1)
		printf("Queue Full\n");
	else
	{
		rear++;
		q[rear]=x;
	}
}

Node* Queue::dequeue()
{
	Node* x=NULL;
	if(front==rear)
		printf("Queue is Emoty\n");
	else
	{
		x=q[front+1];
		front++;
	}
	return x;
}

#endif
