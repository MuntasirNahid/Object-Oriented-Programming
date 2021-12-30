//Task: The Inherited virtual attributes and hierarchical nature of the virtual functinons

//When a virtual function is inherited it's virtual nature is also inherited.This means that a derived class that has inherited a virtual function is itself used as a base class for another derived class.The virtual function can still be overridden.
//In other wordsd ,no matter how many times a virtual function is inherited,it remains virtual.

#include<iostream>
using namespace std;


class Person
{
public:
	virtual void introduce(){
		cout<<"Hi from person"<<endl;
	}
	
};
class Student : public Person{
public:
void introduce(){
		cout<<"Hi from student"<<endl;
	}


};
class GStudent:public Student{//Here the virtual nature of the Base class is also inherited
	void introduce(){
		cout<<"Hi from Graduate Student" <<endl;
	}
	//2
	 //if we delete the introduce method here and then if we call p.introduce of GStudent object it will print "Hi From Student"(As it is in the base class) 
};

void whoIsThis(Person &p)
{
	p.introduce();
}
int main()
{
	Person Nahid;
	Student Dihan;
	GStudent Tosar;
	whoIsThis(Nahid);//Hi from person
	whoIsThis(Dihan);//Hi from student
	whoIsThis(Tosar);//Hi from Graduate Student

	//If we dont use virtual in Person class'es method it will give "Hi From Person" output everytime.


//2:

//Hierarchy of virtual method:


	return 0;
}

