// //How to call a base class constructor in a derived class constructor
// //how to pass the value to a base class constructor in a derived class constructor

// #include<iostream>
// #include<string>
// using namespace std;

// class Father
// {
// protected:
// 	int height;
// public:
// 	Father(int h) {
// 		cout << "Constructor of Father is called" << endl;
// 		height = h;
// 	}
// };

// class Child : Father {
// public:

// 	Child(int x) : Father(x) { //It will pass the value of x to the base class constructor
// 		cout << "Child class constructor" << endl;
// 	}
// 	void display() {
// 		cout << "height is " << height << endl;
// 	}
// };
// int main()
// {
// 	Child Nahid(21);
// 	Nahid.display();
// 	return 0;
// }


//What if we have multiple inheritance:

#include<iostream>
#include<string>
using namespace std;

class Father
{
protected:
	int height;
public:
	Father() {
		cout << "Constructor of Father is called" << endl;
		
	}
};

class Mother
{
protected:
	string skinColor;
public:
	Mother() {
		cout << "Constructor of Mother is called" << endl;
		
	}
};


class Child : public Father,public Mother {
public:

	Child(int x,string color) : Father(),Mother()  {
		height=x;
		skinColor=color;

		cout << "Child class constructor" << endl;
	}
	void display() {
		cout << "height is " << height << " and skin color is "<<skinColor<<endl;
	}
};
int main()
{
	Child Nahid(21,"Brown");
	Nahid.display();
	return 0;
}