#include<iostream>
#include<valarray>
using namespace std;
/*
    to know more: https://www.geeksforgeeks.org/the-c-standard-template-library-stl/
                  https://www.geeksforgeeks.org/std-valarray-class-c/
*/
/*
    Public member functions in valarray class :
    1. shift() :- This function returns the new valarray after shifting elements by the number mentioned
    in its argument. If the number is positive, left-shift is applied, if number is negative, right-shift
    is applied.
    2. cshift() :- This function returns the new valarray after circularly shifting(rotating) elements by the
    number mentioned in its argument. If the number is positive, left-circular shift is applied, if number is
    negative, right-circular shift is applied.
*/
int main()
{
    // Initializing valarray
    valarray<int> varr = { 10, 2, 20, 1, 30 };

    cout<<"valarray<int> varr : ";
    for (int &x: varr)
        cout<<x<<" ";
    cout<<endl;

    // Declaring new valarray
    valarray<int> varr1;

    // using shift() to shift elements to left
    // shifts valarray by 2 position
    varr1 = varr.shift(2);

    // Displaying elements of valarray after shifting
    cout<<"The new valarray after shifting is : ";
    for ( int&x : varr1) cout<<x<<" ";
    cout<<endl;

    // using cshift() to circularly shift elements to right
    // rotates valarray by 3 position
    varr1 = varr.cshift(-3);

    // Displaying elements of valarray after circular shifting
    cout<<"The new valarray after circular shifting is : ";
    for ( int&x : varr1) cout<<x<<" ";
    cout<<endl;

    return 0;

    //output:
    //    valarray<int> varr : 10 2 20 1 30
    //    The new valarray after shifting is : 20 1 30 0 0
    //    The new valarray after circular shifting is : 20 1 30 10 2
}
