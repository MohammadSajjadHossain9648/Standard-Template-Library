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
/*
    A function object, or functor, is any type that implements operator(). This operator is referred to as
    the call operator or sometimes the application operator. The C++ Standard Library uses function objects
    primarily as sorting criteria for containers and in algorithms.

    Function objects provide two main advantages over a straight function call. The first is that a function
    object can contain state. The second is that a function object is a type and therefore can be used as
    a template parameter.
*/

class Functor
{
public:
    int operator()(int a, int b)
    {
        return a < b;
    }
};
int main()
{
    Functor f;
    int a = 15, b = 10;
    cout<<"a = "<<a<<" & b = "<<b<<endl;
    int ans = f(a, b);
    cout<<"b is greater than a: true->1, false->0"<<endl<<ans<<endl;
    return 0;

    //output:
    //    a = 15 & b = 10
    //    b is greater than a: true->1, false->0
    //    0
}
