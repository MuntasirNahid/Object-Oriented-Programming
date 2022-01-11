#include<iostream>
using namespace std;
class A {
private:
	int a;
public:
	A()
	{
		a = 0;
	}
	//if we want to make a class as the friend of this class which will be able to access every member of this class we can make it friend
	//in simple: if we want to make an entire class as a friend of another class
	//prototype:
	//friend class classname;
	friend class B;//friend class;
};

class B {
private :
	int b;
public:
	void showA(A& x)//(A x)will also work
	{
		cout << "A::a=" << x.a << endl;
	}
};
int main()
{
	A a;
	B b;
	b.showA(a);//A::a=0;
	return 0;
}

//A simple and complete C++ program to demonstrate friend function of another class 
#include <iostream>
using namespace std; 
class B; 
class A {
public:
    void showB(B&);
};
 
class B {
private:
    int b;
 
public:
    B() 
    { b = 0; }
    friend void A::showB(B& x); // Friend function
};
 
void A::showB(B& x)
{
    // Since showB() is friend of B, it can
    // access private members of B
    std::cout << "B::b = " << x.b;
}
 
int main()
{
    A a;
    B x;
    a.showB(x);
    return 0;
}
