#include<iostream>
using namespace std;
int main()
{
	int a[10]={8,3,6,4,6,5,6,8,2,7};
	int count;
	for(int i=0;i<10-1;i++)
	{	
		count=1;
		if(a[i]!=-1)
		{
		for(int j=i+1;j<10;j++)
		{
			if(a[i]==a[j])
			{
			count++;
			a[j]=-1;
			}
		}
		if(count>1)
			cout<<a[i]<<" repeated "<<count<<endl;
		}
	}
}
