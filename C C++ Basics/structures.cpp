#include<iostream>
using namespace std;
struct Rectangle
{
	int length;
	int breadth;
};
int main()
{
	struct Rectangle r={10,5};
	cout<<r.length<<endl<<r.breadth;
}  
