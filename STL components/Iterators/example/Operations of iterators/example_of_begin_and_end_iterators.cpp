#include<iostream>
#include<iterator>
#include<vector>
using namespace std;
/*
    to know more: https://www.geeksforgeeks.org/iterators-c-stl/
                  https://www.geeksforgeeks.org/introduction-iterators-c/
                  https://www.geeksforgeeks.org/the-c-standard-template-library-stl/
                  https://www.javatpoint.com/cpp-iterators
                  https://learn.microsoft.com/en-us/cpp/standard-library/iterators?view=msvc-170
                  https://www.studytonight.com/cpp/stl/
                  https://www.softwaretestinghelp.com/iterators-in-stl/
*/
/*
    Operations of iterators :-
    1. begin() :- This function is used to return the beginning position of the container.
    2. end() :- This function is used to return the after end position of the container.
*/
int main()
{
    vector<int> ar = { 1, 2, 3, 4, 5 };

    // Declaring iterator to a vector
    vector<int>::iterator ptr;

    // Displaying vector elements using begin() and end()
    cout << "The vector elements are : ";
    for (ptr = ar.begin(); ptr < ar.end(); ptr++)
        cout << *ptr << " ";

    return 0;

    //output:
    //  The vector elements are : 1 2 3 4 5
}


