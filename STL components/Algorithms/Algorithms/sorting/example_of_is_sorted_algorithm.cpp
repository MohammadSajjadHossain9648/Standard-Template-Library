#include<iostream>
#include<algorithm>
using namespace std;
/*
    to know more: https://www.geeksforgeeks.org/sort-c-stl/
                  https://www.digitalocean.com/community/tutorials/sort-in-c-plus-plus
                  https://www.studytonight.com/cpp/stl/stl-sorting-algorithms
*/
/*
    is_sorted method:
    This function of the STL, returns true if the given range is sorted.

    There are two version of is_sorted() :
    1.is_sorted(start_iterator, end_iterator) : Checks the range defined by iterators start_iterator and
    end_iterator in ascending order.
    2.is_sorted(start_iterator, end_iterator, compare_function) : It also checks the given range but you can
    define how the sorting must be done.
*/
int main()
{
    int a[] = {9,8,7,6,5,4,3,2,1};
    int len = sizeof(a)/sizeof(int);

    cout<<"a[]: ";
    for(int i: a)
    {
        cout<<i<<" ";
    }
    cout<<endl<<endl;


    cout<<"is array a is sorted or not in ascending order: "<<is_sorted(a, a+len)<<endl<<endl;


    cout<<"-----------------------------------------------------------------------------"<<endl<<endl;

    int b[] = {1,2,3,4,5,11,15};
    int len2 = sizeof(b)/sizeof(int);

    cout<<"b[]: ";
    for(int i: b)
    {
        cout<<i<<" ";
    }
    cout<<endl<<endl;

    cout<<"is array b is sorted or not in ascending order: "<<is_sorted(b, b+len2)<<endl<<endl;


    cout<<"-----------------------------------------------------------------------------"<<endl<<endl;

    int c[] = {15,12,9,8,6,5,0};
    int len3 = sizeof(c)/sizeof(int);

    cout<<"c[]: ";
    for(int i: c)
    {
        cout<<i<<" ";
    }
    cout<<endl<<endl;

    cout<<"is array c is sorted or not in descending order: "<<is_sorted(c, c+len3, greater<int>() )<<endl<<endl;


    //output:
    //    a[]: 9 8 7 6 5 4 3 2 1
    //
    //    is array a is sorted or not in ascending order: 0
    //
    //    -----------------------------------------------------------------------------
    //
    //    b[]: 1 2 3 4 5 11 15
    //
    //    is array b is sorted or not in ascending order: 1
    //
    //    -----------------------------------------------------------------------------
    //
    //    c[]: 15 12 9 8 6 5 0
    //
    //    is array c is sorted or not in descending order: 1
}

