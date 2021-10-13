#include<bits/stdc++.h.>
using namespace std;

class Student
{
	public:
		int id;
		double gpa;
		void print()
		{
	      cout<<id<<" "<<gpa<<endl;
		}
		void setValue(int x,double y)
		{
	      id=x;
	      gpa=y;
		}
	
};

int main()
{
	Student Nahid,Dihan;//Nahid and Dihan is an object of student class which have every property of Student class
	
	Nahid.setValue(119,3.99);
	Nahid.print();
	
	Dihan.setValue(119,3.99);
	Dihan.print();
}