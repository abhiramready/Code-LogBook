#include<stdio.h>
#include<stdlib.h>
struct Rectangle
{
	int length;
	int breadth;
};
int main()
{
	struct Rectangle r={10,5};
	struct Rectangle *p=&r;
	//simple code
	printf(" %d %d",r.length,r.breadth);
	p->breadth=10;
	printf("\n %d %d",p->length,p->breadth);
	//create object dynamically in heap
	struct Rectangle *s;
	s=(struct Rectangle *)malloc(sizeof(struct Rectangle));
	s->length=9;
	s->breadth=99;
	printf("\n %d %d",s->length,s->breadth);
}  
