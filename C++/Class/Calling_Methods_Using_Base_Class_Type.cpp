#include <iostream>
using namespace std;
class Person
{
public:
    void introduce()
    {
        cout << "Hey From Person" << endl;
    }
};
class Student : public Person
{
public:
    void introduce()
    {
        cout << "Hey From Student" << endl;
    }
};
void whosThis(Person P) //*p(2))
{
    P.introduce();
    /// 2 P->introduce();
}

int main()
{
    Student Nahid;
    Nahid.introduce(); // Hey From Student
    whosThis(Nahid);   // Hey From Person
    // 2whosThis(&Nahid);
    return 0;
}
