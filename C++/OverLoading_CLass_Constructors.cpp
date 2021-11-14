/*
Function Overloading: Writing the function with same name but with different types or different number of parameters.
Since the constructors are also function of a class ..we can overload them just like the way we overload a function.


*/

#include<bits/stdc++.h>
using namespace std;

class Human{
private:
	int age;
	string name;
public:
	Human()
	{
		cout<<"default constructor"<<endl;
		age=0;
		name="no name";
	}
	Human(string iname)
	{
		cout<<"constructor with name as the parameter"<<endl;
		age=0;
		name=iname;
	}
	Human(int iage)
	{
		cout<<"constructor with age as the parameter"<<endl;
		age=iage;
		name="no name";
	}
	Human(string iname,int iage)
	{
		cout<<"constructor with name and  age as the parameter"<<endl;
		age=iage;
		name=iname;
	}
	void display()
	{
		cout<<name<<endl<<age<<endl;
	}
};

int main()
{
	Human Nahid;//It will  call Default Constructor..If there wass 
	Nahid.display();
 
	Human Dihan("Dihuu");
	Dihan.display();

	Human Tushar("Tushu",24);
	Tushar.display(); 

	return 0;
}