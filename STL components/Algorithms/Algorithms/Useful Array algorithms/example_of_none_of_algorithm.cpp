#include<iostream>
#include<algorithm>
using namespace std;
/*
    to know more: https://www.geeksforgeeks.org/useful-array-algorithms-in-c-stl/
                  https://www.studytonight.com/cpp/stl/stl-modifying-algorithms
*/
/*
    none_of(): This function returns true if none of elements satisfies the given condition else returns false.
*/
int main()
{
    // Initializing array
    int ar[6] =  {1, 2, 3, 4, 5, 6};

    // Checking if no element is negative
    none_of(ar, ar+6, [](int x) { return x>0; })?
          (cout<<"No positive elements") : (cout<<"There are positive elements");

    return 0;

    /*
        Time Complexity: O(n)
        Auxiliary Space: O(1)
    */

    //output: There are positive elements
}

