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
    Vectors are the same as dynamic arrays with the ability to resize itself automatically when an element
    is inserted or deleted, with their storage being handled automatically by the container. Vector elements are
    placed in contiguous storage so that they can be accessed and traversed using iterators. In vectors, data is
    inserted at the end. Inserting at the end takes differential time, as sometimes the array may need to be extended.
    Removing the last element takes only constant time because no resizing happens. Inserting and erasing at the
    beginning or in the middle is linear in time.


    Iterators:
    1.begin() – Returns an iterator pointing to the first element in the vector
    2.end() – Returns an iterator pointing to the theoretical element that follows the last element in the vector
    3.rbegin() – Returns a reverse iterator pointing to the last element in the vector (reverse beginning).
    It moves from last to first element
    4.rend() – Returns a reverse iterator pointing to the theoretical element preceding the first element in
    the vector (considered as reverse end)
    5.cbegin() – Returns a constant iterator pointing to the first element in the vector.
    6.cend() – Returns a constant iterator pointing to the theoretical element that follows the last element
    in the vector.
    7.crbegin() – Returns a constant reverse iterator pointing to the last element in the vector (reverse beginning).
    It moves from last to first element
    8.crend() – Returns a constant reverse iterator pointing to the theoretical element preceding the first element
    in the vector (considered as reverse end)


    Capacity:
    1.size() – Returns the number of elements in the vector.
    2.max_size() – Returns the maximum number of elements that the vector can hold.
    3.capacity() – Returns the size of the storage space currently allocated to the vector expressed as number
    of elements.
    4.resize(n) – Resizes the container so that it contains ‘n’ elements.
    5.empty() – Returns whether the container is empty.
    6.shrink_to_fit() – Reduces the capacity of the container to fit its size and destroys all elements beyond
    the capacity.
    7.reserve() – Requests that the vector capacity be at least enough to contain n elements.


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
    /*
    The time complexity for doing various operations on vectors is-

    Random access – constant O(1)
    Insertion or removal of elements at the end – constant O(1)
    Insertion or removal of elements – linear in the distance to the end of the vector O(N)
    Knowing the size – constant O(1)
    Resizing the vector- Linear O(N)
    */
}
