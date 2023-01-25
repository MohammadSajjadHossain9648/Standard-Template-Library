#include<iostream>
using namespace std;
/*
    to know more: https://www.geeksforgeeks.org/functors-in-cpp/
                  https://www.programiz.com/cpp-programming/functors
                  https://www.go4expert.com/articles/cpp-stl-functors-t34696/
                  https://www.technical-recipes.com/2011/using-function-objects-functors-c/
                  https://www.quantstart.com/articles/Function-Objects-Functors-in-C-Part-1/
                  https://learn.microsoft.com/en-us/cpp/standard-library/function-objects-in-the-stl?view=msvc-170
*/

class Addition
{
public:
    // overload function call operator
    // and accept two integer arguments, return their sum
    int operator()(int a, int b)
    {
        return a+b;
    }
};
int main()
{
    // create an object of Addition class
    Addition add;

    // call the add object
    int sum = add(100, 50);
    cout<<"sum of 100 and 50 is "<<sum<<endl;

    //output: sum of 100 and 50 is 150
}
