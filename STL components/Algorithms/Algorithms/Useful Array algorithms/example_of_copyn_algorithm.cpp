#include<iostream>
#include<algorithm>
using namespace std;
/*
    to know more: https://www.geeksforgeeks.org/useful-array-algorithms-in-c-stl/
                  https://www.studytonight.com/cpp/stl/stl-modifying-algorithms
*/
/*
    copy_n(): copy_n() copies one array elements to new array. This type of copy creates a deep copy of array.
    This function takes 3 arguments, source array name, size of array and the target array name.
*/
int main()
{
    // Initializing array
    int arr[6] =  {1, 2, 3, 4, 5, 6};

    // Declaring second array
    int arr2[6];

    // Using copy_n() to copy contents
    copy_n(arr, 6, arr2);

    // Displaying the copied array
    cout << "The new array after copying is : ";
    for (int i=0; i<6 ; i++)
        cout << arr2[i] << " ";

    return 0;

    /*
        Time Complexity: O(n)
        Auxiliary Space: O(n)
    */

    //output:
    //    The new array after copying is : 1 2 3 4 5 6
}

