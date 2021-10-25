//To Reduce Function Searching Time we use inline function's concept
//Barbar kono function call korley oita run hoitey valoi time lage(value ek jayga theke arek jaygay jump kora.value return kora bla bla).jodio same kaj tai kortese..
//But if we use keyword inline compiler runtime er moddhei time cost komaye function er vitorer kaj ta function call er moddhei store kore rakhe..
//thats why timecost onek kome jay..
//Mane Compile Time er moddhei function call takey function code diye replace kore dey inline keyword..That means "ami attched achi tomar sathey"

//tahole shob function ke inline function kore dei?
//-No.eita korley tow function likhar main purpose tai moira jabey.Jeshob function er code choto oishob function ke inline function banano jay.

//Boro Code wala function ke inline banale ki prob?
//-eita korle Cache memory onek bere jabey..ar oi function bar bar call korley code er memory onek baira jabey..ar beparta "Tude Catni,bekar khatni" hoye jabey.kajer ceye okaj beshi hobey


//Where using inline function is not recommended?
//-In case of Recursion
//-Function er moddhe Static variable use er shomoy
//-Switch statment thakle or loop thakley..These things makes things more confusing



// Functions that are not actually called but, rather, are expanded in line, at the point of each call
// Faster than function

/*
When the program executes the function call instruction the CPU stores the memory address of the instruction following the function call, 
copies the arguments of the function on the stack and finally transfers control to the specified function.
The CPU then executes the function code, stores the function return value in a predefined memory location/register and returns control 
to the calling function. This can become overhead if the execution time of function is 
less than the switching time from the caller function to called function (callee).

*/

/*
C++ provides an inline functions to reduce the function call overhead. 
Inline function is a function that is expanded in line when it is called.
 When the inline function is called whole code of the inline function gets inserted or substituted at the point of inline function call.
 This substitution is performed by the C++ compiler at compile time.
 Inline function may increase efficiency if it is small.

*/

/*
Remember, inlining is only a request to the compiler, not a command. Compiler can ignore the request for inlining. Compiler may not perform inlining in such 
circumstances like:
1) If a function contains a loop. (for, while, do-while)
2) If a function contains static variables.
3) If a function is recursive.
4) If a function return type is other than void, and the return statement doesn’t exist in function body.
5) If a function contains switch or goto statement.

*/


//--------------------------------------Advantages--------------------------------------------------------//
/*
1) Function call overhead doesn’t occur.
2) It also saves the overhead of push/pop variables on the stack when function is called.
3) It also saves overhead of a return call from a function.
4) When you inline a function, you may enable compiler to perform context specific optimization on the body of function.
Such optimizations are not possible for normal function calls. Other optimizations can be obtained by considering the flows of calling context and the called context.
5) Inline function may be useful (if it is small) for embedded systems because inline can yield less code than the function call preamble and return.
*/
//-------------------------------Disadvantages------------------------------------------------------------//
/*
1) The added variables from the inlined function consumes additional registers, 
After in-lining function if variables number which are going to use register increases than they may create overhead on register variable resource
utilization. 
This means that when inline function body is substituted at the point of function call, total number of variables used by the function also gets inserted.
 So the number of register going to be used for the variables will also get increased. 
 So if after function inlining variable numbers increase drastically then it would surely cause an overhead on register utilization.

2) If you use too many inline functions then the size of the binary executable file will be large, because of the duplication of same code.

3) Too much inlining can also reduce your instruction cache hit rate, thus reducing the speed of instruction fetch from that of cache memory to that of
 primary memory.

4) Inline function may increase compile time overhead if someone changes the code inside the inline function then all the calling location has to be
 recompiled because compiler would require to replace all the code once again to reflect the changes, otherwise it will continue with old functionality.

5) Inline functions may not be useful for many embedded systems. Because in embedded systems code size is more important than speed.

6) Inline functions might cause thrashing because inlining might increase size of the binary executable file. Thrashing in memory causes performance of
 computer to degrade.


*/

/*
If we call our function 10 times, compiler will place that code 10 times in our executable. So the size of our execcutable will increase.
*/
#include <iostream>
using namespace std;

// All the functions defined inside the class are implicitly inline.  // Automatic In-lining
class INLINE {
public:
	/* inline */ void Print()		// Inline function  // inline keyword at the starting is optional
	{
		cout << "Hello World" << endl;
	}

	// If you need to explicitly declare inline function in the class then just declare the function inside the class and define it outside the class using inline keyword.

	void SayHello();
};

inline void INLINE::SayHello()	// inline keyword at the starting is mandatory // If we don't use inline it will be a regular function
{
	cout << "Hello World" << endl;
}


// More like parameterized macros , but Safer than parameterized macros .
#define unsafe(i)  ( (i) >= 0 ? (i) : -(i) )
int safe(int i)
{
	return i >= 0 ? i : -i;
}


inline int F(int a, int b)
{
	return a + b;
}

int main()
{
	cout << F(5, 10) << endl;

	int ans, x = 5;
	ans = unsafe(x++);   // Error! x is incremented twice
	ans = unsafe(F(5, 10));  // Danger! f() is called twice
	ans = safe(x++);     // Correct! x is incremented once
	ans = safe(F(5, 10));    // Correct! f() is called once

}
