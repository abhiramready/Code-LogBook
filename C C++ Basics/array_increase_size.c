#include<stdio.h>
#include<stdlib.h>

int main()
{
	//increase the size of array
	int i,*p,*q;
	p=(int *)malloc(5*sizeof(int));
	for(i=0;i<5;i++)
	p[i]=i;
	
	q=(int*)malloc(10*sizeof(int));
	for(i=0;i<5;i++)
	q[i]=p[i];
	
	free(p);
	p=q;
	q=NULL;
		
	for(i=0;i<5;i++)
	printf("%d\n",p[i]);	
	
	return 0;
}
