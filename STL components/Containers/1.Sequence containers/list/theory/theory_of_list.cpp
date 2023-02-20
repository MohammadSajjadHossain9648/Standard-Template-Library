#include<iostream>
using namespace std;
/*
    to know more: https://www.geeksforgeeks.org/the-c-standard-template-library-stl/
                  https://www.studytonight.com/cpp/stl/
                  https://www.simplilearn.com/tutorials/cpp-tutorial/cpp-standard-template-library#:~:text=C%2B%2B%20STL%20(standard%20template%20library)%20is%20a%20software%20library%20for,%2C%20algorithms%2C%20and%20function%20objects.
*/
/*
    Lists are sequence containers that allow non-contiguous memory allocation. As compared to list,
    the list has slow traversal, but once a position has been found, insertion and deletion are quick.
    Normally, when we say a List, we talk about a doubly linked list. For implementing a singly linked list,
    we use a forward list.


    Iterators:
    1.begin() – Returns an iterator pointing to the first element in the list
    & fill() -  fill constructor will give us the ability to construct and initialize a list with n number
    of elements and assign a value to each element.
    2.end() – Returns an iterator pointing to the theoretical element that follows the last element in the list
    3.rbegin() – Returns a reverse iterator pointing to the last element in the list (reverse beginning).
    It moves from last to first element
    4.rend() – Returns a reverse iterator pointing to the theoretical element preceding the first element in
    the list (considered as reverse end)
    5.cbegin() – Returns a constant iterator pointing to the first element in the list.
    6.cend() – Returns a constant iterator pointing to the theoretical element that follows the last element
    in the list.
    7.crbegin() – Returns a constant reverse iterator pointing to the last element in the list (reverse beginning).
    It moves from last to first element
    8.crend() – Returns a constant reverse iterator pointing to the theoretical element preceding the first element
    in the list (considered as reverse end)


    Capacity:
    1.size() – Returns the number of elements in the list.
    2.max_size() – Returns the maximum number of elements that the list can hold.
    3.resize(n) – Resizes the container so that it contains ‘n’ elements.
    4.empty() – Returns whether the container is empty.


    Element access:
    1.front() – Returns a reference to the first element in the list
    2.back() – Returns a reference to the last element in the list /prints the last element of list


    Modifiers:
    1.assign() – It assigns new value to the list elements by replacing old ones
    & fill() -  fill constructor will give us the ability to construct and initialize a list with n number
    of elements and assign a value to each element.
    2.push_front() - This function is used to insert the element at the first position on forward_list. The value
    from this function is copied to the space before first element in the container. The size of forward_list
    increases by 1.
    3.push_back() – It push the elements into a list from the back
    4.pop_front() - This function is used to delete the first element of the list.
    5.pop_back() – It is used to pop or remove elements from a list from the back.
    6.insert() – It inserts new elements before the element at the specified position
    7.unique() - It remove all duplicates in the list
    8.erase() – It is used to remove elements from a container from the specified position or range.
    9.swap() – It is used to swap the contents of one list with another list of same type. Sizes may differ.
    10.reverse() - It is used to swap the contents of one list
    11.clear() – It is used to remove all the elements of the list container
    12.remove() - Removes all the elements from the list, which are equal to given element.
    13.remove_if() - Used to remove all the values from the list that correspond true to the predicate or condition
    given as parameter to the function.
    14.emplace() – It extends the container by inserting new element at position
    15.emplace_front() – It is used to insert a new element into the list container, the new element is added
    to the begining of the list
    16.emplace_back() – It is used to insert a new element into the list container, the new element is added
    to the end of the list
    17.splice() - It transfers the elements from one list to another.
*/
int main()
{

}
