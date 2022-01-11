//Main task: How to overload short habd operators such as plus equal and minus equal and how to overload the operators using the friend function
#include <iostream>
using namespace std;

class Marks
{
    int mark;

public:
    Marks()
    {
        mark = 0;
    };
    Marks(int m)
    {
        mark = m;
    };
    void YourMarkPlease()
    {
        cout << "Your Mark is " << mark << endl;
    }

    //will build the += as the member of the class and -+ as the friend function of the class

    void operator+=(int BonusMark)
    { //As it's a member function current object will be passed automatically so we dont need to mention it
        mark = mark + BonusMark;
    }

    friend void operator-=(Marks &curObj, int redMark); //when we use friend function there will not be any this pointer ,so the current function will not be passed implicitly.So we need to specify that here.
};

void operator-=(Marks &curObj, int redMark)
{
    curObj.mark -= redMark;
}
int main()
{
    Marks NahidsMark(85);
    NahidsMark.YourMarkPlease(); //Your Mark is 85

    int x = 10;
    NahidsMark += 10;
    //NahidsMark+=x;//is also valid
    //x+=nahidsMark//Not Valid
    NahidsMark.YourMarkPlease(); //Your Mark is 95
    NahidsMark -= 5;
    NahidsMark.YourMarkPlease(); //Your Mark is 90

    return 0;
}
