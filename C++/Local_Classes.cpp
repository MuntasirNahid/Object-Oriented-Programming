//Task:Defining the classes inside  function
//In this case we can't use the class outside the function.
#include<iostream>
#include<string>
using namespace std;
void StudentList();
int main()
{
	StudentList();
	//Student Dihan;//it will give error.
	return 0;
}
void StudentList()
{
	class Student {
	public:
		string name;
		int age;
		void display()//A method is nothing but a class defining inside a function
		{
			cout << name << endl << age << endl;
		}
	};
	Student Nahid;
	Nahid.name = "Nahid";
	Nahid.age = 24;
	Nahid.display();//Nahid 24
}