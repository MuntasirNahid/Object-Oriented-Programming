//Briefly Discussed in Topic "inheritance Type"
//Using the keyword public while inheriting from a base class
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
class Student : public person {
	//Base class's public->public
	//Base Class's protected->protected 
public:
	void display()
	{
		cout << name << endl;
	}
};

int main()
{
	Student Nahid;
//	Nahid.name="Nahid";//It  will produce error as name is under protected specifier which is not accessible from outside function(Unless derived class)


	Nahid.setName("Nahid");
	Nahid.display();

	return 0;
}