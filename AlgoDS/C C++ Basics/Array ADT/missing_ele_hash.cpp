#include<iostream>
using namespace std;
int main()
{
	int a[10]={3,7,4,9,12,6,1,11,2,10};
	int b[12]={0};
	// here b is bit array or hash array
	for(int i=0;i<12;i++)
		b[a[i]]++;
	//001011011101100 will happen
	// l=0 h=12
	for(int j=0;j<=12;j++)
		{
			if(b[j]==0)
				cout<<j<<endl;
		}
	
}
