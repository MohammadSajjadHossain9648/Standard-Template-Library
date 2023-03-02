#include<iostream>
#include<queue>
using namespace std;
/*
    to know more: https://www.geeksforgeeks.org/the-c-standard-template-library-stl/
                  https://www.studytonight.com/cpp/stl/
                  https://www.simplilearn.com/tutorials/cpp-tutorial/cpp-standard-template-library#:~:text=C%2B%2B%20STL%20(standard%20template%20library)%20is%20a%20software%20library%20for,%2C%20algorithms%2C%20and%20function%20objects.
                  https://www.softwaretestinghelp.com/priority_queue-in-cpp/
                  https://www.programiz.com/cpp-programming/priority-queue
*/
/*
    Priority queues are a type of container adapters, specifically designed such that the first element
    of the queue is either the greatest or the smallest of all elements in the queue and elements are in
    nonincreasing order (hence we can see that each element of the queue has a priority {fixed order}).
    However in C++ STL, by default, the top element is always the greatest element. We can also change it
    to the smallest element at the top. Priority queues are built on the top to the max heap and uses array
    or vector as an internal structure.

    remember that: priority_queue is just like a normal queue except the element removed from the queue
    is always the greatest among all the elements in the queue, thus this container is usually used to
    replicate Max Heap in C++. Elements can be inserted at any order and it have O(log(n)) time complexity
    for insertion.
    And also, The queue data structure follows the FIFO (First In First Out) principle. That is, the element
    added first as priority basis (which is biggest element) will be removed first.

    Capacity:
    1.size() – Returns the number of elements in the priority_queue.
    2.empty() – Returns whether the priority_queue is empty.


    Element access:
    1.top() – Returns a reference to the topmost element of the priority_queue.
    2.value_type – Represents the type of object stored as an element in a priority_queue. It acts as a synonym
    for the template parameter.


    Modifiers:
    1.push() – Adds the element at the end of the priority_queue by decreasing order.
    2.pop() – Deletes the topmost/first element(greatest element) of the priority_queue.
    3.swap() – It is used to swap the contents of one priority_queue with another priority_queue of same type.
    Sizes may differ.
    4.emplace() – Insert a new element into the priority_queue container, the new element is added to the end
    of the priority_queue.
*/
int main()
{
    /*
    The time complexity and definition of the following functions are as follows:
        empty()	    O(1)
        size()	    O(1)
        emplace()	O(1)
        top()	    O(1)
        push(g) 	O(1)
        pop() 	    O(1)
    */
}
