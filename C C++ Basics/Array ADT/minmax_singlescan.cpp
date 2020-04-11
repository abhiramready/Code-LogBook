#include<iostream>
using namespace std;
int main()
{
	//min and max in a single scan
	int a[10]={5,8,3,9,6,2,10,7,-1,4};
	int max=a[0];
	int min=a[0];
	for(int i=1;i<10;i++)
	{
		if(a[i]<min)
			min=a[i];
		else if(a[i]>max)
			max=a[i];
	}
	cout<<"Min : "<<min<<endl;
	cout<<"Max : "<<max<<endl;	
}
