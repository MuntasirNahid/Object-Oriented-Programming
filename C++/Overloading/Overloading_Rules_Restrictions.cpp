// 1:First thing is uou cannot alter the precedence of an operator
// 2: You cannot change the number of operator that an operator takes
// 3:Except for the function call operator(),any of the operator can have default parameters
// 4: we cannot overload some operators in c++.For example : ? :: .* . these operator
// 5: except for the equal operator(+),the operator function is inherited by any derived class
// You can do anything inside the operator functions but make sure that when you write the operator functions or when you overload the operators ,the meaning od the operator will not be changed
#include <iostream>
using namespace std;
class Marks
{
    int mark;

public:
    Mark()
    {
        mark = 0;
    }
};
int main()
{
    return 0;
}
