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
    // we gonna overload ++ as a class member and -- as a friend function
    // void operator++()
    // { // as it is an unary operator.it operates only one oparand.And when we define an operator function as a member of a class ,the current object will be passed implicitly.
    //     mark += 1;
    // }
    // 2
    Marks operator++()
    {
        mark += 1;
        return *this;
    }

    //  friend void operator--(Marks &);
    // 2
    friend Marks operator--(Marks &);
};

// void operator--(Marks &m)
// {
//     m.mark -= 1;
// }
// 2
Marks operator--(Marks &m)
{
    m.mark -= 1;
    return m;
}

int main()
{
    // Marks NahidMark(82);
    // NahidMark.yourMarkPlease();//Your Mark is 82
    // ++NahidMark;
    // NahidMark.yourMarkPlease();//Your Mark is 83
    // --NahidMark;
    // NahidMark.yourMarkPlease();//Your Mark is 82
    // 2
    Marks NahidMark(82);
    NahidMark.yourMarkPlease();     // Your Mark is 82
    (++NahidMark).yourMarkPlease(); // Your Mark is 83
    (--NahidMark).yourMarkPlease(); // Your Mark is 82

    return 0;
}
