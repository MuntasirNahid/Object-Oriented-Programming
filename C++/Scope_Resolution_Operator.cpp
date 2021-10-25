#include<iostream>
using namespace std;
class Human
{
public:
	string name;
	void introduce();
	

};
//Scope Resolution Operator(::)
void Human :: introduce()
{
	cout<<"Hi "<< name<<endl;
	//or
	//cout<<"Hi "<<Human::name<<endl;
}

int main()
{
 //1st Method:
 	Human Nahid;//object will be stored in a stack ,not in a heap  
//2nd method:	
	Human *Dihan=new Human();//When we use new keyword,object will be allocated in a heap and it will be dynamic
	//It will return the address of the memory,thats why we need a pointer

//To access the properties:
	//For 1st method: Use DOT Operator
	Nahid.name="Nahid";
	Nahid.introduce();

	//For 2nd Method:USe Arrow(->) Operator
	Dihan->name="Dihan";
	Dihan->introduce();
}