#include<stdio.h>
#include<stdlib.h>

int main()
{
	//static
	int A[5]={2,4,6,8,10};
	//dynamic
	int *p;
	int i;
	
	p=(int *)malloc(5*sizeof(int));
	
	for(i=0;i<5;i++)
	p[i]=i;
	
	for(i=0;i<5;i++)
	printf("%d\n",A[i]);	
	for(i=0;i<5;i++)
	printf("%d\n",p[i]);	
	
	return 0;
}
