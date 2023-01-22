#include<iostream>
#include<algorithm>
#include<numeric> // for iota()
using namespace std;
/*
    to know more: https://www.geeksforgeeks.org/useful-array-algorithms-in-c-stl/
                  https://www.studytonight.com/cpp/stl/stl-modifying-algorithms
*/
/*
    iota(): This function is used to assign continuous values to array. This function accepts 3 arguments,
    the array name, size, and the starting number.
*/
int main()
{
    // Initializing array with 0 values
    int arr[6] =  {0};

    // Using iota() to assign values
    iota(arr, arr+6, 20);

    // Displaying the new array
    cout << "The new array after assigning values is : ";
    for (int i=0; i<6 ; i++)
       cout << arr[i] << " ";

    return 0;

    /*
        Time Complexity: O(n)
        Auxiliary Space: O(1)
    */

    //output:
    //    The new array after assigning values is : 20 21 22 23 24 25
}

