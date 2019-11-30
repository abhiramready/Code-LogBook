#include<stdio.h>
int main()
{
    int arr[]={13,28,17,13,28,17,99,101,-23,101,-23};
    int uniq, index, noe;
    noe=sizeof(arr)/sizeof(arr[0]);
    uniq=arr[0];
    for(index=1;index<noe;index++)
        uniq=uniq^arr[index];
    printf("%d ",uniq);
    return 0;
}
