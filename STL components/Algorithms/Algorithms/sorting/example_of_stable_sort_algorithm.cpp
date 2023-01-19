#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
/*
    to know more: https://www.javatpoint.com/cpp-algorithm-stable_sort-function
*/
/*
    A stable sort is one where the relative position of equal elements is kept the same from the original
    container to the sorted container. The function that achieves a stable sort is the stable_sort function.
    This function can also take a binary predicate function as an optional argument.
    Here are the syntax templates for this function:

    void stable_sort(range-begin, range-end);
    void stable_sort(range-begin, range-end, binary-predicate-function);
*/

//Sorting in Ascending Order
bool length(const string &s1, const string &s2)
{
    return s1.length() < s2.length();
}

//Sorting in Descending Order
bool length2(const string &s1, const string &s2)
{
    return s1.length() > s2.length();
}

int main()
{
    int arr[] = {1,7,5,4,3,6,2,8};
    int arr2[] = {1,7,5,4,3,6,2,8};
    int size = sizeof(arr) / sizeof(int);
    int size2 = sizeof(arr2) / sizeof(int);

    cout<<"int arr[]: ";
    for(int i: arr)
    {
        cout<<i<<" ";
    }
    cout<<endl<<endl;

    //Sorting in Ascending Order
    stable_sort(arr, arr+size);

    //Sorting in Descending Order
    sort(arr2, arr2+size2, greater<int>());
    /* can be write Sorting in Descending Order by using a lambda function
        sort(array2, array2+size2, [](int &e1, int &e2){ return e1>e2; } );
    */


    cout<<"sort int array in Ascending Order: ";
    for(int i: arr)
    {
        cout<<i<<" ";
    }
    cout<<endl<<endl;

    cout<<"sort int array in Descending Order: ";
    for(int i: arr)
    {
        cout<<i<<" ";
    }
    cout<<endl<<endl;

    cout<<"-----------------------------------------------------------------------------"<<endl<<endl;

// another example by using string
    vector<string> array = {"1xxx", "2x", "3a", "4x", "5xx",
                            "6xxxx", "7xx", "8xxx", "9xx",
                            "10xxx", "11", "12", "13", "14xx",
                            "15", "16", "17"
                           };
    vector<string> array2 = {"1xxx", "2x", "3a", "4x", "5xx",
                             "6xxxx", "7xx", "8xxx", "9xx",
                             "10xxx", "11", "12", "13", "14xx",
                             "15", "16", "17"
                            };

    cout<<"vector<string> array: ";
    for(string i: array)
    {
        cout<<i<<" ";
    }
    cout<<endl<<endl;


    //Sorting in Ascending Order
    stable_sort(array.begin(), array.end(), length);

    //Sorting in Descending Order
    stable_sort(array2.begin(), array2.end(), length2);


    cout<<"sort array in Ascending Order: ";
    for(string i: array)
    {
        cout<<i<<" ";
    }
    cout<<endl<<endl;

    cout<<"sort array in Descending Order: ";
    for(string i: array2)
    {
        cout<<i<<" ";
    }
    cout<<endl<<endl;


    //output:
    //    int arr[]: 1 7 5 4 3 6 2 8
    //
    //    sort int array in Ascending Order: 1 2 3 4 5 6 7 8
    //
    //    sort int array in Descending Order: 1 2 3 4 5 6 7 8
    //
    //    -----------------------------------------------------------------------------
    //
    //    vector<string> array: 1xxx 2x 3a 4x 5xx 6xxxx 7xx 8xxx 9xx 10xxx 11 12 13 14xx 15 16 17
    //
    //    sort array in Ascending Order: 2x 3a 4x 11 12 13 15 16 17 5xx 7xx 9xx 1xxx 8xxx 14xx 6xxxx 10xxx
    //
    //    sort array in Descending Order: 6xxxx 10xxx 1xxx 8xxx 14xx 5xx 7xx 9xx 2x 3a 4x 11 12 13 15 16 17
}


