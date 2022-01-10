//What is Diamond Problem?
//-->
//The diamond problem is set to arise when there is an inheritance hierarchy containing two or more base classes that inherite from a common base which results in a need of ambiguity resoulation in the absence of virtual inheritance is called diamond problem.
/*
				-----
				| A |
				-----
				/	\
			   /     \
	   	  -----		  -----
	      | B |		  | C |
	      -----		  -----
	      	   \     /
	      	    \   /
	   			-----
	   			| D |
	   			-----
*/

//here the class D is referred to the member of the class  A

//SO when we refer the member of class A in class D the compiler will not come to know from which instance(B/C)it has to access member of A.
//This Type of Problem is called Dymond Problem in Object Oriented Programming.

//usually derive class constructor also calls base class constructor
//But if we use virtual inheritance it is different

#include<iostream>
using namespace std;
class Animal {
public:
	Animal()
	{
		cout << "Animal Constructor" << endl;
	}
	int age;
	void walk()
	{
		cout << "Animal Walks" << endl;
	}
};

//if we have to use a derived class as base class of any class at that time its always good practice to use virtual inheritance
class Tiger: virtual public Animal {
public:
	Tiger()
	{
		cout << "Tiger Constructor" << endl;
	}
};

class Lion: virtual public Animal {
public:
	Lion()
	{
		cout << "Lion Constructor" << endl;
	}
};

class Liger: public Tiger, public Lion {
	//if we use virtual inheritance in this Liger class then there will be only one object of Animal Class in this Liger Class
public:
	Liger()
	{
		cout << "Liger Constructor" << endl;
	}

};
int main()
{
	Liger Tom;
	//without using virtual inheritance
	//Tom.walk();//It will show error (request for member walk is ambiguous)
	//which is diamond problem.

	//The solution of Diamond Problem is Virtual Inheritance
	Tom.walk();//Animal Walks

	return 0;
}
/*
Animal Constructor
Tiger Constructor
Lion Constructor
Liger Constructor
*/