#include<iostream>
using namespace std;
class Rectangle
 {
 	private:
 		int length;
 		int breadth;
 		
 	public:
	 //constructor
	 Rectangle(int l,int b)
	 {
	 	length=l;
	 	breadth=b;
	}
	
	int area(){
		return length*breadth;
	}
	
	void changeLength(int l)
	{
		length=l;
		}	
 };
 
 int main()
 {
 	int a;
	Rectangle r(10,5);
 	a=r.area();
 	cout<<a<<endl;
 	r.changeLength(20);
 	a=r.area();
 	cout<<a;
 	
 }
