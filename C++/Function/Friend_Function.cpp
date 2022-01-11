/*In a class ,the private and protected member of the class are only accessable to the member function of that class
So,they are not accessable to the outside function.
 To access member outside the class, we can make some friend of that class  where all te property of that class will be available

*/
#include<iostream>
#include<string>
using namespace std;

class Human {
	//if we dont specify the private or public.In default it is private.
	string name;
	int age;
public:
	Human(string iname, int iage) {
		name = iname;
		age = iage;
	}
	void tellme()
	{
		cout << name << endl << age << endl;
	}
	//we want to make a function named as display which will have the access of all the property of Human class
	//To make a friend function(global frined):
	friend void display(Human man);//this is not a member function of that class ,but it will have the acees of every member of this class
// void display(Human man)//It will give error.because name is private and we didn't use friend keyword.

//if we want to make a class as the friend of this class which will be able to access every member of this class we can make it friend
//in simple: if we want to make an entire class as a friend of another class
	//prototype:
	friend class classname;

};

void display(Human man)
{
	cout << man.name << endl << man.age << endl;
}

int main()
{
	Human Nahid("Nahid", 21);
	display(Nahid);//Nahid 21

	return 0;
}

/*
Following are some important points about friend functions and classes:
1) Friends should be used only for limited purpose. too many functions or external classes are declared as friends of a class with protected or private data, it lessens the value of encapsulation of separate classes in object-oriented programming.
2) Friendship is not mutual. If class A is a friend of B, then B doesn’t become a friend of A automatically.
3) Friendship is not inherited
4) The concept of friends is not there in Java.

*/
