#include<stdio.h>
#include<stdlib.h>
int main()
{
	int n;
	scanf("%d",&n);
	int *p;
	p=(int *)malloc(n*sizeof(int));
	/*
	In C++ we write the same as
	p=new int[5];
	*/
	*(p+2)=5;
	printf("%d",*(p+2));
	return 0;
}
