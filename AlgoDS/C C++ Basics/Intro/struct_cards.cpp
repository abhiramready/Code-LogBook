#include<iostream>
using namespace std;
struct Card
{
	int face;
	int shape;
	int color;
};
int main()
{
	struct Card deck[3]={
	{1,0,0},
	{2,0,0},
	{1,1,0}
	};
	cout<<deck[0].face<<deck[1].face<<deck[2].color;
}  
