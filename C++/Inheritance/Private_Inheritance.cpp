//The members of the base class are gonna act as the private members of the derived class

#include<iostream>
#include<string>
using namespace std;
class person {
protected:
	string name;
public:
	void setName(string iname)
	{
		name = iname;
	}

};
class Student : private person {
public:
	void display()
	{
		cout << name << endl;
	}
	void studentSetName(string iname)
	{
		setName(iname);
	}
};
//This means if we derive any class from subclass Student any of the member of Person class is not accessible
class GStudent : public Student { //class GStudent : Student //specify na korle by default private
public:
	// setGStudentName(string iname)
	// {
	// 	name=iname;
	// }
	void setGStudentName(string iname)
	{
		studentSetName(iname);//we can access the public method of class Student
	}
};

int main()
{
	// GStudent Nahid;
	// Nahid.setGStudentName("Nahid");//It will show error as Person Name is Protected

	GStudent Nahid;
	Nahid.setGStudentName("Nahid");
	Nahid.display();


	return 0;
}
