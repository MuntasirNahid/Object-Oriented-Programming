/*
The capability of a class to derive properties and characteristics from another class is called Inheritance. Inheritance is one of the most important feature of Object Oriented Programming. 
Sub Class: The class that inherits properties from another class is called Sub class or Derived Class. 
Super Class:The class whose properties are inherited by sub class is called Base Class or Super class.
*/
#include<iostream>
#include<string>
using namespace std;

class Person {
public:
	string name;
	int age;
	void setName(string iname)
	{
		name = iname;
	}
	void setAge(int iage)
	{
		age = iage;
	}
};
//we want to create a new class where we want to use every feature of Person class
//so,we will create a new class Student and inherite the person class's feature there

//Syntax:

// class subclass_name : access_mode base_class_name
// {
//   //body of subclass
// };

class Student : public Person { //this means that we have a class student which will inherite every non private features of class person
//here every public member of class person will act as public member of class student
public:
	int id;
	void setId(int iid)
	{
		id = iid;
	}
	void introduce()
	{
		cout << "Hi I am " << name << " and I am " << age << " years old." << endl;
		cout << "And my student id is " << id << endl;
	}

};

int main()
{
	Student Nahid;
	Nahid.setName("Nahid");
	Nahid.setAge(21);
	Nahid.setId(1234);
	Nahid.introduce();
	return 0;
}


