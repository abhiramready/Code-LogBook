#include<iostream>
using namespace std;
int main()
{
	int a[10]={6,3,8,10,4,7,5,2,9,4};
	int b[16]={0};
	int k=10;
	for(int i=0;i<10;i++)
	{	
		if(b[k-a[i]]!=0)
			cout<<a[i]<<" + "<<k-a[i]<<"="<<k<<endl;
		b[a[i]]++;
	}
}
	
