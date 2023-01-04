#include<iostream>
using namespace std;
/*
    to know more: https://www.geeksforgeeks.org/runtime-and-compile-time-constants-in-c/
                  https://www.javatpoint.com/compile-time-vs-runtime
                  https://nus-cs1010.github.io/2223-s1/14-array.html
                  https://www.learncpp.com/cpp-tutorial/compile-time-constants-constant-expressions-and-constexpr/
                  https://www.learncpp.com/cpp-tutorial/arrays-part-i/
                  https://www.techrepublic.com/article/from-compile-time-constants-to-runtime-constants-and-back/
                  https://www.geeksforgeeks.org/memory-layout-of-c-program/
*/
/*
    Compile-time Constant:
    These are the constants whose respective value is known or computed at the time of compilation of source code.
    Compile-time constants are faster than run-time constants but are less flexible than run-time constants.
*/
int main()
{
    // Declare and initialize compile time constant
    const double electron_q = 1.6e-19;

    // Value known to compiler at compile-time
    cout<<"electron_q = "<<electron_q;


    //output: electron_q = 1.6e-19
}
