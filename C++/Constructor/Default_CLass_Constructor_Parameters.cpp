#include<bits/stdc++.h>
using namespace std;

class Human
{
private:
	string name;
	int age;
public:

	// Human()
	// {
	// 	cout<<"Default Constructor"<<endl;
	// 	name="noname";
	// 	age=0;
	// }
	Human(string iname="noname",int iage=0)//Default values if we dont pass proper elements
	{
		cout<<"Overloaded constructor"<<endl;
		name=iname;
		age=iage;
	}
	void display()
	{
		cout<<name<<endl<<age<<endl;
	}
	
};


int main()
{
	// Human Nahid("nahid");//If we just pass 1 parameter then oit will print nahid and 0
	Human Nahid;//It will give "noname" and 0 as default output
	// Human Nahid("nahid",21);//It will print nahid and 21;
	Nahid.display();

	return 0;
}
