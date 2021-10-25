/*
A member function of a class is a function that has its definition or its prototype within the class definition like any other variable.
It operates on any object of the class of which it is a member, and has access to all the members of a class for that object.

*/

#include<bits/stdc++.h>
using namespace std;

class rectangle 
{
public:
	int height;
	int width;
	int area()
	{
		return height*width;
	}
};

int main()
{
	rectangle obj;
	obj.height=5;
	obj.width=6;
	cout<<"Area = "<<obj.area()<<endl;

}

//or:
//declaring function's prototype in class and defining it outside the class

class rectangle
{
public:
	int height;
	int width;
	int area();
};
int rectangle::area()
{
	return height*width;
}
int main()
{
	rectangle obj;
	obj.height=5;
	obj.width=6;
	cout<<"Area = "<<obj.area()<<endl;

}


