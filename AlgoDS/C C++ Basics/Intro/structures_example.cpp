#include<iostream>
using namespace std;
struct Student
{
	int rollno;
	char section;
	int clas;
};
int main()
{
	struct Student stu[3]={
	{401,'A',1},
	{403,'B',2},
	{404,'C',4}
	};
	
	cout<<"All Student details below"<<endl;
	for(int i=0;i<3;i++)
	{
		cout<<"Student roll.no :"<<stu[i].rollno<<endl;
		cout<<"Student section :"<<stu[i].section<<endl;
		cout<<"Student class   :"<<stu[i].clas<<endl;
	}
}  
