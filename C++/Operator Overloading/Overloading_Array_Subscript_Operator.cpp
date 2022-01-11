// Task:How to overeload some special operator: [],(),->
// to overload them they must me non static member function and also they cannot be friend
#include <iostream>
using namespace std;
class Marks
{
    int subjects[3];

public:
    Marks(int sub1, int sub2, int sub3)
    {
        subjects[0] = sub1;
        subjects[1] = sub2;
        subjects[2] = sub3;
    }
    int operator[](int position)
    {
        return subjects[position];
    }
};

int main()
{
    Marks Nahid(27, 40, 35);
    cout << Nahid[0] << endl; // 27
    cout << Nahid[1] << endl; // 40
    cout << Nahid[2] << endl; // 35
    return 0;
}
