//Main Task is to see how a constructor and destructor of a base class and derived class occured when we create an object of a derived class

//order:
//Constructor of the Base Class,Constructor of the derived class,Destructor of the derived class,Destructor of the Base class

#include<iostream>
using namespace std;
class Person
{
public:
	Person() {
		cout << "Constructor of the Person class called " << endl;
	}
	~Person()
	{
		cout << "Destructor of the Person class called " << endl;
	}

};

class Student : public Person
{
public:
	Student() {
		cout << "Constructor of the Student class called " << endl;
	}
	~Student()
	{
		cout << "Destructor of the Student class called " << endl;
	}

};

int main()
{
	Student Nahid;


	return 0;
}

/*
Constructor of the Person class called
Constructor of the Studnet class called
Destructor of the Student class called
Destructor of the Person class called
*/