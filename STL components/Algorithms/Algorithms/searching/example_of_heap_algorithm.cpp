#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
/*
    to know more: https://levelup.gitconnected.com/learning-c-sorting-algorithms-of-the-stl-3c473a1e3143
*/
/*
    The last set of algorithms I will discuss in this article are the heap algorithms. A heap is a data structure
    that has several properties that make it useful for storing sorted data. Covering the details of the heap is
    beyond the scope of this article, but you can learn more about heaps here.

    There are four functions that are part of the heap algorithms:
    1. make_heap: converts a range of elements to a heap.
    2. push_heap: add one element to a heap.
    3. pop_heap: remove the next element from a heap.
    4. sort_heap: convert a heap to a sorted collection.
*/
int main()
{
    vector<int> numbers = {4,1,2,18,9,6,11};

    cout<<"The vector before make_heap: "<<endl;
    for(int i: numbers)
    {
        cout<<i<<" ";
    }
    cout<<endl<<endl;


    make_heap(numbers.begin(), numbers.end());
    cout<<"After make_heap: "<<endl;
    for(int i: numbers)
    {
        cout<<i<<" ";
    }
    cout<<endl<<endl;


    numbers.push_back(15);

    push_heap(numbers.begin(), numbers.end());
    cout<<"After push_heap by adding 15: "<<endl;
    for(int i: numbers)
    {
        cout<<i<<" ";
    }
    cout<<endl<<endl;


    pop_heap(numbers.begin(), numbers.end());
    cout<<"After pop_heap: "<<endl;
    for(int i: numbers)
    {
        cout<<i<<" ";
    }
    cout<<endl<<endl;

    sort_heap(numbers.begin(), numbers.end());
    cout<<"After sort_heap: "<<endl;
    for(int i: numbers)
    {
        cout<<i<<" ";
    }
    cout<<endl<<endl;


    //output:
    //    The vector before make_heap:
    //    4 1 2 18 9 6 11
    //
    //    After make_heap:
    //    18 9 11 1 4 6 2
    //
    //    After push_heap by adding 15:
    //    18 15 11 9 4 6 2 1
    //
    //    After pop_heap:
    //    15 9 11 1 4 6 2 18
    //
    //    After sort_heap:
    //    1 2 4 6 9 11 18 15
}

