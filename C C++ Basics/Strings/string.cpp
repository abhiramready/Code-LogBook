#include<iostream>
using namespace std;
int main()
{
	//all below created inside stack
	char name[10]={'J','O','H','N','\0'};
	cout<<name<<endl;
	
	char names[]={'J','O','H','N'};
	cout<<name<<endl;
	
	char n[10]="JOHN";
	cout<<n<<endl;
	//pointer character created inside heap memory
	char *c="JHON";
	cout<<c;
	
}
