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
	Queue(){front=rear=-1;size=10;q=new int[size];}
	Queue(int size){front=rear=-1;this->size=size;q=new int[this->size];}
	void enqueue(int x);
	int dequeue();
	void Display();		
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
		printf("Queue is Emoty\n");
	else
	{
		x=q[front+1];
		front++;
	}
	return x;
}

void Queue::Display()
{
	for(int i=front+1;i<=rear;i++)
		printf("%d ",q[i]);
	printf("\n"); 
}

int main()
{
	Queue Q(5);
	
	Q.enqueue(100);
	Q.enqueue(200);	
	Q.enqueue(300);
	
	Q.Display();
	
	Q.dequeue();
	
	Q.Display();
	return 0;
}

