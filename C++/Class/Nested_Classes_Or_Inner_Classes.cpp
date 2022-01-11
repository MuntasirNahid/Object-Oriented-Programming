//A nested class is nothing but a class inside a class
//Or Defining a class inside the defination of another class
#include<iostream>
#include<string>
using namespace std;
class Person {
public:
	string name;
	class Address {//whatever we define in this class,available in this class only
	//Address class is only available inside this Person Class .Or this address class is only accessible through this Person Class only
	public:
		string country;
		string street_name;
		int house_no;
	};
	Address addr;
	void AddressPlease(){
		cout<<name<<endl<<addr.country<<endl<<addr.street_name<<endl<<addr.house_no<<endl;
	}

};
int main()
{
  //Address Ad;//It will show error.//Address was not declared in this scope
	Person :: Address Ad;//It won't show any error
	Person Nahid;
	Nahid.name="Nahid";
	Nahid.addr.country="Bangladesh";
	Nahid.addr.street_name="Dhaka";
	Nahid.addr.house_no=11;
	Nahid.AddressPlease();
	/*
Nahid
Bangladesh
Dhaka
11
	*/
	return 0;
}
