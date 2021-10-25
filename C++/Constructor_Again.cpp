#include<iostream>
#include<string>
using namespace std;

// Constructor should be used for initialization . ( Good practice )
class Animal
{
private:
    int height;
    int weight;
    // Constructor can't be declared private / protected . As objects can't access this while instantiation .
    // If we don't want to create an object of a class we can make the constructor private or protected.

public:
    //Public function member
    //Same name as Class
    //No rerturn type.(But Return statement can be used)
    //void Animal();//Invalid
    Animal()
    {
        this->height=0;
        this->weight=0;
        cout<<"created"<<endl;
        return;
    }
    //Constructor can be overloaded.Multiple constructor is possible.
    Animal(int height,int weight)
    {
        this->height=height;

        this->weight=weight;
        cout<<"created"<<endl;
    }
    /*
    Default Constructor :
    A constructor with no parameter . Class_Name();
    It is supplied by the compiler if no constructor is defined by the programmer .
    Thus we can create an object without any argument without defining any constructor .

    What this constructor do?
    Does not initialize the member variables to any default value . Contain garbage value after creation .
    As soon as a constructor is defined by the programmer , the compiler will no longer use
    this default constructor . There will be no existence of this default constructor .
    After this if we don't define a constructor with no parameter , we can't create an object with no argument .
    As compiler has forgot the default construtor .
    */

    /*
    If we just define Animal(int height, int width); without defining Animal() , then "Animal a(10,20);"is valid ,
    but "Animal a;" is invalid . For this we also need to define Animal() .
    But if we don't define any constructor (including copy constructor) , then "Animal a(10,20);" is invalid , but "Animal a;" is valid .
    */


};


class Dog:public Animal
{
private:
    string name;
public:

    // Constructor of base class can be called like this ,  to avoid extra code .
    Dog(string name,int height,int weight):Animal(height,weight)
    {
        this->name=name;
    }
    Dog():Animal()
    {
        this->name="";
    }

};

int main()
{

    // Constructor is automatically called when a object is created ( Not a pointer ).
    Animal a;//Constructor is automatically called
    Animal* b;//Constructor not called

    // Constructor is also called when we use dynamic memory allocation . (Valid for new , Not for malloc )
    b=new Animal;//Constructor is called.

    // We don't need to use () for declaring object without any argument . If we use , then no object will be created .
    Animal c();
    // No object is created here . Because compiler thinks it as a function declaration with name c and return type Animal.

    Animal d=Animal();//But this will work;
    b=new Animal();//Object is Created;

}

// Output:
// created
// created
// created
// created










/*

#include<iostream>
#include<string>
using namespace std;


class Animal
{



public:
    int height;
    int weight;

    Animal()
    {
        this->height=0;
        this->weight=0;
        cout<<"created"<<endl;
        return;
    }
   
    Animal(int height,int weight)
    {
        this->height=height;

        this->weight=weight;
        cout<<"created Animal"<<endl;
    }
 

// };


// class Dog:public Animal
// {

// public:
//  string name;
//     
//     Dog(string name,int height,int weight):Animal(height,weight)
//     {
//         this->name=name;
//     }
//     Dog():Animal()
//     {
//         this->name="";
//     }
//     void print()
//     {

//         cout<<name<<" "<<height<<" "<<weight<<endl;
//     }

// };

// int main()
// {

//     // Constructor is automatically called when a object is created ( Not a pointer ).
//     Animal a;//Constructor is automatically called
//     Animal* b;//Constructor not called

//     // Constructor is also called when we use dynamic memory allocation . (Valid for new , Not for malloc )
//     b=new Animal;//Constructor is called.

//     // We don't need to use () for declaring object without any argument . If we use , then no object will be created .
//     Animal c();
//     // No object is created here . Because compiler thinks it as a function declaration with name c and return type Animal.

//     Animal d=Animal();//But this will work;
//     b=new Animal();//Object is Created;

//     Dog tom("jack",6,4);
//     tom.print();

// }


// */

// OUTPUT:
// created
// created
// created
// created
// created Animal
// jack 6 4