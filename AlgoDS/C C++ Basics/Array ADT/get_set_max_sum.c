#include<stdio.h> 
struct Array 
{    
	int A[10];    
	int size;    
	int length; 
};    
	
void Display(struct Array arr)    
{        
	int i;        
	printf("\nElements are\n");        
	for(i=0;i<arr.length;i++)            
	printf("%d ",arr.A[i]);    
} 

int Get(struct Array arr,int index) 
{    
	if(index>=0 && index<arr.length)        
	return arr.A[index];    
	return -1; 
} 

void Set(struct Array *arr,int index,int x) 
{    
	if(index>=0 && index<arr->length)    
	arr->A[index]=x; 
} 
int Max(struct Array arr) 
{    
	int max=arr.A[0];    
	int i;    
	for(i=1;i<arr.length;i++)    
	{        
		if(arr.A[i]>max)            
		max=arr.A[i];    
	}    
	return max; 
}

int Min(struct Array arr) 
{    
	int min=arr.A[0];    
	int i;    
	for(i=1;i<arr.length;i++)    
	{        
		if(arr.A[i]<min)            
		min=arr.A[i];    
	}    
	return min; 
} 

int Sum(struct Array arr) {    
	int s=0;    
	int i;    
	for(i=0;i<arr.length;i++)        
	s+=arr.A[i];    
	return s; 
} 

float Avg(struct Array arr) 
{    
	return (float)Sum(arr)/arr.length; 
} 

int main() 
{    
	struct Array arr1={{2,3,9,16,18,21,28,32,35},10,9};    
	printf("\nSum %d",Sum(arr1)); 
	printf("\nAvg %d",Avg(arr1)); 
	printf("\n%d",Get(arr1,9));
	Set(&arr1,0,15);
	printf("\nMax %d",Max(arr1)); 
	printf("\nMin %d",Min(arr1));
	
	Display(arr1);    
	return 0; 
}
