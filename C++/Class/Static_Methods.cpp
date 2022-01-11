//static member function:
#include<iostream>
using namespace std;
class Human
{
public:
	static int human_count;//we cannot initialize it here.we have to initialize it outside
	Human()
	{
		human_count++;
	}
	void HumanTotal()
	{
		cout << "There are " << human_count << " people in this program" << endl;
	}
	static void humanCount()//as we used static keyword ,this method will be shared by all the objects
	{
		//we can only use static variable/members here(inside a static function).other type variable will not be allowed
		cout << "There are " << human_count << " people in this program" << endl;
	}

};

int Human::human_count = 0; //initializing it
int main()
{
	cout << Human::human_count << endl; //0 .we can access it without creating any object
	Human Nahid;
	//Nahid.HumanTotal();//There are 1 people in this program
	//cout<<Human::human_count<<endl;//1
	Human Dihan;
	Human Tosar;
	Human Naeem;
	//To call this method we need to use scope resoulation operator
	Human::humanCount();//There are 4 people in this program
	// human _count;
}
