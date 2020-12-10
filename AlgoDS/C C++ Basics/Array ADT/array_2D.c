#include<stdio.h>
#include<stdlib.h>

int main()
{
	int i,j;
	//normal 2D array completely in stack
	int A[3][4]={{1,2,3,4},{2,4,6,8},{1,3,5,7}};
	
	for(i=0;i<3;i++)
	{
		for(j=0;j<4;j++)
			printf("%d ",A[i][j]);
		printf("\n");
	}
	
	int *B[3];
	//row in stack and column in heap memory
	B[0]=(int*)malloc(4*sizeof(int));	
	B[1]=(int*)malloc(4*sizeof(int));
	B[2]=(int*)malloc(4*sizeof(int));
	
	for(i=0;i<3;i++)
	{
		for(j=0;j<4;j++)
			printf("%d ",B[i][j]);
		printf("\n");
	}
	
	
	//completely in heap using double pointer
	int **C;
	C=(int**)malloc(3*sizeof(int*));
	C[0]=(int*)malloc(4*sizeof(int));	
	C[1]=(int*)malloc(4*sizeof(int));
	C[2]=(int*)malloc(4*sizeof(int));
	
	for(i=0;i<3;i++)
	{
		for(j=0;j<4;j++)
			printf("%d ",C[i][j]);
		printf("\n");
	}
	
	return 0;
}
