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
int main()
{
    int x = 4, y = 3;
    bit_or<int> bo1; // Adds two int objects
    bit_or<> bo2;// default type is void, so template specialization used
    bit_or<void> bo3; // template specialization used

    cout<<bo1(x, y)<<endl;
    cout<<bo2(x+1, y+2)<<endl;
    cout<<bo3(x, y)<<endl; // same as bit_or<void> ()(x, y)

    cout<<bit_or<int>()(15,10)<<endl; // Explicit type as the template argument
    cout<<bit_or<void>()(3, 4)<<endl; // template specialization used, type is auto deduced from the arguments
    cout<<bit_or<>()(0x11, 0x23)<<endl;
    cout<<bit_or<>()(0x13, 0x23)<<endl;
    cout<<bit_or<>()('h','a')<<endl;

    //output:
    //    7
    //    5
    //    7
    //    15
    //    7
    //    51
    //    51
    //    105
}


