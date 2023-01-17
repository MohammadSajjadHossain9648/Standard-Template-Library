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
    partition_copy(beg, end, beg1, beg2, condition) :- This function copies the partitioned elements
    in the different containers mentioned in its arguments. It takes 5 arguments. Beginning and ending
    position of container, beginning position of new container where elements have to be copied (elements
    returning true for condition), beginning position of new container where other elements have to be copied
    (elements returning false for condition) and the condition. Resizing new containers is necessary
    for this function.
*/
int main()
{
    // Initializing vector
    vector<int> vect = { 2, 1, 5, 6, 8, 7 };

    // Declaring vector1
    vector<int> vect1;

    // Declaring vector1
    vector<int> vect2;

    // Resizing vectors to suitable size using count_if() and resize()
    int n = count_if (vect.begin(), vect.end(), [](int x){return x%2==0;});

    vect1.resize(n);
    vect2.resize(vect.size()-n);

    // Using partition_copy() to copy partitions
    partition_copy(vect.begin(), vect.end(), vect1.begin(), vect2.begin(), [](int x){return x%2==0;});


    // Displaying partitioned Vector
    cout<<"The elements that return true for condition are : ";
    for (int &x : vect1)
            cout<<x<<" ";
    cout<<endl;

    // Displaying partitioned Vector
    cout<<"The elements that return false for condition are : ";
    for (int &x : vect2)
            cout<<x<<" ";
    cout<<endl;

    return 0;

    //output:
    //    The elements that return true for condition are : 2 6 8
    //    The elements that return false for condition are : 1 5 7
}

