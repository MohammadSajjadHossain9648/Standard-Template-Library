#include<iostream>
#include<algorithm>
#include<vector>
#include<set>
#include<numeric>
using namespace std;
/*
    to know more: https://www.geeksforgeeks.org/sort-c-stl/
                  https://www.geeksforgeeks.org/c-magicians-stl-algorithms/
                  https://www.studytonight.com/cpp/stl/stl-searching-lower-upper-bound
*/
/*
    Non-Manipulating Algorithms:
    1.lower_bound(first_iterator, last_iterator, x)/lower_bound(x) – returns an iterator pointing to the first element
    in the range [first,last) which has a value not less than ‘x’.
    or,
    C++ set lower_bound() function is used to return an iterator pointing to the key in the set container which
    is equivalent to val passed in the parameter.
    If val is not present in the set container, it returns an iterator pointing to the immediate next element
    which is just greater than val.

    2. upper_bound(first_iterator, last_iterator, x)/upper_bound(x) – returns an iterator pointing to the first element
    in the range [first,last) which has a value greater than ‘x’.
    or,
    It returns an iterator pointing to the value in the set container which is larger to val passed
    in the parameter. If there is no such element return end()/ return last index value or position.

    3. equal_range(x) - The function returns an iterator of pairs. (key_comp). The pair refers to the range
    that includes all the elements in the container which have a key equivalent to k. which indiactes results of both
    the lower_bound and the upper_bound of x.


    lower bound rules: syntax->lower_bound(first_iterator, last_iterator, x)/lower_bound(x)
    1. if x is in array, find the first occurrence of x and print its index no and x value.
    2. if x is not in array, find the value which is next immediate greater after x and print its index no and index value.

    upper bound rules: syntax->lower_bound(first_iterator, last_iterator, x)/upper_bound(x)
    1. if x is in array, find the value which is immediate greater than x and print its index no and index value.
    2. if x is not in array, find the value which is next immediate greater after x and print its index no and index value.
    3. if x is greater than last index value, print index_no = total size of array and value is 0.
*/
int main()
{
// example with using vector
    // Initializing vector with array values
    int arr[] = {5, 10, 15, 20, 20, 23, 42, 45};
    int n = sizeof(arr)/sizeof(arr[0]);
    vector<int> vect(arr, arr+n);

    // Sort the array to make sure that lower_bound() and upper_bound() work.
    sort(vect.begin(), vect.end());


    cout<<"After sort, arr[]: ";
    for(int i: vect)
    {
        cout<<i<<" ";
    }
    cout<<endl<<endl;


//print lower bound and upper bound index no. and its value
    // Returns the first occurrence of 20
    auto l = lower_bound(vect.begin(), vect.end(), 20);

    // Returns next value index of the last occurrence of 20 which mean next immediate greater value of 20
    auto u = upper_bound(vect.begin(), vect.end(), 20);

    cout<<"The lower bound of value 20 is at position : ";
    cout<<l-vect.begin()<<" and lower bound value :"<<*l<<endl;

    cout<<"The upper bound of value 20 is at position: ";
    cout<<u-vect.begin()<<" and upper bound value :"<<*u<<endl;


    // another example: if value is not in vector

    // Returns the first occurrence of 13, but no value see in vector.
    // if not found first occurrence is next immediate greater than 13, which is 15.
    auto l1 = lower_bound(vect.begin(), vect.end(), 13);

    // Returns next immediate greater than 21, which is 23.
    auto u1 = upper_bound(vect.begin(), vect.end(), 21);

    cout<<"The lower bound of value 13 is at position: ";
    cout<<l1-vect.begin()<<" and lower bound value :"<<*l1<<endl;

    cout<<"The upper bound of value 21 is at position: ";
    cout<<u1-vect.begin()<<" and upper bound value :"<<*u1<<endl;


    // another example: if value is out of range in vector

    // Returns the first occurrence of 2, but no value see in vector.
    // if not found first occurrence is next immediate greater than 2, which is 5.
    auto l2 = lower_bound(vect.begin(), vect.end(), 2);

    // Returns next immediate greater than 50, if get nothing, return last index and last index value.
    auto u2 = upper_bound(vect.begin(), vect.end(), 50);

    cout<<"The lower bound of value 2 is at position: ";
    cout<<l2-vect.begin()<<" and lower bound value :"<<*l2<<endl;

    cout<<"The upper bound of value 50 is at position: ";
    cout<<u2-vect.begin()<<" and upper bound value :"<<*u2<<endl;



//another example using set
    set<int> v2 = {5, 10, 15, 20, 20, 23, 42, 45};
    cout<<"\nset<int> v2 = ";
    for(auto i: v2)
    {
        cout<<i<<" ";
    }
    cout<<endl;

    auto it = v2.lower_bound(15);
    auto it2 = v2.upper_bound(15);

    cout<<"\nthe lower bound value of 15 is "<<*it;
    cout<<"\nthe upper bound value of 15 is "<<*it2;

    //example: delete the given range like 10 ... 20
    set<int>:: iterator itlow, ithigh;
    auto it3 = v2.lower_bound(10);
    auto it4 = v2.upper_bound(20);

    v2.erase(it3, it4);

    /* same as v2.erase(it3, it4)
    for(auto i=*it3; i!= *it4; i++)
    {
        v2.erase(i);
    }
    */

    cout<<"\nafter delete 10 to 20 \nset<int> v2 = ";
    for(auto i: v2)
    {
        cout<<i<<" ";
    }
    cout<<endl;


// equal_range which gives the result of both the lower_bound and the upper_bound of any value.
    set<int> v3 = {5, 10, 15, 20, 20, 23, 42, 45};
    cout<<"\nset<int> v3 = ";
    for(auto i: v3)
    {
        cout<<i<<" ";
    }
    cout<<endl;

    auto it5 = v3.equal_range(15);

    cout<<"\nthe lower bound value of 15 is "<<*it5.first;
    cout<<"\nthe upper bound value of 15 is "<<*it5.second;

    return 0;

    //output:
    //    After sort, arr[]: 5 10 15 20 20 23 42 45
    //
    //    The lower bound of value 20 is at position : 3 and lower bound value :20
    //    The upper bound of value 20 is at position: 5 and upper bound value :23
    //    The lower bound of value 13 is at position: 2 and lower bound value :15
    //    The upper bound of value 21 is at position: 5 and upper bound value :23
    //    The lower bound of value 2 is at position: 0 and lower bound value :5
    //    The upper bound of value 50 is at position: 8 and upper bound value :0
    //
    //    set<int> v2 = 5 10 15 20 23 42 45
    //
    //    the lower bound value of 15 is 15
    //    the upper bound value of 15 is 20
    //    after delete 10 to 20
    //    set<int> v2 = 5 23 42 45
    //
    //    the lower bound value of 15 is 15
    //    the upper bound value of 15 is 20
}
