#include<iostream>
#include<algorithm>
#include<vector>
#include<numeric>
using namespace std;
/*
    to know more: https://www.geeksforgeeks.org/sort-c-stl/
                  https://www.geeksforgeeks.org/c-magicians-stl-algorithms/
                  https://www.digitalocean.com/community/tutorials/sort-in-c-plus-plus
                  https://www.studytonight.com/cpp/stl/stl-sorting-algorithms
                  https://www.studytonight.com/cpp/stl/stl-min-max-operations
*/
/*
    Non-Manipulating Algorithms:
    1.sort(first_iterator, last_iterator) – To sort the given vector.
    2.sort(first_iterator, last_iterator, greater<int>()) – To sort the given container/vector in descending order
    3.reverse(first_iterator, last_iterator) – To reverse a vector. (ascending -> descending /descending -> ascending)
    4.*max_element (first_iterator, last_iterator) – To find the maximum element of a vector.
    5.*min_element (first_iterator, last_iterator) – To find the minimum element of a vector.
    6.accumulate(first_iterator, last_iterator, initial value of sum) – Does the summation of vector elements
*/
int main()
{
    // Initializing vector with array values
    int arr[] = {10, 20, 5, 23,42, 15};
    int n = sizeof(arr)/sizeof(arr[0]);
    vector<int> vect(arr, arr+n);

    cout << "Vector is: ";
    for (int i=0; i<n; i++)
        cout << vect[i] << " ";

    // Sorting the Vector in Ascending order
    sort(vect.begin(), vect.end());


    cout << "\nVector after sorting is: ";
    for (int i=0; i<n; i++)
        cout << vect[i] << " ";


    // Sorting the Vector in Descending order
    sort(vect.begin(),vect.end(), greater<int>());

    cout << "\nVector after sorting in Descending order is: ";
    for (int i=0; i<n; i++)
        cout << vect[i] << " ";


    // Reversing the Vector (descending to ascending , ascending to descending)
    reverse(vect.begin(), vect.end());

    cout << "\nVector after reversing is: ";
    for (int i=0; i<n; i++)
        cout << vect[i] << " ";

    cout << "\nMaximum element of vector is: ";
    cout << *max_element(vect.begin(), vect.end());

    cout << "\nMinimum element of vector is: ";
    cout << *min_element(vect.begin(), vect.end());

    // Starting the summation from 0
    cout << "\nThe summation of vector elements is: ";
    cout << accumulate(vect.begin(), vect.end(), 0);

    return 0;

    //output:
    //    Vector is: 10 20 5 23 42 15
    //    Vector after sorting is: 5 10 15 20 23 42
    //    Vector after sorting in Descending order is: 42 23 20 15 10 5
    //    Vector after reversing is: 5 10 15 20 23 42
    //    Maximum element of vector is: 42
    //    Minimum element of vector is: 5
    //    The summation of vector elements is: 115
}
