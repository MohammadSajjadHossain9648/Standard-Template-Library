#include<iostream>
#include<valarray>
using namespace std;
/*
    to know more: https://www.geeksforgeeks.org/the-c-standard-template-library-stl/
                  https://www.geeksforgeeks.org/std-valarray-class-c/
*/
/*
    Public member functions in valarray class :
    1. apply() :- This function applies the manipulation given in its arguments to all the valarray elements
    at once and returns a new valarray with manipulated values.
    2. sum() :- This function returns the summation of all the elements of valarrays at once.
*/

int main()
{
    // Initializing valarray
    valarray<int> varr = { 10, 2, 20, 1, 30 };

    // Displaying new elements value
    cout<<"The old valarray with manipulated values is : ";
    for (int &x: varr)
        cout<<x<<" ";
    cout<<endl;

    // Declaring new valarray
    valarray<int> varr1 ;

    // Using apply() to increment all elements by 5
    varr1 = varr.apply(
                [](int x)
    {
        return x=x+5;
    }
            );

    // Displaying new elements value
    cout<<"The new valarray with manipulated values is : ";
    for (int &x: varr1)
        cout<<x<<" ";
    cout<<endl;

    // Displaying sum of both old and new valarray
    cout<<"The sum of old valarray is : ";
    cout<<varr.sum()<<endl;
    cout<<"The sum of new valarray is : ";
    cout<<varr1.sum()<<endl;

    return 0;

    //output:
    //    The old valarray with manipulated values is : 10 2 20 1 30
    //    The new valarray with manipulated values is : 15 7 25 6 35
    //    The sum of old valarray is : 63
    //    The sum of new valarray is : 88
}
