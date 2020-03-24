#include<stdio.h>
#include<stdlib.h>
int * fun(int n)
{
	int *p;
	p=(int *)malloc(n*sizeof(int));
	return p;
}
int main()
{
	int *A,i;
	A=fun(5);
	for(i=0;i<5;i++)
	{
		*(A+i)=i;
		printf("%d",*(A+i));
	}
	return 0;
}
