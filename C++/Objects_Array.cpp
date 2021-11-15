#include<iostream>
using namespace std;
class rectangle
{
	int height;
	int width;
public:
	// void set(int a, int b)
	// {
	// 	height = a;
	// 	width = b;
	// }

	// rectangle(int a)//constructor with one parameter;
	// {
	// 	height=a;
	// 	width=a;
	// }

	rectangle(int a,int b)//constructor with two  parameter;
	{
		height=a;
		width=b;
	}

	int area()
	{
		return height * width;
	}

};
int main()
{
	// rectangle obj[3];
	// obj[0].set(1, 2);
	// obj[1].set(3, 4);
	// obj[2].set(5, 6);

	//For Constructor with one parameter:
	// rectangle obj[3]={1,2,3};//Declare and define at a time ..otherwise it will give an error


	//For Constructor with two parameter:
	rectangle obj[3] = {rectangle(1,2),rectangle(3,4),rectangle(5,6)};

	for (int i = 0; i < 3; i++)
		cout << i + 1 << "  Object  Area = " << obj[i].area() << endl;

}