//In a base class we gonnna have a method and also in the derived class we gonna have amethod with
//the same signature(same name,same number of parameters,same return types)

//Main task: How to access overridden base class methods in the derived class


#include<iostream>
using namespace std;
class Person {

public:
	void introduce()
	{
		cout << "Hi I am a Person" << endl;
	}
};

class Student : public Person {

public:
	void introduce()
	{
		cout << "Hi I am a Student and You can't teach that" << endl;
	}

};
int main()
{
	Student Nahid;
	Nahid.introduce();//Hi I am a Student and You can't teach that
//To access the overridden method of Base class:
	//Object_Name.Base_Class_Name::method;
	Nahid.Person::introduce();//Hi I am a Person


	return 0;
}




//To access Base Class Methods in the derived class:

#include<iostream>
using namespace std;
class Person {

public:
	void introduce()
	{
		cout << "Hi I am a Person" << endl;
	}
};

class Student : public Person {

public:
	void introduce()
	{
		cout << "Hi I am a Student and You can't teach that" << endl;
		Person::introduce();
	}

};
int main()
{
	Student Nahid;
	Nahid.introduce();
	return 0;
}
