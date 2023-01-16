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
    1.arr.erase(position to be deleted) – This erases selected element in vector and shifts and resizes the
    vector elements accordingly.
    2.arr.erase(unique(arr.begin(),arr.end()),arr.end()) – This erases the duplicate occurrences in sorted vector
    in a single line.
*/
int main()
{
    // Initializing vector with array values
    int arr[] = { 5, 10, 15, 20, 20, 23, 42, 45 };
    int n = sizeof(arr) / sizeof(arr[0]);
    vector<int> vect(arr, arr + n);

    cout<<"Given Vector is: ";
    for (int i = 0; i < n; i++)
        cout<<vect[i]<<" ";
    cout<<endl;

    vect.erase(find(vect.begin(),vect.end(),10));
    cout<<"Vector after erasing element: ";
    for (int i = 0; i < vect.size(); i++)
        cout<<vect[i]<<" ";
    cout<<endl;


    vect.erase( unique(vect.begin(), vect.end()), vect.end());

    cout<<"Vector after removing duplicates: ";
    for (int i = 0; i < vect.size(); i++)
        cout<<vect[i]<<" ";
    cout<<endl;

    return 0;

    //output:
    //    Given Vector is: 5 10 15 20 20 23 42 45
    //    Vector after erasing element: 5 15 20 20 23 42 45
    //    Vector after removing duplicates: 5 15 20 23 42 45
}

