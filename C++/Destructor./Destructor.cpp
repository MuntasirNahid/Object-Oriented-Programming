//destructor:
//deconstructor is also a member function of a class that has the same name as the class name preceded by a tilde(~) operator.
// It helps to deallocate the memory of an object.
//It is called while object of the class is freed or deleted.

#include<bits/stdc++.h>
using namespace std;

class Student
{
public:
	Student();
	void print();
	~Student();

};
Student :: Student()
{
	cout<<"Constructor is called"<<endl;
}
Student :: ~Student()
{
	cout<<"Destructor is called"<<endl;
}
void Student :: print()
{
     cout<<"Print function is called"<<endl;
}
int main()
{
	Student nahid;
	nahid.print();
}

// Constructor is called
// Print function is called
// Destructor is called



//--------------------------------------------------------------------------------------------//
#include<iostream>
#include<string>
using namespace std;

// Mainly used to de-allocate dynamic memory allocations . (Good practice)
class Animal
{
private:
	int height;
	int weight;
	//Destructor can't be declared private /protected.
	public:
	// Public function member
	// Same name as class
	// Preceded with ~
	// No parameter
	// No return value( But return statement can be used )
	// void ~Animal() ; // Invalid

	// Only one destructor is possible in a class .
	// Destructor can't be overloaded .
		~Animal()
		{
			cout<<"Animal Destroyed"<<endl;
		}

};
class Dog:public Animal
{
private:
	string name;
public:
	~Dog()
	{
		cout<<"Dog Destroyed"<<endl;
	}
};

// When returning an object from a function , if another object receives the returned object , then destructor is not called . Otherwise destructor is called .
int main()
{
	// Destructor is automatically called by the compiler when an object is destroyed . (Not a pointer).

	Animal A;
	// Objects are destroyed when they go out of scopee .

 	Animal *a=new Animal;
 	delete a;

 	
	Dog d;
	// Base class's destructor is automatically called with the derived class's destructor .


	// Destructors are called in pass object by value to function and return object from function , constructors are not called .

}
