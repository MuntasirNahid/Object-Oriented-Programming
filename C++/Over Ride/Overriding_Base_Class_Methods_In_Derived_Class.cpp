//In a base class we gonnna have a method and also in the derived class we gonna have amethod with 
//the same signature(same name,same number of parameters,same return types)



#include<iostream>
using namespace std;
class Person{

public:
	void introduce()
	{
		cout<<"Hi I am a Person"<<endl;
	}
};

class Student : public Person{

public:
	void introduce()
	{
		cout<<"Hi I am a Student and You can't teach that"<<endl;
	}

};
int main()
{
	Student Nahid;
	Nahid.introduce();//Hi I am a Student and You can't teach that
	//c++ will call the method of the derived class(not the base class)
	//Which means the methods in the base class is overridden by the method in the derived class

	return 0;
}
