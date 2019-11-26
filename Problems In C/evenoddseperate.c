#include<stdio.h>
int main()
{
	int arr[]={12,3,5,4,7,11,10,2};
	//odd even seperation
	int always,asuwish,noe,index,temp;
	noe=sizeof(arr)/sizeof(arr[0]);
    printf("Before Seperation");
	for(always=0;always<noe;printf("  %d ",arr[always++]));
	printf("After Seperation \n");
    for(asuwish=0,always=0;arr[always];always++)
    {
        if(arr[asuwish]%2==0 && arr[always]%2!=0)
        {
            temp=arr[always];
            arr[always]=arr[asuwish];
            arr[asuwish]=temp;
            asuwish++;
        }
    }
    for(always=0;always<noe;printf("  %d ",arr[always++]));

	return 0;
}