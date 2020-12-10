#include<stdio.h>
int main()
{
	int arr[]={12,11,15,16,15,11,12};
	int noe,uniq,index;
	noe=sizeof(arr)/sizeof(arr[0]);
	printf("%d\n",sizeof(arr));
	uniq=arr[0];
	for(index=1;index<noe;index++)
	uniq=uniq^arr[index];
	printf("uniqe element is %d",uniq);
	return 0;
}
