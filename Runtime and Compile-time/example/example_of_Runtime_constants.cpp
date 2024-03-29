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
    Run-time Constant:
    These are the constants whose respective values can only be known or computed at the time of running of source
    code. Run time Constants are a bit slower than compile-time constants but are more flexible than compile-time
    constants. However, once it is initialized, the value of these constants can�t be changed.
*/
int main()
{
    // Input a variable
    double electonmass;
    cout<<"Enter electonmass value: ";
    cin>>electonmass;

    // Define a constant and initialize it at run-time
    const double electon_mass = electonmass;

    // Known to the compiler at the run-time
    cout<<"\nelecton_mass = "<<electon_mass<<endl;


    //output:
    //    Enter electonmass value: 2.07335e-317
    //
    //    electon_mass = 2.07335e-317
}
