#include<iostream>
using namespace std;
/*
    to know more: https://www.geeksforgeeks.org/functors-in-cpp/
                  https://www.programiz.com/cpp-programming/functors
                  https://www.go4expert.com/articles/cpp-stl-functors-t34696/
                  https://www.technical-recipes.com/2011/using-function-objects-functors-c/
                  https://www.quantstart.com/articles/Function-Objects-Functors-in-C-Part-1/
                  https://learn.microsoft.com/en-us/cpp/standard-library/function-objects-in-the-stl?view=msvc-170
                  https://www.studytonight.com/cpp/stl/
*/
/*
    Please note that the title is Functors (Not Functions)!!

    Consider a function that takes only one argument. However, while calling this function
    we have a lot more information that we would like to pass to this function, but we cannot
    as it accepts only one parameter. What can be done?

    One obvious answer might be global variables. However, good coding practices do not advocate
    the use of global variables and say they must be used only when there is no other alternative.
*/
/*
    A function object, or functor, is any type that implements operator(). This operator is referred to as
    the call operator or sometimes the application operator. The C++ Standard Library uses function objects
    primarily as sorting criteria for containers and in algorithms.

    Function objects provide two main advantages over a straight function call. The first is that a function
    object can contain state. The second is that a function object is a type and therefore can be used as
    a template parameter.
*/
int main()
{
}
