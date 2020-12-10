#include<iostream>
using namespace std;
int main()
{
	int a[10]={3,6,8,8,10,12,15,15,15,20};
	int j=0;
	for(int i=0;i<10-1;i++)
	{
		if(a[i]==a[i+1])
		{
			j=i+1;
			//j contains second duplicate element
			while(a[j]==a[i])j++;
			cout<<a[i]<<" is appearing "<<j-i<<" times. "<<endl;
			//skip all j's we covered.
			i=j-1;
		}
	}
}
