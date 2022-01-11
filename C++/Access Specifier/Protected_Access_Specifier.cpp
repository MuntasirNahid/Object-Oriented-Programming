/*
Protected access modifier is similar to private access modifier in the sense that it can’t be accessed outside of it’s class unless with the help of friend class, the difference is that the class members declared as Protected can be accessed by any subclass(derived class) of that class as well. Protected access modifier is similar to private access modifier in the sense that it can’t be accessed outside of it’s class unless with the help of friend class, the difference is that the class members declared as Protected can be accessed by any subclass(derived class) of that class as well. 

*/
#include<iostream>
#include<string>

using namespace std;
class Person{
protected:
	string name;
public:
	void setName(string iname)
	{
		name=iname;
	}

};
class Student : public Person{

public:
	void display()
	{
		cout<<name<<endl;
	}

};
int main()
{
	// Person Nahid;
	//Nahid.name="Nahid";//it will give error..Because we cannot access protected access specifiers member directly
//But Subclass can
	Student Nahid;
	Nahid.setName("Nahid");
	Nahid.display();
	return 0;
}
