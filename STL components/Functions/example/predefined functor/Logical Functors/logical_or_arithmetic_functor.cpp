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
    int x = 0, y = 0;
    logical_or<int> lo1; // Adds two int objects
    logical_or<> lo2;// default type is void, so template specialization used
    logical_or<void> lo3; // template specialization used

    cout<<lo1(x, y)<<endl;
    cout<<lo2(x+1, y+1)<<endl;
    cout<<lo3(x, y)<<endl; // same as logical_or<void> ()(x, y)

    cout<<logical_or<int>()(15,10)<<endl; // Explicit type as the template argument
    cout<<logical_or<void>()(3, 4)<<endl; // template specialization used, type is auto deduced from the arguments
    cout<<logical_or<void>()(true, false)<<endl;
    cout<<logical_or<void>()(true, true)<<endl;
    cout<<logical_or<void>()(false, false)<<endl;


    // output:
    //    0
    //    1
    //    0
    //    1
    //    1
    //    1
    //    1
    //    0
}


