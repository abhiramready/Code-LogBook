#include<iostream>
using namespace std;
int main()
{
	int a[10]={1,3,4,5,6,8,9,10,21,14};
	int i=0,j=9;
	int k=10;
	while(i<j)
	{
		if(a[i]+a[j]==k)
		{
			cout<<a[i]<<" + "<<a[j]<<" = "<<k<<endl;
			i++;
			j--;
		}
		else if(a[i]+a[j]<k)
			i++;
		else
			j--;
	}
}
