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
    int x = 20, y = 10;
    modulus<int> mod1; // Adds two int objects
    modulus<> mod2;// default type is void, so template specialization used
    modulus<void> mod3; // template specialization used

    cout<<mod1(x, y)<<endl;
    cout<<mod2(x+10, y+10)<<endl;
    cout<<mod3(x*2, y*2)<<endl; // same as modulus<void> ()(x*2, y*2)

    cout<<modulus<int>()(15,10)<<endl; // Explicit type as the template argument
    cout<<modulus<void>()(500, 100)<<endl; // template specialization used, type is auto deduced from the arguments

    //output:
    //    0
    //    10
    //    0
    //    5
    //    0
}


