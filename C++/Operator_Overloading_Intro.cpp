//+ operator

//can we do the addition,multiplication,subtraction thing with the custom object we create in our program?
//The answer is "NO".as they are not defined to work with our customly defined object

//Operator overloading is nothing but making the basic operators available in c++ to work with our custom built objects

//After overloading the appropriate operators we can use the objects and expressions in just the same way we use in c++ builtin data types.

//An operator functions defines the operations that the overloaded operator will perform relative to the classes upon which it will work
//And the operator function can be either member or non member of a class
//If it is a non member than most commonly its a friend function  of the class.
//An operator function is created using the keyword "operator".

#include <iostream>
using namespace std;
class Marks
{
    int intmark;
    int extmark;

public:
    Marks()
    {
        intmark = 0;
        extmark = 0;
    }

    Marks(int im, int em)
    {
        intmark = im;
        extmark = em;
    }
    void display()
    {
        cout << intmark << endl
             << extmark << endl;
    }
    //return type(object of this class Marks) _operator _which parameter we want to overload_
    Marks operator+(Marks m)
    {
        Marks temp;
        temp.intmark = intmark + m.intmark; //mark of the current object+mark of the passed object
        temp.extmark = extmark + m.extmark;
        return temp; //it will be stored in m3;
    }
};

int main()
{
    Marks m1(10, 20), m2(30, 40);
    Marks m3 = m1 + m2; //here m1 and m2 will be passed automatically as the current object

    m3.display();
    return 0;
}
