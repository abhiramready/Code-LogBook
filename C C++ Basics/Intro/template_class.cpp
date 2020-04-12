#include<iostream>
using namespace std;

template<class T>
class Arithmatic
{
	private:
		T a;
		T b;
	
	public:
	Arithmatic(T a,T b);
	T add();	
};

template<class T>
Arithmatic<T>::Arithmatic(T a,T b)
{
	this->a=a;
	this->b=b;
}

template<class T>
T Arithmatic<T>::add()
{
	T c;
	c=a+b;
	return c;
}

int main()
{
	Arithmatic<int>ar(10,5);
	cout<<ar.add()<<endl;
	Arithmatic<float>ar1(2.5,1.3);
	cout<<ar1.add();
}
