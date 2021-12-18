1.----------------------------------------------- Single Inheritance: ----------------------------------------------------------
//In single inheritance, a class is allowed to inherit from only one class. i.e. one sub class is inherited by one base class only.
//Syntax: 

class subclass_name : access_mode base_class
{
  //body of subclass
};
// C++ program to explain
// Single inheritance
#include <iostream>
using namespace std;

// base class
class Vehicle {
public:
	Vehicle()
	{
	cout << "This is a Vehicle" << endl;
	}
};

// sub class derived from a single base classes
class Car: public Vehicle{

};

// main function
int main()
{
	// creating object of sub class will
	// invoke the constructor of base classes
	Car obj;
	return 0;
}

// Output
// This is a Vehicle

//----------------------------------------------------------------------------------------------------------------------------------


2.---------------------------------------------------------------- Multiple Inheritance:--------------------------------------------
// Multiple Inheritance is a feature of C++ where a class can inherit from more than one classes. i.e one sub class is inherited from more than one base classes.


Syntax:
class subclass_name : access_mode base_class1, access_mode base_class2, ....
{
  //body of subclass
};


// C++ program to explain
// multiple inheritance
#include <iostream>
using namespace std;
 
// first base class
class Vehicle {
  public:
    Vehicle()
    {
      cout << "This is a Vehicle" << endl;
    }
};
 
// second base class
class FourWheeler {
  public:
    FourWheeler()
    {
      cout << "This is a 4 wheeler Vehicle" << endl;
    }
};
 
// sub class derived from two base classes
class Car: public Vehicle, public FourWheeler {
 
};
 
// main function
int main()
{  
    // creating object of sub class will
    // invoke the constructor of base classes
    Car obj;
    return 0;
}
Output
This is a Vehicle
This is a 4 wheeler Vehicle



3.--------------------------------------------------- Multilevel Inheritance: ----------------------------------------------------
//In this type of inheritance, a derived class is created from another derived class.


// C++ program to implement
// Multilevel Inheritance
#include <iostream>
using namespace std;
 
// base class
class Vehicle
{
  public:
    Vehicle()
    {
      cout << "This is a Vehicle" << endl;
    }
};
 
// first sub_class derived from class vehicle
class fourWheeler: public Vehicle
{  public:
    fourWheeler()
    {
      cout<<"Objects with 4 wheels are vehicles"<<endl;
    }
};
// sub class derived from the derived base class fourWheeler
class Car: public fourWheeler{
   public:
     Car()
     {
       cout<<"Car has 4 Wheels"<<endl;
     }
};
 
// main function
int main()
{  
    //creating object of sub class will
    //invoke the constructor of base classes
    Car obj;
    return 0;
}
Output
This is a Vehicle
Objects with 4 wheels are vehicles
Car has 4 Wheels



 ---------------------------------------------------------Hierarchical Inheritance:-----------------------------------------------
 // In this type of inheritance, more than one sub class is inherited from a single base class. i.e. more than one derived class is created from a single base class.


// C++ program to implement
// Hierarchical Inheritance
#include <iostream>
using namespace std;
 
// base class
class Vehicle
{
  public:
    Vehicle()
    {
      cout << "This is a Vehicle" << endl;
    }
};
 
 
// first sub class
class Car: public Vehicle
{
 
};
 
// second sub class
class Bus: public Vehicle
{
     
};
 
// main function
int main()
{  
    // creating object of sub class will
    // invoke the constructor of base class
    Car obj1;
    Bus obj2;
    return 0;
}
Output
This is a Vehicle
This is a Vehicle


5.---------------------------------------Hybrid (Virtual) Inheritance: -----------------------------------------------------------
//Hybrid Inheritance is implemented by combining more than one type of inheritance. For example: Combining Hierarchical inheritance and Multiple Inheritance. 



// C++ program for Hybrid Inheritance
 
#include <iostream>
using namespace std;
 
// base class
class Vehicle
{
  public:
    Vehicle()
    {
      cout << "This is a Vehicle" << endl;
    }
};
 
//base class
class Fare
{
    public:
    Fare()
    {
        cout<<"Fare of Vehicle\n";
    }
};
 
// first sub class
class Car: public Vehicle
{
 
};
 
// second sub class
class Bus: public Vehicle, public Fare
{
     
};
 
// main function
int main()
{  
    // creating object of sub class will
    // invoke the constructor of base class
    Bus obj2;
    return 0;
}
Output
This is a Vehicle
Fare of Vehicle


6.------------------------------------- A special case of hybrid inheritance : Multipath inheritance:------------------------------

//A derived class with two base classes and these two base classes have one common base class is called multipath inheritance. An ambiguity can arrise in this type of inheritance. 

// C++ program demonstrating ambiguity in Multipath
// Inheritance
 
#include <conio.h>
#include <iostream.h>
class ClassA {
public:
    int a;
};
 
class ClassB : public ClassA {
public:
    int b;
};
class ClassC : public ClassA {
public:
    int c;
};
 
class ClassD : public ClassB, public ClassC {
public:
    int d;
};
 
void main()
{
 
    ClassD obj;
 
    // obj.a = 10;                   //Statement 1, Error
    // obj.a = 100;                 //Statement 2, Error
 
    obj.ClassB::a = 10; // Statement 3
    obj.ClassC::a = 100; // Statement 4
 
    obj.b = 20;
    obj.c = 30;
    obj.d = 40;
 
    cout << "\n A from ClassB  : " << obj.ClassB::a;
    cout << "\n A from ClassC  : " << obj.ClassC::a;
 
    cout << "\n B : " << obj.b;
    cout << "\n C : " << obj.c;
    cout << "\n D : " << obj.d;
}
Output: 

A from ClassB  : 10
A from ClassC  : 100
B : 20
C : 30
D : 40
In the above example, both ClassB & ClassC inherit ClassA, they both have single copy of ClassA. However ClassD inherit both ClassB & ClassC, therefore ClassD have two copies of ClassA, one from ClassB and another from ClassC. 
If we need to access the data member a of ClassA through the object of ClassD, we must specify the path from which a will be accessed, whether it is from ClassB or ClassC, bco’z compiler can’t differentiate between two copies of ClassA in ClassD.


-------------------------------------There are 2 ways to avoid this ambiguity: ------------------------------------------------------

Avoiding ambiguity using scope resolution operator: 
---------------------------------------------------
Using scope resolution operator we can manually specify the path from which data member a will be accessed, as shown in statement 3 and 4, in the above example. 


obj.ClassB::a = 10;        //Statement 3
obj.ClassC::a = 100;      //Statement 4
Note : Still, there are two copies of ClassA in ClassD.

Avoiding ambiguity using virtual base class: 
--------------------------------------------

#include<iostream.h>
     #include<conio.h>
 
     class ClassA
     {
            public:
            int a;
     };
 
     class ClassB : virtual public ClassA
     {
            public:
            int b;
     };
     class ClassC : virtual public ClassA
     {
            public:
            int c;
     };
 
     class ClassD : public ClassB, public ClassC
     {
            public:
            int d;
     };
 
     void main()
     {
 
            ClassD obj;
 
            obj.a = 10;        //Statement 3
            obj.a = 100;      //Statement 4
 
            obj.b = 20;
            obj.c = 30;
            obj.d = 40;
 
            cout<< "\n A : "<< obj.a;
            cout<< "\n B : "<< obj.b;
            cout<< "\n C : "<< obj.c;
            cout<< "\n D : "<< obj.d;
 
     }
Output: 

A : 100
B : 20
C : 30
D : 40
According to the above example, ClassD has only one copy of ClassA, therefore, statement 4 will overwrite the value of a, given at statement 3.
