#include<iostream>
#include<set>
using namespace std;
/*
    Allocator:
    1.get_allocator() - C++ multiset get_allocator() function is used to return the copy of allocator object which
    helps to construct the multiset container.
    Time Complexity: O(1).
*/
int main()
{
//Example 1: The program below shows how allocator of a multiset can be used to allocate an array of 5 elements.
    multiset<int> s;
    int len=5;

    //allocate an array of 5 elements using s's allocator:
    int *arr;

    arr = s.get_allocator().allocate(len);

    //size of int is 4
    cout<<"size of multiset<int> s is "<< sizeof(*arr) * 5<<endl;

    //still multiset s is empty cause we just allocate the length of multiset
    cout<<"multiset<int> s = ";
    for(auto i: s)
    {
        cout<<i<<" ";
    }
    cout<<endl;


    //now assign len number of values in array arr
    cout<<"arr[] = ";
    for(int i=0; i<len; i++)
    {
        arr[i] = (i+1)*10;
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    //still multiset s is empty cause we just need to deallocate the array value in multiset
    cout<<"multiset<int> s = ";
    for(auto i: s)
    {
        cout<<i<<" ";
    }
    cout<<endl;

    // deallocate the memory allotted previously
    s.get_allocator().deallocate(arr, len);


    //output:
    //    size of multiset<int> s is 20
    //    multiset<int> s =
    //    arr[] = 10 20 30 40 50
    //    multiset<int> s =
}
