//Base Class er public and protected member derived class e eshe shob protected member er moto act korbey


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
class Student : protected person {

public:
	void display()
	{
		cout << name << endl;
	}
	void setStudentName(string iname)//Jehetu Student class er under a person class er shob protected.That's why student class theke access kora jabey .

	{
		setName(iname);
	}
};

int main()
{
	Student Nahid;
//	Nahid.setName("Nahid");//It will give error.Because student class er under a nmae protected and outside function theke oita access kora jabey na
	Nahid.setStudentName("Nahid");
	Nahid.display();

	return 0;
}
