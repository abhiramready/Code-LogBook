#include<iostream>
using namespace std;

class Queue
{
private:
	int front;
	int rear;
	int size;
	int *q;
	
public:
	Queue()
	{
	front=rear=-1;
	size=10;
	q=new int[size];
	}
	
	Queue(int size)
	{
	front=rear=-1;
	this->size=10;
	q=new int[this->size];
	}
	
	void enqueue(int x);
	int dequeue();
	void display();
};

void Queue::enqueue(int x)
{
	if(rear==size-1)
		printf("Queue Full\n");
	else
	{
		rear++;
		q[rear]=x;
	}
}

int Queue::dequeue()
{
	int x=-1;
	if(front==rear)
		printf("Queue is empty\n");
	else
	{
		x=q[front+1];
		front++;
	}
	return x;
}

void Queue::display()
{
	for(int i=front+1;i<=rear;i++)
		printf("%d ",q[i]);
	printf("\n");
}

int main()
{
	Queue q(5);
	q.enqueue(100);
	q.enqueue(200);
	q.enqueue(300);
	q.enqueue(400);
	q.enqueue(500);
	
	q.display();
	
	q.dequeue();
	
	q.display();
	
	return 0;
}
