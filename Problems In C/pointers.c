#include<stdio.h>
int main()
{	
	int i=5;
	int *a=&i;
	int *b=&i;
	printf("%d \n",i);
	printf("%d \n",a);
	printf("%d \n",*a);
	printf("%d \n",b);
	return 0;
	}
