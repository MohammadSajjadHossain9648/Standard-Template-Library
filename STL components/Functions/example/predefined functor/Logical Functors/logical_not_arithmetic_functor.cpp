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
    remember: “Logical not or !” is meant for boolean values.
    like an example,
    1.true is 1 and false is 0.
    int a = false;
    cout<<!a<<endl; -> false convert to true so output is 1
    2. int a = 0, b = 20;
    cout<<!a<<endl; -> 0 convert to 1 so output is 1
    cout<<!b<<endl; -> 20 convert to 0(non-zero) so output is 0
*/
int main()
{
    int x = 0, y = 10;
    logical_not<int> ln1; // Adds two int objects
    logical_not<> ln2;// default type is void, so template specialization used
    logical_not<void> ln3; // template specialization used

    cout<<ln1(x)<<endl;
    cout<<ln2(y+1)<<endl;
    cout<<ln3(y)<<endl; // same as logical_not<void> ()(y)

    cout<<logical_not<int>()(15)<<endl; // Explicit type as the template argument
    cout<<logical_not<void>()(-10)<<endl; // template specialization used, type is auto deduced from the arguments
    cout<<logical_not<void>()(true)<<endl;
    cout<<logical_not<void>()(false)<<endl;

    // output:
    //    1
    //    0
    //    0
    //    0
    //    0
    //    0
    //    1
}


