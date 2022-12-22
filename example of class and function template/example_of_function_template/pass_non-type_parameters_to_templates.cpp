// C++ program to demonstrate working of non-type parameters to templates in C++
#include <iostream>
using namespace std;

template <class T, int max> int arrMin(T arr[], int n)
{
    int m = max;
    for (int i = 0; i < n; i++)
        if (arr[i] < m)
            m = arr[i];

    return m;
}

int main()
{
    int arr1[] = { 10, 20, 15, 12 };
    int n1 = sizeof(arr1) / sizeof(int);

    char arr2[] = { 1, 2, 3 };
    int n2 = sizeof(arr2) / sizeof(char);


    //print arr1
    cout<<"arr1[] : ";
    for (int i = 0; i < n1; i++)
        cout<<arr1[i]<<" ";
    cout<<endl;
    // Second template parameter to arrMin must be a constant
    cout<<"arrMin<int, 10000>(arr1, n1): "<<arrMin<int, 10000>(arr1, n1)<<endl<<endl;


    // Second template parameter to arrMin must be a constant
    cout<<"arr2[]: 1 2 3"<<endl;
    cout<<"arrMin<char, 256>(arr2, n2): "<<arrMin<char, 256>(arr2, n2)<<endl<<endl;

    return 0;

    //output:
    //    arr1[] : 10 20 15 12
    //    arrMin<int, 10000>(arr1, n1): 10
    //
    //    arr2[]: 1 2 3
    //    arrMin<char, 256>(arr2, n2): 1
}
