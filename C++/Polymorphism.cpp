//Polymorphism means having many forms
//Typically polymorphism occurs when there is hierarchy of classes and they are related by inheritaance.
//So c++ polymorphism means that a call to a member function will cause a different function to be executed depending on the type of object that invokes the function



//Virtual functions are nothing but a function in base class that is declared using the keyword virtual.
//Defining in a base class a virtual function with another version in a derived class signals to the compiler that we dont want static linkage for this function 
//or when we pass an object of the derived class I dont want you to call the method in the base class if that method is overridden the derived class.
#include<iostream>
using namespace std;
class Person
{
public:
	// void introduce() {
	// 	cout << "Hei From Person" << endl;
	// }
	virtual void introduce() {
		cout << "Hei From Person" << endl;
	}

};
class Student: public Person {
public:
	void introduce() {
		cout << "Hei From Student" << endl;
	}
};

class Farmer: public Person {
	// void introduce() {
	// 	cout << "Hei From Farmer" << endl;
	// }


};

void whosThis(Person &p) //That's because in this function we are referring to that object past using a type of the base class.That's why the method of the base class is called.
{
	p.introduce();
}



int main()
{
	Farmer Nahid;
	Student Dihan;
	//whosThis(Nahid);//Hei From Person
	//whosThis(Dihan);//Hei From Person
	//But we want to use the method of class farmer and student respectively..
	//For this we can use virtual function

	whosThis(Nahid);//Hei From Farmer
	whosThis(Dihan);//Hei From Student

//	If the Farmer class has not overridden the introduce method :In this time the whosThis function will call the base class method.
	whosThis(Nahid);//Hei From Person(Because it didnt overridden the base class method)
	whosThis(Dihan);//Hei From Student(because it has overridden the base class method)
 
	return 0;
}

//here depending the object passed to whosThis function it calls different methods
//This whoseThis Function is perfect ecample of polymorphism in c++
