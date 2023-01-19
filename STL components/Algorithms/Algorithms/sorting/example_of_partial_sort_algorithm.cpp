#include<iostream>
#include<algorithm>
using namespace std;
/*
    to know more: https://www.geeksforgeeks.org/sort-c-stl/
                  https://www.digitalocean.com/community/tutorials/sort-in-c-plus-plus
                  https://www.studytonight.com/cpp/stl/stl-sorting-algorithms
*/
/*
    partial_sort method:
    partial_sort() sorts first half elements in the given range, the other half elements remain as they was
    initially.

    partial_sort() also has two variations:
    1.partial_sort(start, middle, end ) : sorts the range from start to end in such a way that the elements
    before middle are in ascending order and are the smallest elements in the range.
    2.partial_sort(start, middle, end, compare_function) : sorts the range from start to end in such a way that
    the elements before middle are sorted with the help of compare_function and are the smallest elements in the range.
*/

int main()
{
    int a[] = {9,8,7,6,5,4,3,2,1};

    cout<<"a[]: ";
    for(int i: a)
    {
        cout<<i<<" ";
    }
    cout<<endl<<endl;

    //sort last 4 element in Ascending Order cause mid = a+4
    partial_sort(a, a+4, a+9);

    cout<<"sort int array in Ascending Order: ";
    for(int i: a)
    {
        cout<<i<<" ";
    }
    cout<<endl;

    cout<<"-----------------------------------------------------------------------------"<<endl<<endl;

    int b[] = {1,2,3,4,5,6,7,8,9};

    cout<<"b[]: ";
    for(int i: b)
    {
        cout<<i<<" ";
    }
    cout<<endl<<endl;

    //sort last 4 element in Descending Order cause mid = b+4
    partial_sort(b, b+4, b+9, greater<int>());

    cout<<"sort int array in Descending Order: ";
    for(int i: b)
    {
        cout<<i<<" ";
    }
    cout<<endl;

    //output:
    //    a[]: 9 8 7 6 5 4 3 2 1
    //
    //    sort int array in Ascending Order: 1 2 3 4 9 8 7 6 5
    //    -----------------------------------------------------------------------------
    //
    //    b[]: 1 2 3 4 9 8 7 6 5
    //
    //    sort int array in Descending Order: 9 8 7 6 1 2 3 4 5
}
