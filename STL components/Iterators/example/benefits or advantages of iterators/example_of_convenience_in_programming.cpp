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
/*
    Convenience in programming:
    It is better to use iterators to iterate through the contents of containers as if we will not use
    an iterator and access elements using [ ] operator, then we need to be always worried about the size
    of the container, whereas with iterators we can simply use member function end() and iterate through
    the contents without having to keep anything in mind.
*/
int main()
{
    // Declaring a vector
    vector<int> v = { 1, 2, 3 };

    // Declaring an iterator
    vector<int>::iterator i;

    int j;

    cout << "Without iterators = ";

    // Accessing the elements without using iterators
    for (j = 0; j < 3; ++j)
    {
        cout << v[j] << " ";
    }

    cout << "\nWith iterators = ";

    // Accessing the elements using iterators
    for (i = v.begin(); i != v.end(); ++i)
    {
        cout << *i << " ";
    }

    // Adding one more element to vector
    v.push_back(4);

    cout << "\nWithout iterators = ";

    // Accessing the elements without using iterators
    for (j = 0; j < 4; ++j)
    {
        cout << v[j] << " ";
    }

    cout << "\nWith iterators = ";

    // Accessing the elements using iterators
    for (i = v.begin(); i != v.end(); ++i)
    {
        cout << *i << " ";
    }

    return 0;

    // Output:
    //    Without iterators = 1 2 3
    //    With iterators = 1 2 3
    //    Without iterators = 1 2 3 4
    //    With iterators = 1 2 3 4

    /*
    Explanation: As can be seen in the above code that without using iterators we need to keep track of the
    total elements in the container. In the beginning there were only three elements, but after one more
    element was inserted into it, accordingly the for loop also had to be amended, but using iterators,
    both the time the for loop remained the same. So, iterator eased our task.
    */
}


