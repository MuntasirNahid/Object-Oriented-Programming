#include<bits/stdc++.h>
using namespace std;

class Human
{
private:
	string *name;
	int *age;
public:

	Human(string iname,int iage)//Default values if we dont pass proper elements
	{
		//Dynamically allocating memory
		name=new string;
		age=new int;
		*name=iname;
		*age=iage;
	}
	void display()
	{
		cout<<"Hi I am "<<*name<<" and I am "<<*age<<" year's old"<<endl;
	}
	~Human()
	{
		delete name;
		delete age;
		cout<<"All memories are released"<<endl;
	}
};

int main()
{
	Human *Nahid=new Human("Nahid",21);
	Nahid->display();
	delete Nahid;
	return 0;
}