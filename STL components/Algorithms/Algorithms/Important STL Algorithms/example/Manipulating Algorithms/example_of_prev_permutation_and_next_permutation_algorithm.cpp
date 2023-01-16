#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
/*
    to know more: https://www.geeksforgeeks.org/the-c-standard-template-library-stl/
                  https://www.geeksforgeeks.org/c-magicians-stl-algorithms/
                  https://www.studytonight.com/cpp/stl/stl-min-max-operations-cont
*/
/*
    Some Manipulating Algorithms:
    1.next_permutation(first_iterator, last_iterator) – This modified the vector to its next permutation.
    2.prev_permutation(first_iterator, last_iterator) – This modified the vector to its previous permutation.
*/
int main()
{
    // Initializing vector with array values
    int arr[] = {5, 10, 15, 20, 20, 23, 42, 45};
    int n = sizeof(arr)/sizeof(arr[0]);
    vector<int> vect(arr, arr+n);

    cout<<"Given Vector is:\n";
    for (int i=0; i<n; i++)
        cout<<vect[i]<<" ";

    // modifies vector to its next permutation order
    next_permutation(vect.begin(), vect.end());
    cout<<"\nVector after performing next permutation:\n";
    for (int i=0; i<n; i++)
        cout<<vect[i]<<" ";

    prev_permutation(vect.begin(), vect.end());
    cout<<"\nVector after performing prev permutation:\n";
    for (int i=0; i<n; i++)
        cout<<vect[i]<<" ";

    return 0;

    //output:
    //    Given Vector is:
    //    5 10 15 20 20 23 42 45
    //    Vector after performing next permutation:
    //    5 10 15 20 20 23 45 42
    //    Vector after performing prev permutation:
    //    5 10 15 20 20 23 42 45
}

