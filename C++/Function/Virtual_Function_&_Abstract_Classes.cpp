//Sometimes there will be no meaningfull defination of virtual class within the base class

//A base class may not be able to define an object sufficiently to allow Base class virtual function to be created.Further in some situations you will want to ensure that
//all derived classes override a virtual function.So at that time we can use The pure virtual functions.


//Abstract Class:
//An abstract class is nothing but a class that contains one or more pure virtual methods.
//What is the use of the abstract class?

//An abstract class such as an incomplete type that can be used as the founfation for the derived classes.
#include<iostream>
using namespace std;
class Person {//Here person is an abstract class because it contains one pure virtual methods and we can't create any object from this class.
public:

	//defination of the pure virtual function:
	virtual void introduce() = 0; //So whatever the classes will be inherited from the class Person,will have to override this introduce method or define the body of introduce method.IF they fail to do that the compiler will generate the error.
	//Here zero doesn't mean it has the value of zero.It is the type of pure virtual function defination

};
//****
//we cannot define a pure virtual method in a base class,we have to use a scope resoulastion operator in this case
void Person::introduce() {
	cout << "Hei From person" << endl;
}

class Student: public Person {
public:
	void introduce()//2 //So if we have a pure virtual function in base class ,we will have to override it in derived class
	{
		cout << "Hi I am a student" << endl;
		Person::introduce();
	}
};
int main()
{
	Student Nahid;//if we dont write //2 and try to compile the code.The code will generate error.
	//Person Dihan;//It will give error.Because we can't create an object from abstract class.
	Nahid.introduce();//Hi I am a student
	return 0;
}

