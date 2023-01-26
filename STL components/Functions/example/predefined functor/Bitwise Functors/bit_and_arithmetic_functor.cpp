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
    bit_and<int> ba1; // Adds two int objects
    bit_and<> ba2;// default type is void, so template specialization used
    bit_and<void> ba3; // template specialization used

    cout<<ba1(x, y)<<endl;
    cout<<ba2(x+1, y+2)<<endl;
    cout<<ba3(x, y)<<endl; // same as bit_and<void> ()(x, y)


    //output:
    //    0
    //    5
    //    0
}


