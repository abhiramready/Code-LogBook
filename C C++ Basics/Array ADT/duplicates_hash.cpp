#include<iostream>
using namespace std;
int main()
{
	int a[10]={3,6,8,8,10,12,15,15,15,20};
	int b[20]={0};
	// here b is bit array or hash array
	for(int i=0;i<12;i++)
		b[a[i]]++;
	//001011011101100 will happen
	// l=0 h=12
	for(int j=1;j<=20;j++)
		{
			if(b[j]>1)
				cout<<j<<" appear times "<<b[j]<<endl;
		}
	
}
