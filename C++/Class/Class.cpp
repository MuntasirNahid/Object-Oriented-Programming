/*
What is Class?
-A class is a template from which individual object can be created.
 //Common Collection of many object is known as class.
//A Class is a user defined data-ype which has data members and member functions.
//Data members are the data variables and member functions are the functions used to manipulate these variables and together
these data members and member functions defines the properties and behaviour of the object in a CLass.


//Class Members:
//Attributes/Properties(Variable)
//Methods/Behaviour(Functions)


//When a class is defines ,no memory is allocated but when it is instantiated(i,e. an object is created) memory
is allocated .

 Example:
 Class:Student
 -----------
 id 
 gpa



 What is Object?
 -Any class Type Variable is called an object.
 //An object is an instance of a class

 Example:
 Student Nahid;
 Student Dihan;

//

 //How to declare class and object?
 -
 //Class:

 class className
 {
	public://that means we can use everything of this class from outside 
	//2 things can be in class
	//variables and function


 };

example:

class Student
{
	public:
		int id;
		double gpa;
};


//object:

classname objectName;

Student Nahid;
Student Dihan;
//or
Student Nahid,Dihan;

*/

//Coding:

#include<bits/stdc++.h.>
using namespace std;

class Student
{
	public:
		int id;
		double gpa;
	
};

int main()
{
	Student Nahid,Dihan;//Nahid and Dihan is an object of student class which have every property of Student class
	Nahid.id=119;
	Nahid.gpa=3.99;
	cout<<Nahid.id<<" "<<Nahid.gpa<<endl;

	
	Dihan.id=118;
	Dihan.gpa=3.99;
	cout<<Dihan.id<<" "<<Dihan.gpa<<endl;
}

