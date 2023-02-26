#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;
/*
    to know more: https://www.geeksforgeeks.org/the-c-standard-template-library-stl/
                  https://www.studytonight.com/cpp/stl/
                  https://www.simplilearn.com/tutorials/cpp-tutorial/cpp-standard-template-library#:~:text=C%2B%2B%20STL%20(standard%20template%20library)%20is%20a%20software%20library%20for,%2C%20algorithms%2C%20and%20function%20objects.
                  https://www.studytonight.com/cpp/stl/stl-container-vector
                  https://www.geeksforgeeks.org/iterators-c-stl/
                  https://www.geeksforgeeks.org/std-find-in-cpp/
*/
/*
    Element access:
    1.reference operator [index_no] – Returns a reference to the element at position ‘index_no’ in the vector
    2.at(index_no) – Returns a reference to the element at position ‘index_no’ in the vector
    3.front() – Returns a reference to the first element in the vector
    4.back() – Returns a reference to the last element in the vector
    5.data() – Returns a direct pointer to the memory array used internally by the vector to store its owned elements.
    6.advance() - This function is used to increment the iterator position till the specified number mentioned in
    its arguments.
    7.next() - This function returns the new iterator that the iterator would point after advancing the positions
    mentioned in its arguments.
    8.prev() - This function returns the new iterator that the iterator would point after decrementing the positions
    mentioned in its arguments.
    9.inserter() - This function is used to insert the elements at any position in the container. It accepts 2
    arguments, the container and iterator to position where the elements have to be inserted.
    10.find() - Find content in vector use header #include<bits/stdc++.h>
*/
int main()
{
    vector <int> v = {10,20,30,40,50};

    cout<<"vector <int> v = ";
    for(auto i: v)
    {
        cout<<i<<" ";
    }
    cout<<endl;

    cout<<"Reference operator [index_no] : v[2] = "<<v[2];

    cout<<"\nat : v.at(4) = "<<v.at(4);

    cout<<"\nfront() : v.front() = "<<v.front();

    cout<<"\nback() : v.back() = "<<v.back();

    // pointer to the first element
    int* pos = v.data();
    cout<<"\nThe first element is "<<*pos;


//advance & next & prev
    vector<int> ar = { 1, 2, 3, 4, 5 };

    // Declaring iterator to a vector
    vector<int>::iterator ptr = ar.begin();

    // Using advance() to increment iterator position points to 4
    advance(ptr, 3);

    // Displaying iterator position
    cout<<"\nThe position of iterator after advancing is : "<<*ptr;



    // Declaring iterators to a vector
    vector<int>::iterator ptr2 = ar.begin();
    vector<int>::iterator ptr3 = ar.end();

    // Using next() to return new iterator points to 4
    auto it = next(ptr2, 3);

    // Using prev() to return new iterator points to 3
    auto it1 = prev(ptr3, 3);

    // Displaying iterator position
    cout<<"\nThe position of new iterator using next() is : "<<*it<<" ";

    // Displaying iterator position
    cout<<"\nThe position of new iterator using prev() is : "<<*it1<<" ";




//inserter -> insert another vector inside any of middle index
    vector<int> ar1 = { 1, 2, 3, 4, 5 };
    vector<int> ar2 = {10, 20, 30};

    // Declaring iterator to a vector
    vector<int>::iterator ptr4 = ar1.begin();

    // Using advance to set position
    advance(ptr4, 3);

    // copying 1 vector elements in other using inserter()
    // inserts ar1 after 3rd position in ar
    copy(ar2.begin(), ar2.end(), inserter(ar1,ptr4));

    // Displaying new vector elements
    cout<<"\nThe new vector after inserting elements is : ";
    for (int &x : ar1)
        cout<<x<<" ";




//find
    vector<int> v1 = {10, 20, 30, 10, 40};
    int x = 10;

    cout<<"vector<int> v1 = ";
    for(auto i: v1)
    {
        cout<<i<<" ";
    }
    cout<<endl;

    vector<int>::iterator it;
    it = find (v1.begin(), v1.end(), x);

    if (it != v1.end())
    {
        cout<<"Element "<<x<<" found at position : " ;
        cout<<it - v1.begin()<<" (counting from zero) \n" ;
    }
    else
        cout<<"Element not found.\n\n";

    return 0;



    //output:
    //    vector <int> v = 10 20 30 40 50
    //    Reference operator [index_no] : v[2] = 30
    //    at : v.at(4) = 50
    //    front() : v.front() = 10
    //    back() : v.back() = 50
    //    The first element is 10
    //
    //    The position of iterator after advancing is : 4
    //    The position of new iterator using next() is : 4
    //    The position of new iterator using prev() is : 3
    //    The new vector after inserting elements is : 1 2 3 10 20 30 4 5
    //    vector<int> v1 = 10 20 30 10 40
    //    Element 10 found at position : 0 (counting from zero)
}
