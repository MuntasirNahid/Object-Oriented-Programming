/*
An access specifier specifies where a class member function or a member variable is available

*/

#include<iostream>
using namespace std;

class Human{
 private://if we have a method or function inside private specifier it will not be available outside the class
 	int age;
 	//By using these private method we can hide our internal Data.Like we can change the age ..As Private access
 	//user will only see what private access user shows them.The main data can be hidden.
 	

 	int getAge()
 	{
 		return age-5;
 	}

 public:
 	void DisplayAge()
 	{
 		cout<<age<<endl;
 		cout<<getAge()<<endl;
 	}
 	void setAge(int val)
 	{
 		age=val;
 	}

};

int main()
{
	Human Nahid;
	//Nahid.age=21;//it will give an error because age is private
	//so how to access a private property?
	//-We will create a public property and through this we will use public property

	Nahid.setAge(21);
	Nahid.DisplayAge();

}