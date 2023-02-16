#include<iostream>
using namespace std;
/*
    to know more: https://www.geeksforgeeks.org/the-c-standard-template-library-stl/
                  https://www.studytonight.com/cpp/stl/
                  https://www.simplilearn.com/tutorials/cpp-tutorial/cpp-standard-template-library#:~:text=C%2B%2B%20STL%20(standard%20template%20library)%20is%20a%20software%20library%20for,%2C%20algorithms%2C%20and%20function%20objects.

*/
/*
    Forward list in STL implements singly linked list. Introduced from C++11, forward list are more useful than
    other containers in insertion, removal, and moving operations (like sort) and allow time constant insertion
    and removal of elements.
    It differs from the list by the fact that the forward list keeps track of the location of only the next element
    while the list keeps track of both the next and previous elements, thus increasing the storage space required
    to store each element. The drawback of a forward list is that it cannot be iterated backward and its
    individual elements cannot be accessed directly.
    Forward List is preferred over the list when only forward traversal is required (same as the singly linked list
    is preferred over doubly linked list) as we can save space. Some example cases are, chaining in hashing,
    adjacency list representation of the graph, etc.


    Iterators:
    1.begin() – Returns an iterator pointing to the first element in the forward_list
    2.end() – Returns an iterator pointing to the theoretical element that follows the last element in the forward_list
    3.cbegin() – Returns a constant iterator pointing to the first element in the forward_list.
    4.cend() – Returns a constant iterator pointing to the theoretical element that follows the last element
    in the forward_list.


    Capacity:
    1.max_size() – Returns the maximum number of elements that the forward_list can hold.
    2.resize(n) – Resizes the container so that it contains ‘n’ elements.
    3.empty() – Returns whether the container is empty.


    Element access:
    1.front() – Returns a reference to the first element in the forward_list


    Modifiers:
    1.assign() – It assigns new value to the forward_list elements by replacing old ones
    & fill() -  fill constructor will give us the ability to construct and initialize a forward_list with n number
    of elements and assign a value to each element.
    2.push_front() - This function is used to insert the element at the first position on forward_list. The value
    from this function is copied to the space before first element in the container. The size of forward_list
    increases by 1.
    3.emplace_front() - This function is similar to the previous function but in this no copying operation occurs,
    the element is created directly at the memory before the first element of the forward_list.
    4.pop_front() - This function is used to delete the first element of the list.
    5.insert_after() - This function gives us a choice to insert elements at any position in forward_list. The
    arguments in this function are copied at the desired position.
    6.emplace_after() - This function also does the same operation as the above function but the elements are
    directly made without any copy operation.
    7.erase_after() - This function is used to erase elements from a particular position in the forward_list. There
    are two variants of ‘erase after’ function.
    8.before_begin() - Returns an iterator that points to the position before the first element of the forward_list.
    9.cbefore_begin() - Returns a constant random access iterator which points to the position before the first element
    of the forward_list.
    10.reverse() - It is used to swap the contents of one list
    11.unique() - It remove all duplicates in the list
    12.clear() – It is used to remove all the elements of the forward_list container
    13.remove() - Removes all the elements from the list, which are equal to given element.
    14.remove_if() - Used to remove all the values from the list that correspond true to the predicate or condition
    given as parameter to the function.
    15.splice_after() - This function transfers elements from one forward_list to other.
*/
int main()
{

}
