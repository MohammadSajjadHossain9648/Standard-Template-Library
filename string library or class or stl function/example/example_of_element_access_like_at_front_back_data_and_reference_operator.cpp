#include<iostream>
#include<string>
using namespace std;
/*
    to know more: https://www.geeksforgeeks.org/stdstring-class-in-c/
                  https://www.geeksforgeeks.org/strings-library-in-cpp-stl/
                  https://cplusplus.com/reference/string/string/
                  https://www.scaler.com/topics/cpp/strings-in-cpp/
*/
/*
    Element access:
    1.reference operator [index_no] – Returns a reference to the element at position ‘index_no’ in the string
    2.at(index_no) – Returns a reference to the element at position ‘index_no’ in the string
    3.front() – Returns a reference to the first element in the string
    4.back() – Returns a reference to the last element in the string
    5.advance() - This function is used to increment the iterator position till the specified number mentioned in
    its arguments.
    6.next() - This function returns the new iterator that the iterator would point after advancing the positions
    mentioned in its arguments.
    7.prev() - This function returns the new iterator that the iterator would point after decrementing the positions
    mentioned in its arguments.
    8.inserter() - This function is used to insert the elements at any position in the container. It accepts 2
    arguments, the container and iterator to position where the elements have to be inserted.

*/
int main()
{
    string s = "i am new";

    cout<<"string s = "<<s;

    cout<<"\nReference operator [index_no] : s[2] = "<<s[3];

    cout<<"\nat : s.at(5) = "<<s.at(5);

    cout<<"\nfront() : s.front() = "<<s.front();

    cout<<"\nback() : s.back() = "<<s.back();


//advance & next & prev
    string ar = "i am new here";

    // Declaring iterator to a vector
    string::iterator ptr = ar.begin();

    // Using advance() to increment iterator position points to 4
    advance(ptr, 3);

    // Displaying iterator position
    cout<<"\nThe position of iterator after advancing is : "<<*ptr;



    // Declaring iterators to a vector
    string::iterator ptr2 = ar.begin();
    string::iterator ptr3 = ar.end();

    // Using next() to return new iterator points to 4
    auto it = next(ptr2, 3);

    // Using prev() to return new iterator points to 3
    auto it1 = prev(ptr3, 3);

    // Displaying iterator position
    cout<<"\nThe position of new iterator using next() is : "<<*it<<" ";

    // Displaying iterator position
    cout<<"\nThe position of new iterator using prev() is : "<<*it1<<" ";




//inserter -> insert another vector inside any of middle index
    string ar1 = "i  new";
    string ar2 = "am";

    // Declaring iterator to a vector
    string::iterator ptr4 = ar1.begin();

    // Using advance to set position
    advance(ptr4, 2);

    // copying 1 vector elements in other using inserter()
    // inserts ar1 after 3rd position in ar
    copy(ar2.begin(), ar2.end(), inserter(ar1,ptr4));

    // Displaying new vector elements
    cout<<"\nThe new vector after inserting elements is : "<<ar1;

    return 0;

    //output:
    //    string s = i am new
    //    Reference operator [index_no] : s[2] = m
    //    at : s.at(5) = n
    //    front() : s.front() = i
    //    back() : s.back() = w
    //    The position of iterator after advancing is : m
    //    The position of new iterator using next() is : m
    //    The position of new iterator using prev() is : e
    //    The new vector after inserting elements is : i am new
}
