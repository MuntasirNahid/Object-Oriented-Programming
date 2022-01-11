#include <iostream>
using namespace std;
class Marks
{
    int mark;

public:
    Marks()
    {
        mark = 0;
    }
    Marks(int m)
    {
        mark = m;
    }
    void yourMarkPlease()
    {
        cout << "Your Mark is " << mark << endl;
    }

    Marks operator++(int) // as it will work as a postfix form we need to specify int here..So c++ will recognize it as postfix operator
    {
        Marks duplicate(*this); // copy constructor will be called and its gonna store the value of the object passed(this)in this newly created duplicate object

        mark += 1;
        return duplicate; // it will return our passed object which is unchanged
    }
    friend Marks operator--(Marks &, int); // we need to use int for postfix form,otherwise it's a prefix form
};

// void operator--(Marks &m)
// {
//     m.mark -= 1;
// }
// 2
Marks operator--(Marks &m, int)
{
    Marks duplicate(m);
    m.mark -= 1;

    return duplicate;
}

int main()
{
    Marks Nahid(82);
    Nahid.yourMarkPlease();     // 82
    (Nahid++).yourMarkPlease(); // 82
    Nahid.yourMarkPlease();     // 83
    (Nahid--).yourMarkPlease(); // 83
    Nahid.yourMarkPlease();     // 82
    return 0;
}