/*
//Using Static keyword inside a function:
#include<iostream>
using namespace std;
void display();
int main()
{
	display();//Display Function called 1 times.
	display();//Display Function called 2 times.
	display();//Display Function called 3 times.
}
void display()
{
	static int cnt=0;//stores the value of cnt
	cout<<"Display Function called "<<++cnt<<" times."<<endl;
}

*/
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
	Nahid.HumanTotal();//There are 4 people in this program. Because we used static vaiable, every time we created an object Human constructor called and it incremented
	// human _count;

}