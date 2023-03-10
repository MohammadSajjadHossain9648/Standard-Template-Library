#include<iostream>
#include<algorithm>
using namespace std;
/*
    to know more: https://levelup.gitconnected.com/learning-c-sorting-algorithms-of-the-stl-3c473a1e3143
                  https://www.softwaretestinghelp.com/algorithms-in-stl/
                  https://www.studytonight.com/cpp/stl/stl-sorting-algorithms
                  https://www.geeksforgeeks.org/sort-algorithms-the-c-standard-template-library-stl/
*/
int main()
{
    int arr[] = { 1, 5, 8, 9, 6, 7, 3, 4, 2, 0 };
    int len = sizeof(arr) / sizeof(int);

    sort(arr, arr + len);

    cout<<"Sorted Array: ";
    for(int i=0; i<len; i++)
    {
        cout<<arr[i]<< " ";
    }
    cout<<endl;

    //find any number in the array stay or not
    if (binary_search(arr, arr + len, 2))
        cout << "Key = 2 found in the array"<<endl;
    else
        cout << "Key = 2 not found in the array"<<endl;

    //output:
    //    Sorted Array: 0 1 2 3 4 5 6 7 8 9
    //    Key = 2 found in the array
}
