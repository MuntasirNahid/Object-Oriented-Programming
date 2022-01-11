#include<iostream>
using namespace std;
class rectangle
{
	int height;
	int width;
public:
	void set(int a,int b);
	int area();

};
inline int rectangle::area()
{
	return height*width;
}
void rectangle::set(int a,int b)
{
	height=a;
	width=b;
}
int main()
{
	rectangle obj1;
	obj1.set(3,4);
	rectangle obj2;
	obj2.set(5,6);
	cout<<"Area = "<<obj1.area()<<endl;//12
	cout<<"Area = "<<obj2.area()<<endl;//30
	obj2=obj1;//assigning obj1 to obj2..which means obj2 have every property of object 1.overwritten
	cout<<"Area = "<<obj1.area()<<endl;//12
	cout<<"Area = "<<obj2.area()<<endl;//12
}
