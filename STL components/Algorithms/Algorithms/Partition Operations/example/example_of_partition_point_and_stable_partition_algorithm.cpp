#include<iostream>
#include<algorithm> // for partition algorithm
#include<vector>
using namespace std;
/*
    to know more: https://www.geeksforgeeks.org/the-c-standard-template-library-stl/
                  https://www.geeksforgeeks.org/stdpartition-in-c-stl/
*/
/*
    Partition operations :
    1. stable_partition(beg, end, condition) :- This function is used to partition the elements on basis of
    condition mentioned in its arguments in such a way that the relative order of the elements is preserved.
    2. partition_point(beg, end, condition) :- This function returns an iterator pointing to the partition
    point of container i.e. the first element in the partitioned range [beg,end) for which condition is not
    true. The container should already be partitioned for this function to work.
*/
int main()
{
    // Initializing vector
    vector<int> vect = { 2, 1, 5, 6, 8, 7 };

    // partitioning vector using stable_partition() in sorted order
    stable_partition(vect.begin(), vect.end(), [](int x){return x%2 == 0;});

    // Displaying partitioned Vector
    cout<<"The partitioned vector is : ";
    for (int &x : vect)
        cout<<x<<" ";
    cout<<endl;

    // Declaring iterator
    vector<int>::iterator it1;

    // using partition_point() to get ending position of partition
    auto it = partition_point(vect.begin(), vect.end(), [](int x){return x%2==0;});

    // Displaying partitioned Vector
    cout<<"The vector elements returning true for condition are : ";
    for ( it1= vect.begin(); it1!=it; it1++)
        cout<<*it1<<" ";
    cout<<endl;

    return 0;

    //output:
    //    The partitioned vector is : 2 6 8 1 5 7
    //    The vector elements returning true for condition are : 2 6 8

    /*
    In the above code, even and odd elements are partitioned and in the increasing order (sorted).
    Not always in increasing order though, here the elements (even and odd) appeared in increased order
    so is the result after partition. if vect would have been { 2,1,7,8,6,5 } after stable_partition() it
    would be { 2,8,6,1,7,5 }. The order of appearance is maintained.
    */
}

