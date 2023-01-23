#include<iostream>
#include<valarray>
using namespace std;
/*
    to know more: https://www.geeksforgeeks.org/the-c-standard-template-library-stl/
                  https://www.geeksforgeeks.org/std-valarray-class-c/
*/
/*
    Public member functions in valarray class :
    1. swap() :- This function swaps one valarray with other.
*/
int main()
{
    // Initializing 1st valarray
    valarray<int> varr1 = {1, 2, 3, 4};

    // Initializing 2nd valarray
    valarray<int> varr2 = {5, 6, 7, 8};

    // Displaying valarrays before swapping
    cout<<"The contents of 1st valarray before swapping are : ";
    for (int &x : varr1)
        cout<<x<<" ";
    cout<<endl;

    cout<<"The contents of 2nd valarray before swapping are : ";
    for (int &x : varr2)
        cout<<x<<" ";
    cout<<endl;

    // Use of swap() to swap the valarrays
    varr1.swap(varr2);

    cout<<"now swap varr1 with varr2"<<endl;

    // Displaying valarrays after swapping
    cout<<"The contents of 1st valarray after swapping are : ";
    for (int &x : varr1)
        cout<<x<<" ";
    cout<<endl;

    cout<<"The contents of 2nd valarray after swapping are : ";
    for (int &x : varr2)
        cout<<x<<" ";
    cout<<endl;

    return 0;

    //output:
    //    The contents of 1st valarray before swapping are : 1 2 3 4
    //    The contents of 2nd valarray before swapping are : 5 6 7 8
    //    now swap varr1 with varr2
    //    The contents of 1st valarray after swapping are : 5 6 7 8
    //    The contents of 2nd valarray after swapping are : 1 2 3 4
}
