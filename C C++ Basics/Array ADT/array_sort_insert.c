#include<stdio.h>
#include<stdlib.h>

struct Array
{
	int A[10];
	int size;
	int length;	
};

void Display(struct Array arr)
{
	int i;
	printf("\nElements are \n");
	for(i=0;i<arr.length;i++)
		printf(" %d",arr.A[i]);
}

void InsertSort(struct Array *arr,int x)
{   
    int i=arr->length-1;
    //checking for free space
    if(arr->length==arr->size)
        return;
    while(i>=0 && arr->A[i]>x)
    {
        arr->A[i+1]=arr->A[i];
        i--;
    }
    arr->A[i+1]=x;
    arr->length++;
    
}

int main()
{
	struct Array arr={{2,3,4,5,6},10,5};
	
	Display(arr);
	InsertSort(&arr,20);
	Display(arr);
	InsertSort(&arr,1);
	Display(arr);

	return 0;
}
