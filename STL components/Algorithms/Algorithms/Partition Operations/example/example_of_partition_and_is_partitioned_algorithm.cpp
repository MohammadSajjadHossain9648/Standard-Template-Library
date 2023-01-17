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
    1. partition(beg, end, condition) :- This function is used to partition the elements on basis of
    condition mentioned in its arguments.
    2. is_partitioned(beg, end, condition) :- This function returns boolean true if container is partitioned
    else returns false.
*/
int main()
{
    // Initializing vector
    vector<int> vect = { 2, 1, 5, 6, 8, 7 };

    // Checking if vector is partitioned using is_partitioned()
    is_partitioned(vect.begin(), vect.end(), [](int x){return x%2==0;})?
    (cout<<"Vector is partitioned"):(cout<<"Vector is not partitioned");

    cout<<endl;


    // partitioning vector using partition()
    partition(vect.begin(), vect.end(), [](int x){return x%2==0;});


    // Checking if vector is partitioned using is_partitioned()
    is_partitioned(vect.begin(), vect.end(), [](int x){return x%2==0;})?
    (cout<<"Now, vector is partitioned after partition operation"):
    (cout<<"Vector is still not partitioned after partition operation");

    cout<<endl;


    // Displaying partitioned Vector
    cout<<"The partitioned vector is : ";
    for (int &x : vect)
        cout<<x<<" ";

    return 0;

    //output:
    //    Vector is not partitioned
    //    Now, vector is partitioned after partition operation
    //    The partitioned vector is : 2 8 6 5 1 7

    /*
    In the above code, partition function partitions the vector depending on whether an element is even or odd,
    even elements are partitioned from odd elements in no particular order.
    */

}

