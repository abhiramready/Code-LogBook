#include<iostream>
using namespace std;
int main()
{
	int a[11]={6,7,8,9,11,12,15,16,17,18,19};
	int diff=a[0]-0;
	for(int i=0;i<11;i++)
	{
		if(a[i]-i!=diff)
		{
			while(diff<a[i]-i)
			{
				printf("%d\n",i+diff);
				diff++;
			}
			
		}
	}
}
