// Task:Overloading class member access operator/array operator
// object->element
// when we overload the arrrow operator it musut return a pointer to an object of the class where we overload this aroow operator
#include <iostream>
using namespace std;
class Marks
{
    int mark;

public:
    Marks(int m)
    {

        mark = m;
    }
    void whatsYourMark()
    {
        cout << "Hei I Got " << mark << " marks" << endl;
    }
    // returnType_*operator keyword
    Marks *operator->() // as it will return a pointer
    {
        return this;
    }
};
int main()
{
    Marks NahidsMark(89);        // here after craeting an object the constructor will be called
    NahidsMark.whatsYourMark();  // Hei I Got 89 marks
    NahidsMark->whatsYourMark(); // Hei I Got 89 marks

    return 0;
}