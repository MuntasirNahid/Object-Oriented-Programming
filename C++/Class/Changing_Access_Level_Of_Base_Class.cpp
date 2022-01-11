//SOmetimes we need to change the access level of certain members

#include<iostream>
#include<string>
using namespace std;
class Person {
protected:
	string name;
public:
	void setName(string iname)
	{
		name = iname;
	}

};
class Student : private Person {
	//every member of person class will act as private in Student class.
	//But we can change it using access declaration
	// syntax:
	// BaseClassName :: memberName

public:
	Person  :: name;//Now it will act as a Public member of Student class
	Person :: setName;
	void display()
	{
		cout << name << endl;
	}
	void studentSetName(string iname)
	{
		setName(iname);
	}
};


int main()
{
	Student Nahid;
	Nahid.name = "Nahid";
	Nahid.display();
	Nahid.setName("Nahid");
	Nahid.display();


	return 0;
}
