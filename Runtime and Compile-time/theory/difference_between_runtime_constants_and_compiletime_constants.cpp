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
int main()
{
    /* Compile-time
    1. time period for translation of a source code like c++ to intermediate code like .cpp
    2. this is to check the syntax and semantics of the code.
    3. errors get detected by compiler without execution of the program.
    4. fixing an error at this stage is possible.

    Runtime
    1. time period between start and end of running intermediate code at runtime environment.
    2. this is to run the code.
    3. only can detect after execution of the program.
    4. fixing an error requires going back to code.
    */


    /* Compile-time constants
    1. A compile-time constant is a value that is computed at the compilation-time.
    2. A compile-time constant will have the same value each time when the source code is run.
    3. It is generally used while declaring an array size.
    4. If you use const int size = 5 for defining a case expression it would run smoothly
    and won’t produce any compile-time error.
    5. It does not produces any compile time error when used for initializing an enumerator.

    Runtime constants
    1. Whereas, A runtime constant is a value that is computed only at the time when the program is running.
    2. A runtime constant can have a different value each time the source code is run.
    3. It is not preferred for declaring an array size.
    4. Here, if you use run-time constant in your source code for defining case expression then it will yield
    a compile-time error.
    5. Same compilation error, if runtime constant is used for initializing an enumerator.
    */
}
