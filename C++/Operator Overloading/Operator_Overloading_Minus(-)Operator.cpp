//define operator function outside the class by using the scope resoulation operator

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
    //IF the operator function is inside the class we need to pass one parameter.But if it's a friend fucntion then we need to pass two parameters.

    //return type(object of this class Marks) _operator _which parameter we want to overload_
    Marks operator+(Marks m)
    {
        Marks temp;
        //m1 will call the operator fucntion here.so m1 will be the current object here
        temp.intmark = intmark + m.intmark; //mark of the current object+mark of the passed object
        temp.extmark = extmark + m.extmark;
        return temp; //it will be stored in m3;
    }
    Marks operator-(Marks m);
};
//return type _class name ::
Marks Marks ::operator-(Marks m) //we are passing only one parameter and our operator is working on two operands
{
    Marks temp;
    temp.intmark = intmark - m.intmark; //mark of the current object-mark of the passed object
    temp.extmark = extmark - m.extmark;
    return temp; //it will be stored in m3;
}
int main()
{
    Marks m1(10, 20), m2(30, 40);
    Marks m3 = m1 + m2; //here m1 and m2 will be passed automatically as the current object
    Marks m4 = m2 - m1;
    m3.display(); //40 60
    m4.display(); //20 20
    return 0;
}
