#include<stdio.h>
int main()
{
    int arr[]={12,3,5,7,9,2,4,6,8,13,14,16,17,18,21};
    int asuwish, always, noe, temp, index;
    noe=sizeof(arr)/sizeof(arr[0]);
    for(always=0;always<noe;printf("%d ",arr[always++]));
    for(asuwish=0,always=0;always<noe;always++)
    {
        if(arr[asuwish]%2==0&&arr[always]%2!=0)
        {
            temp=arr[always];
            for(index=always;index>=asuwish;index--)
                arr[index]=arr[index-1];
            arr[asuwish]=temp;

        }
        if(arr[asuwish]%2!=0)
            asuwish++;
    }
    for(always=0,printf("\n");always<noe;printf("%d ",arr[always++]));

    return 0;
}
