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
	
};

int main()
{
	Student Nahid,Dihan;//Nahid and Dihan is an object of student class which have every property of Student class
	Nahid.id=119;
	Nahid.gpa=3.99;
	Nahid.print();
	
	Dihan.id=118;
	Dihan.gpa=3.99;
	Dihan.print();
}

//or


class Animal
{
	public:
		   Animal()
		   {
			a=10;
			print();
		   }
		   void print()
		   {
				cout<<"HELLO"<<endl;
		   }
		   int a;
}
int main()
{
	Animal Tom;
}
