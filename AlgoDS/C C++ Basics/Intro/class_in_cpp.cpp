#include<iostream>
using namespace std;
class Rectangle
{
	private:
		int length;
		int breadth;
		
	public:
		//contructor
		Rectangle(){length=breadth=1;}
		//constructor overloading
		Rectangle(int l,int b);
		//facilitators 
		int area();
		int Perimeter();
		//getters
		int getLength(){return length;}
		//setters
		int setLength(int l){length=l;}
		~Rectangle();
};

Rectangle::Rectangle(int l,int b)
{
	length=l;
	breadth=b;
}

int Rectangle::area()
{
	return length*breadth;
}

int Rectangle::Perimeter()
{
	return 2*(length+breadth);
}
Rectangle::~Rectangle(){
}

int main()
{
	Rectangle r(10,5);
	cout<<r.area()<<endl;
	cout<<r.Perimeter()<<endl;
	r.setLength(20);
	cout<<r.getLength();
}
