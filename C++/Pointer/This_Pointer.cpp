//Friends function do not have this pointer as they are not a member function of the class
//Only the member function of the class have the this pointer

#include<iostream>
using namespace std;
class Person
{
private:
int age;
public:
	void setAge(int iage)
	{
		//age=iage;
		this->age=iage;//same
	}
	//this and arrow operator is not referred
	void showAge(){
		//cout<<age<<endl;
		cout<<this->age<<endl;

	}
};
int main()
{

Person Nahid;
Nahid.setAge(21);
Nahid.showAge();

	return 0;
}

//Another Use of this:

#include<iostream>
using namespace std;
class Person
{
private:
int age;
public:
	void setAge(int age)//same name
	{
		//age=age//it will print garbage value
		//this pointer contains the address of the object
		this->age=age;
	}
	//this and arrow operator is not referred
	void showAge(){
		//cout<<age<<endl;
		cout<<this->age<<endl;

	}
};
int main()
{

Person Nahid;
Nahid.setAge(21);
Nahid.showAge();

	return 0;
}
