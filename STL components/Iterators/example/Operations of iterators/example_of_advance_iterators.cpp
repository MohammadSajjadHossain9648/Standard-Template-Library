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
    advance() :- This function is used to increment the iterator position till the specified number
    mentioned in its arguments.
*/
int main()
{
    vector<int> ar = { 1, 2, 3, 4, 5 };

    // Declaring iterator to a vector
    vector<int>::iterator ptr = ar.begin();

    // Using advance() to increment iterator position points to 4
    advance(ptr, 3);

    // Displaying iterator position
    cout << "The position of iterator after advancing is : ";
    cout << *ptr << " ";

    return 0;

    //output:
    //  The position of iterator after advancing is : 4
}


