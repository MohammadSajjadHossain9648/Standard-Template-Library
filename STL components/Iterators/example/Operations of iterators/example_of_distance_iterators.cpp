#include<iostream>
#include<iterator>
#include<vector>
using namespace std;
/*
    to know more: https://www.studytonight.com/cpp/stl/stl-operations-on-iterators
                  https://www.geeksforgeeks.org/iterators-c-stl/
                  https://www.geeksforgeeks.org/introduction-iterators-c/
                  https://www.geeksforgeeks.org/the-c-standard-template-library-stl/
                  https://www.javatpoint.com/cpp-iterators
                  https://learn.microsoft.com/en-us/cpp/standard-library/iterators?view=msvc-170
                  https://www.studytonight.com/cpp/stl/
                  https://www.softwaretestinghelp.com/iterators-in-stl/
*/
/*
    Operations of iterators :-
    distance(): It will return the number of elements or we can say distance between the first and the last iterator.
*/
int main()
{
    vector<int> ar = { 1, 2, 3, 4, 5 };

    // Declaring iterator to a vector
    vector<int>::iterator i,j;
    i = ar.begin();
    j = ar.end();

    // Displaying iterator distance of this array
    cout << "The total number of elements after distancing is : ";
    cout << distance(i,j) << " ";

    return 0;

    //output:
    //  The total number of elements after distancing is : 5
}


