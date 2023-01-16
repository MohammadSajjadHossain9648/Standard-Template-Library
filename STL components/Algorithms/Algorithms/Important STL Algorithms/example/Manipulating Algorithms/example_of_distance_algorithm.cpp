#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
/*
    to know more: https://www.geeksforgeeks.org/the-c-standard-template-library-stl/
                  https://www.geeksforgeeks.org/c-magicians-stl-algorithms/
*/
/*
    Some Manipulating Algorithms:
    distance(first_iterator,desired_position) – It returns the distance of desired position from the first
    iterator.This function is very useful while finding the index.
*/
int main()
{
    // Initializing vector with array values
    int arr[] = {5, 10, 15, 20, 20, 23, 42, 45};
    int n = sizeof(arr)/sizeof(arr[0]);
    vector<int> vect(arr, arr+n);

    cout<<"arr[]: ";
    for(int i: vect)
    {
        cout<<i<<" ";
    }
    cout<<endl;

    // Return distance of first to maximum element
    cout<<"Distance between first to max element: ";
    cout<<distance( vect.begin(), max_element(vect.begin(), vect.end()) );
    return 0;

    //output:
    //    arr[]: 5 10 15 20 20 23 42 45
    //    Distance between first to max element: 7
}

