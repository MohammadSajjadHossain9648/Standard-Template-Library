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
    minus<int> sub1; // Adds two int objects
    minus<> sub2;// default type is void, so template specialization used
    minus<void> sub3; // template specialization used

    cout<<sub1(x, y)<<endl;
    cout<<sub2(x+10, y+10)<<endl;
    cout<<sub3(x*2, y*2)<<endl; // same as minus<void> ()(x*2, y*2)

    cout<<minus<int>()(15,10)<<endl; // Explicit type as the template argument
    cout<<minus<void>()(500, 100)<<endl; // template specialization used, type is auto deduced from the arguments

    //output:
    //    10
    //    10
    //    20
    //    5
    //    400
}


