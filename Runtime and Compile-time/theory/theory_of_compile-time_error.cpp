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
    Compile-time errors:
    Compile-time errors are the errors that occurred when we write the wrong syntax. If we write the wrong syntax
    or semantics of any programming language, then the compile-time errors will be thrown by the compiler. The
    compiler will not allow to run the program until all the errors are removed from the program. When all the
    errors are removed from the program, then the compiler will generate the executable file.


    The compile-time errors can be:
    1.Syntax errors
    2.Semantic errors




    Syntax errors:
    When the programmer does not follow the syntax of any programming language, then the compiler will throw the
    syntax error.

    For example,
        int a, b:

    The above declaration generates the compile-time error as in C++, every statement ends with the semicolon,
    but we put a colon (:) at the end of the statement.



    Semantic errors:
    The semantic errors exist when the statements are not meaningful to the compiler.

    For example,
        a+b=c;

    The above statement throws a compile-time errors. In the above statement, we are assigning the value of 'c'
    to the summation of 'a' and 'b' which is not possible in C programming language as it can contain only one
    variable on the left of the assignment operator while right of the assignment operator can contain more than
    one variable.

    The above statement can be re-written as:
        c=a+b;
*/
int main()
{
}
