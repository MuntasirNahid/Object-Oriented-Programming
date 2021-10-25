/*
what is a constructor?
-Constructor is a special type of function that is used to initialize the object

What are the properties of constructor?
-
1)Constructor is a special type of function.
2)Constructor has the same name as that of the class it belongs
3)It has no return type not even void
4)It is called automatically.
5)It can be defined manually with arguments or without arguments.
6)It is called whenever an instance of the class is created.



//Type of Constructor:
 1)Default Constructor
2)parametrized Constructor
*/


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
		Student(int x,double y)//parametrized constructor
		{
			id=x;
			gpa=y;

		}
		Student()
		{
			cout<<"Default Constructor"<<endl;
		}
		
	
};

int main()
{
	Student Tushar;//It will call default constructor;
	Student Nahid(119,3.99),Dihan(118,3.99);//These will call parametrized constructor
	Nahid.print();
	Dihan.print();
}






