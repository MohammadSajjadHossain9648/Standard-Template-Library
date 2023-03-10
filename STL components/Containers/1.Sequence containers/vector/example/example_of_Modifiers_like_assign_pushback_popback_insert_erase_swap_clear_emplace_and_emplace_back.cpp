#include<iostream>
#include<vector>
using namespace std;
/*
    to know more: https://www.geeksforgeeks.org/the-c-standard-template-library-stl/
                  https://www.studytonight.com/cpp/stl/
                  https://www.simplilearn.com/tutorials/cpp-tutorial/cpp-standard-template-library#:~:text=C%2B%2B%20STL%20(standard%20template%20library)%20is%20a%20software%20library%20for,%2C%20algorithms%2C%20and%20function%20objects.
                  https://www.studytonight.com/cpp/stl/stl-container-vector
*/
/*
    Modifiers:
    1.assign() – It assigns new value to the vector elements by replacing old ones
    & fill() -  fill constructor will give us the ability to construct and initialize a vector with n number
    of elements and assign a value to each element.
    2.push_back() – It push the elements into a vector from the back
    3.pop_back() – It is used to pop or remove elements from a vector from the back.
    4.insert() – It inserts new elements before the element at the specified position
    5.erase() – It is used to remove elements from a container from the specified position or range.
    6.swap() – It is used to swap the contents of one vector with another vector of same type. Sizes may differ.
    7.clear() – It is used to remove all the elements of the vector container
    8.emplace() – It extends the container by inserting new element at position
    9.emplace_back() – It is used to insert a new element into the vector container, the new element is added
    to the end of the vector
*/
int main()
{
    // Assign vector
    vector<int> v;

    // fill the array with 10 five times
    v.assign(5, 10); // same as fill constructor, vector<int> v(5, 10); -> here 5 is size, 10 is value

    cout<<"The vector elements are: ";
    for (auto i = 0; i < v.size(); i++)
        cout<<v[i]<<" ";

    // inserts 15 to the last position
    v.push_back(15);
    int n = v.size();
    cout<<"\nThe last element is: "<<v[n - 1];

    // removes last element
    v.pop_back();

    // prints the vector
    cout<<"\nThe vector elements are: ";
    for (auto i = 0; i < v.size(); i++)
        cout<<v[i]<<" ";

    // inserts 5 at the beginning
    v.insert(v.begin(), 5);

    cout<<"\nThe first element is: "<<v[0];

    // removes the first element
    v.erase(v.begin());

    cout<<"\nThe first element is: "<<v[0];

    // inserts at the beginning
    v.emplace(v.begin(), 5);
    cout<<"\nThe first element is: "<<v[0];

    // Inserts 20 at the end
    v.emplace_back(20);
    n = v.size();
    cout<<"\nThe last element is: "<<v[n - 1];

    // erases the vector
    v.clear();
    cout<<"\nVector size after erase(): "<<v.size();

    // two vector to perform swap
    vector<int> v1, v2;
    v1.push_back(1);
    v1.push_back(2);
    v2.push_back(3);
    v2.push_back(4);

    cout<<"\n\nVector 1: ";
    for (auto i = 0; i < v1.size(); i++)
        cout<<v1[i]<<" ";

    cout<<"\nVector 2: ";
    for (auto i = 0; i < v2.size(); i++)
        cout<<v2[i]<<" ";

    // Swaps v1 and v2
    v1.swap(v2);

    cout<<"\nAfter Swap \nVector 1: ";
    for (auto i = 0; i < v1.size(); i++)
        cout<<v1[i]<<" ";

    cout<<"\nVector 2: ";
    for (auto i = 0; i < v2.size(); i++)
        cout<<v2[i]<<" ";


    //output:
    //    The vector elements are: 10 10 10 10 10
    //    The last element is: 15
    //    The vector elements are: 10 10 10 10 10
    //    The first element is: 5
    //    The first element is: 10
    //    The first element is: 5
    //    The last element is: 20
    //    Vector size after erase(): 0
    //
    //    Vector 1: 1 2
    //    Vector 2: 3 4
    //    After Swap
    //    Vector 1: 3 4
    //    Vector 2: 1 2
}
