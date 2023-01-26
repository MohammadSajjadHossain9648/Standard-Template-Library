#include<iostream>
#include<functional>
using namespace std;
/*
    to know mxore: https://www.geeksforgeeks.org/functors-in-cpp/
                  https://www.programiz.com/cpp-programming/functors
                  https://www.go4expert.com/articles/cpp-stl-functors-t34696/
                  https://www.technical-recipes.com/2011/using-function-objects-functors-c/
                  https://www.quantstart.com/articles/Function-Objects-Functors-in-C-Part-1/
                  https://learn.microsoft.com/en-us/cpp/standard-library/function-objects-in-the-stl?view=msvc-170
*/
int main()
{
    int x = 4, y = 3;
    bit_xor<int> bxr1; // Adds two int objects
    bit_xor<> bxr2;// default type is void, so template specialization used
    bit_xor<void> bxr3; // template specialization used

    cout<<bxr1(x, y)<<endl;
    cout<<bxr2(x+1, y+2)<<endl;
    cout<<bxr3(x, y)<<endl; // same as bit_xor<void> ()(x, y)

    cout<<bit_xor<int>()(15,10)<<endl; // Explicit type as the template argument
    cout<<bit_xor<void>()(3, 4)<<endl; // template specialization used, type is auto deduced from the arguments
    cout<<bit_xor<>()(0x11, 0x23)<<endl;
    cout<<bit_xor<>()(0x13, 0x23)<<endl;
    cout<<bit_xor<>()('h','a')<<endl;

    //output:
    //    7
    //    0
    //    7
    //    5
    //    7
    //    50
    //    48
    //    9
}


