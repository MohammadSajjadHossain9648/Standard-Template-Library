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
                  https://www.baeldung.com/cs/runtime-vs-compile-time
*/
/*
    Compile-time Constant:
    These are the constants whose respective value is known or computed at the time of compilation of source code.
    Compile-time constants are faster than run-time constants but are less flexible than run-time constants.

    A Compile-time constant is a constant whose value is known at compile-time. Literals (e.g. ‘1’, ‘2.3’, and
    “Hello, world!”) are one type of compile-time constant.

    like an example:
    const int x = 3;  // x is a compile-time const
*/
/*
    Run-time Constant:
    These are the constants whose respective values can only be known or computed at the time of running of source
    code. Run time Constants are a bit slower than compile-time constants but are more flexible than compile-time
    constants. However, once it is initialized, the value of these constants can’t be changed.

    when we input in console, that is runtime constant.

    like an example:
        cout<<"Enter a number: ";
        int y;
        cin>>y;
*/
int getNumber()
{
    cout<<"Enter a number: ";
    int y;
    cin>>y;

    return y;
}

int main()
{
    const int x = 3;           // x is a compile time constant

    const int y = getNumber(); // y is a runtime constant

    const int z = x + y;       // x + y is a runtime expression

    cout<<z<<'\n';             // this is also a runtime expression

    return 0;
}
