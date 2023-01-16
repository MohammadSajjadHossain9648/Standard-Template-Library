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
                  https://www.studytonight.com/cpp/stl/stl-non-modifying-algorithms
*/
/*
    Non-Manipulating Algorithms:
    1.count(first_iterator, last_iterator,x) – To count the occurrences of x in vector.
    2.find(first_iterator, last_iterator, x) – Returns an iterator to the first occurrence of x in vector and
    points to last address of vector ((name_of_vector).end()) if element is not present in vector.
*/
int main()
{
    // Initializing vector with array values
    int arr[] = {10, 20, 5, 23,42, 20, 15};
    int n = sizeof(arr)/sizeof(arr[0]);
    vector<int> vect(arr, arr+n);

    cout<<"Occurrences of 20 in vector : ";

    // Counts the occurrences of 20 from 1st to last element
    cout<<count(vect.begin(), vect.end(), 20)<<endl;

    // find() returns iterator to last address if element not present
    find(vect.begin(), vect.end(), 5) != vect.end()? (cout<<"Element 5 is found"): (cout<<"Element 5 is not found");

    return 0;

    //output:
    //    Occurrences of 20 in vector : 2
    //    Element 5 is found
}
