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
    1. next() :- This function returns the new iterator that the iterator would point after advancing
    the positions mentioned in its arguments.
    2. prev() :- This function returns the new iterator that the iterator would point after decrementing
    the positions mentioned in its arguments.
*/
int main()
{
    vector<int> ar = { 1, 2, 3, 4, 5 };

    // Declaring iterators to a vector
    vector<int>::iterator ptr = ar.begin();
    vector<int>::iterator ftr = ar.end();


    // Using next() to return new iterator
    // points to 4
    auto it = next(ptr, 3);

    // Using prev() to return new iterator
    // points to 3
    auto it1 = prev(ftr, 3);

    // Displaying iterator position
    cout << "The position of new iterator using next() is : ";
    cout << *it << " ";
    cout << endl;

    // Displaying iterator position
    cout << "The position of new iterator using prev() is : ";
    cout << *it1 << " ";
    cout << endl;

    return 0;

    //output:
    //    The position of new iterator using next() is : 4
    //    The position of new iterator using prev() is : 3

}


