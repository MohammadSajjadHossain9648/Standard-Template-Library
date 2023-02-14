#include<iostream>
#include<deque>
using namespace std;
/*
    to know more: https://www.geeksforgeeks.org/the-c-standard-template-library-stl/
                  https://www.studytonight.com/cpp/stl/
                  https://www.simplilearn.com/tutorials/cpp-tutorial/cpp-standard-template-library#:~:text=C%2B%2B%20STL%20(standard%20template%20library)%20is%20a%20software%20library%20for,%2C%20algorithms%2C%20and%20function%20objects.
                  https://iq.opengenus.org/initialize-deque-in-cpp-stl/
*/
/*
    before start, always remember that vector and deque is same type.

    Double-ended queues are sequence containers with the feature of expansion and contraction on both ends.
    They are similar to vectors, but are more efficient in case of insertion and deletion of elements. Unlike
    vectors, contiguous storage allocation may not be guaranteed.
    Double Ended Queues are basically an implementation of the data structure double-ended queue. A queue
    data structure allows insertion only at the end and deletion from the front. This is like a queue in
    real life, wherein people are removed from the front and added at the back. Double-ended queues are
    a special case of queues where insertion and deletion operations are possible at both the ends.
    The functions for deque are same as vector, with an addition of push and pop operations for both front and back.


    Iterators:
    1.begin() – Returns an iterator pointing to the first element in the deque
    2.end() – Returns an iterator pointing to the theoretical element that follows the last element in the deque
    3.rbegin() – Returns a reverse iterator pointing to the last element in the deque (reverse beginning).
    It moves from last to first element
    4.rend() – Returns a reverse iterator pointing to the theoretical element preceding the first element in
    the deque (considered as reverse end)
    5.cbegin() – Returns a constant iterator pointing to the first element in the deque.
    6.cend() – Returns a constant iterator pointing to the theoretical element that follows the last element
    in the deque.
    7.crbegin() – Returns a constant reverse iterator pointing to the last element in the deque (reverse beginning).
    It moves from last to first element
    8.crend() – Returns a constant reverse iterator pointing to the theoretical element preceding the first element
    in the deque (considered as reverse end)


    Capacity:
    1.size() – Returns the number of elements in the deque.
    2.max_size() – Returns the maximum number of elements that the deque can hold.
    3.resize(n) – Resizes the container so that it contains ‘n’ elements.
    4.empty() – Returns whether the container is empty.
    5.shrink_to_fit() – Reduces the capacity of the container to fit its size and destroys all elements beyond
    the capacity.
    6.reserve() – Requests that the deque capacity be at least enough to contain n elements.


    Element access:
    1.reference operator [index_no] – Returns a reference to the element at position ‘index_no’ in the deque
    2.at(index_no) – Returns a reference to the element at position ‘index_no’ in the deque
    3.front() – Returns a reference to the first element in the deque
    4.back() – Returns a reference to the last element in the deque


    Modifiers:
    1.assign() – It assigns new value to the deque elements by replacing old ones
    & fill() -  fill constructor will give us the ability to construct and initialize a deque with n number
    of elements and assign a value to each element.
    2.push_back() – It push the elements into a deque from the back
    3.pop_back() – It is used to pop or remove elements from a deque from the back.
    4.insert() – It inserts new elements before the element at the specified position
    5.erase() – It is used to remove elements from a container from the specified position or range.
    6.swap() – It is used to swap the contents of one deque with another deque of same type. Sizes may differ.
    7.clear() – It is used to remove all the elements of the deque container
    8.emplace() – It extends the container by inserting new element at position
    9.emplace_front() – It is used to insert a new element into the list container, the new element is added
    to the begining of the list
    10.emplace_back() – It is used to insert a new element into the deque container, the new element is added
    to the end of the deque
    11.move() - move constructor will give us the ability to construct a new deque and initialize with elements
    from another deque. This initialization technique gives us a linear time complexity of 0(n).
    12.copy() - copy constructor will give us the ability to construct a new deque and initialize it with a copy
    of elements present in another existing deque. This initialization technique gives us a linear time complexity
    of 0(n).
    13.range() - range constructor will give us the ability to construct a deque and initialize it with elements
    that are in a range between first to last using {}. This initialization technique gives us a linear time
    complexity of 0(n).
*/
int main()
{
    /*
    The time complexities for doing various operations on deques are-
        Accessing Elements- O(1)
        Insertion or removal of elements- O(N)
        Insertion or removal of elements at start or end- O(1)
    */
}
