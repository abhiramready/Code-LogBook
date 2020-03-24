#include<iostream>
using namespace std;
int swap(int &a,int &b)
{
	int temp;
	temp=a;
	a=b;
	b=temp;
}
int main()
{
	int x,y;
	x=10;
	y=5;
	cout<<"Before swapping : "<<x<<" "<<y<<endl;
	swap(x,y);
	cout<<"After swapping : "<<x<<" "<<y<<endl;
	return 0;
}
