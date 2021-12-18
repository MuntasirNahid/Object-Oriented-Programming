// It is possible to access a member of an object via a pointer to that object
// Creation of an object pointer does not create an object

// We can take the address of objects using the address operator (&) and store it in object pointers
// We have to use the arrow (->) operator instead of the dot (.) operator while accessing a member through an object pointer
// Pointer arithmetic using an object pointer is the same as it is for any other data type
// When incremented, it points to the next object
// When decremented, it points to the previous object

// Pointer of parent class can point to child class .
// Pointer of child class can't point to parent class .

// Using a base class pointer (pointing to a derived class object) we can access only those members of the derived object that
//were inherited from the base. This is because the base pointer has knowledge only of the base class.
//It knows nothing about the members added by the derived class

// Class definition is not required for creating an object pointer . Because creation of an object pointer does not create an object . And class definition is needed only for object creation .
// Only declaration is a pre-requirement



#include<iostream>
using namespace std;
class rectangle
{
	int height;
	int width;
public:
	void set(int a, int b)
	{
		height = a;
		width = b;
	}
	int area()
	{
		return height * width;
	}

};
int main()
{
	// rectangle obj;
	rectangle *pointer;
	// pointer=&obj;
	// pointer->set(2,6);
	// cout<<obj.area()<<endl;


	rectangle obj[3];
	obj[0].set(1, 2);
	obj[1].set(3, 4);
	obj[2].set(5, 6);

	pointer = obj; //pointer=&obj[0];
	for (int i = 0; i < 3; i++)
	{
		cout << i + 1 << "  " << (pointer + i)->area() << endl;
	}

}