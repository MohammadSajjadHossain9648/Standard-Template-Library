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
class Welcome
{
public:
    // overload function call operator
    void operator()()
    {
        cout<<"welcome to new world."<<endl;
    }
};
int main()
{
    // create an object of Welcome class
    Welcome message;

    // call the add object
    message();

    //output: welcome to new world.
}
