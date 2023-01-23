#include<iostream>
#include<valarray>
using namespace std;
/*
    to know more: https://www.geeksforgeeks.org/the-c-standard-template-library-stl/
                  https://www.geeksforgeeks.org/std-valarray-class-c/
*/
/*
    Public member functions in valarray class :
    1. min() :- This function returns the smallest element of valarray.
    2. max() :- This function returns the largest element of valarray.
*/
int main()
{
    // Initializing valarray
    valarray<int> varr = { 10, 2, 20, 1, 30 };

    cout<<"valarray<int> varr : ";
    for (int &x: varr)
        cout<<x<<" ";
    cout<<endl;

    // Displaying largest element of valarray
    cout<<"The largest element of valarray is : ";
    cout<<varr.max()<<endl;

    // Displaying smallest element of valarray
    cout<<"The smallest element of valarray is : ";
    cout<<varr.min()<<endl;

    return 0;

    //output:
    //    valarray<int> varr : 10 2 20 1 30
    //    The largest element of valarray is : 30
    //    The smallest element of valarray is : 1
}
