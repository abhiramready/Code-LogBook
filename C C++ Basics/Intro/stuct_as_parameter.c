#include<stdio.h>
struct Rectangle{
	int length;
	int breadth;
};

struct Test
{
int A[5];
int n;	
};

void fun(struct Test t1)
{
	printf("\n%d",t1.A[0]);
	t1.A[0]=10;
	t1.A[1]=9;
	printf("\n%d",t1.A[0]);
}

int area(struct Rectangle r1)
{
	return r1.length*r1.breadth;
	/*
	The above method is callby value 
	if we need to change and interact with original
	parameters like modify original length and breadth
	we need to use call by reference 
	struct Rectangle &r1 will make this possible
	*/
}

void changeLength(struct Rectangle *p,int l)
{
p->length=l;
//this is call by reference using pointer
}

int main()
{
	struct Rectangle r={10,5};
	printf("%d",area(r)); 
	changeLength(&r,20);
	printf("\n%d",area(r));
	//
	//pass structure if array is present in structrue
	struct Test t={{2,4,6,8,10},5};
	fun(t);
	printf("\n%d",t.A[0]);
	//dosen't change here
	return 0;
}
