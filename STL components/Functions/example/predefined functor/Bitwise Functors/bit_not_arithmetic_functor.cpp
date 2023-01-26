#include<iostream>
#include<functional>
using namespace std;
/*
    to know more: https://www.geeksforgeeks.org/functors-in-cpp/
                  https://www.programiz.com/cpp-programming/functors
                  https://www.go4expert.com/articles/cpp-stl-functors-t34696/
                  https://www.technical-recipes.com/2011/using-function-objects-functors-c/
                  https://www.quantstart.com/articles/Function-Objects-Functors-in-C-Part-1/
                  https://learn.microsoft.com/en-us/cpp/standard-library/function-objects-in-the-stl?view=msvc-170
*/
/*
    remember: “bitwise not or ~” is for integers.
    change the binary value 0 to 1 and 1 to 0.
*/
int main()
{
    int x = 4, y = 3;
    bit_not<int> bxr1; // Adds two int objects
    bit_not<> bxr2;// default type is void, so template specialization used
    bit_not<void> bxr3; // template specialization used

    cout<<bxr1(x)<<endl;
    cout<<bxr2(y+1)<<endl;
    cout<<bxr3(y)<<endl; // same as bit_not<void> ()(x, y)

    cout<<bit_not<int>()(15)<<endl; // Explicit type as the template argument
    cout<<bit_not<void>()(3)<<endl; // template specialization used, type is auto deduced from the arguments
    cout<<bit_not<>()(0x11)<<endl;
    cout<<bit_not<>()(0x13)<<endl;
    cout<<bit_not<>()('h')<<endl;

    //output:
    //    -5
    //    -5
    //    -4
    //    -16
    //    -4
    //    -18
    //    -20
    //    -105
}


