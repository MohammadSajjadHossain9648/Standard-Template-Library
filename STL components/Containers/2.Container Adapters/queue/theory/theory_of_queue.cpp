#include<iostream>
#include<queue>
using namespace std;
/*
    to know more: https://www.geeksforgeeks.org/the-c-standard-template-library-stl/
                  https://www.studytonight.com/cpp/stl/
                  https://www.simplilearn.com/tutorials/cpp-tutorial/cpp-standard-template-library#:~:text=C%2B%2B%20STL%20(standard%20template%20library)%20is%20a%20software%20library%20for,%2C%20algorithms%2C%20and%20function%20objects.
                  https://www.softwaretestinghelp.com/queue-in-cpp/
                  https://www.programiz.com/cpp-programming/queue
*/
/*
    Queues are a type of container adaptors that operate in a first in first out (FIFO) type of arrangement.
    Elements are inserted at the back (end) and are deleted from the front. Queues use an encapsulated object
    of deque or list (sequential container class) as its underlying container, providing a specific set of member
    functions to access its elements.

    remember that: The queue data structure follows the FIFO (First In First Out) principle.
    That is, the element added first will be removed first.


    Capacity:
    1.size() – Returns the number of elements in the queue.
    2.empty() – Returns whether the queue is empty.


    Element access:
    1.front() – Returns a reference to the first element in the queue
    2.back() – Returns a reference to the last element in the queue


    Modifiers:
    1.push() – Adds the element at the end of the queue.
    2.pop() – Deletes the first element of the queue.
    3.swap() – It is used to swap the contents of one queue with another queue of same type. Sizes may differ.
    4.emplace() – Insert a new element into the queue container, the new element is added to the end of the queue.
*/
int main()
{
    /*
    The time complexity and definition of the following functions are as follows:
        empty()	    O(1)
        size()	    O(1)
        emplace()	O(1)
        front()	    O(1)
        back()	    O(1)
        push(g) 	O(1)
        pop() 	    O(1)
    */
}
