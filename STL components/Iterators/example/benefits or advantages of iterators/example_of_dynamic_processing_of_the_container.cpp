#include<iostream>
#include<vector>
using namespace std;
/*
    to know more: https://www.geeksforgeeks.org/introduction-iterators-c/
                  https://www.geeksforgeeks.org/the-c-standard-template-library-stl/
                  https://www.javatpoint.com/cpp-iterators
                  https://www.geeksforgeeks.org/iterators-c-stl/
                  https://learn.microsoft.com/en-us/cpp/standard-library/iterators?view=msvc-170
                  https://www.studytonight.com/cpp/stl/
                  https://www.softwaretestinghelp.com/iterators-in-stl/
*/
int main()
{
    // Declaring a vector
    vector<int> v = { 1, 2, 3 };

    // Declaring an iterator
    vector<int>::iterator i;

    int j;

    // Inserting element using iterators
    for (i = v.begin(); i != v.end(); ++i)
    {
        if (i == v.begin())
        {
            i = v.insert(i, 5);
            // inserting 5 at the beginning of v
        }
    }

    // v contains 5 1 2 3

    // Deleting a element using iterators
    for (i = v.begin(); i != v.end(); ++i)
    {
        if (i == v.begin() + 1)
        {
            i = v.erase(i);
            // i now points to the element after the
            // deleted element
        }
    }

    // v contains 5 2 3

    // Accessing the elements using iterators
    for (i = v.begin(); i != v.end(); ++i)
    {
        cout << *i << " ";
    }

    return 0;

    // Output: 5 2 3
    /*
    Explanation: As seen in the above code, we can easily and dynamically add and remove elements
    from the container using iterator, however, doing the same without using them would have been
    very tedious as it would require shifting the elements every time before insertion and after deletion.
    */
}


