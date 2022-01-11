// function calling symbol: ()

// void operator()(int x,int y);
// obj(2,3);//here () will call the operator and 2 will be stored in x and 3 will be stored in y
// we are no creating a new way to call a function rather we are creating an operator function .
#include <iostream>
using namespace std;
class Marks
{
    int mark;

public:
    Marks(int m)
    {
        cout << "Constructor is called" << endl;
        mark = m;
    }
    void whatsYourMark()
    {
        cout << "Hei I Got " << mark << " marks" << endl;
    }
    // returnType_operator keyword
    Marks operator()(int mk)
    {
        mark = mk;
        cout << "Operator Function is called" << endl;
        return *this; // as this will be refering to the current object
    }
};
int main()
{
    Marks NahidsMark(89); // here after craeting an object the constructor will be called
    NahidsMark.whatsYourMark();

    // Constructor is called
    // Hei I Got 89 marks
    NahidsMark(95);             // Here the operator function will be called
    NahidsMark.whatsYourMark(); // Operator Function is called
    // Hei I Got 95 marks
    return 0;
}