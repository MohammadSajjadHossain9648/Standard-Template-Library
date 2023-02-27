#include<iostream>
#include<stack>
using namespace std;
/*
    to know more: https://www.geeksforgeeks.org/the-c-standard-template-library-stl/
                  https://www.studytonight.com/cpp/stl/
                  https://www.simplilearn.com/tutorials/cpp-tutorial/cpp-standard-template-library#:~:text=C%2B%2B%20STL%20(standard%20template%20library)%20is%20a%20software%20library%20for,%2C%20algorithms%2C%20and%20function%20objects.
                  https://www.softwaretestinghelp.com/stack-in-cpp/
                  https://www.programiz.com/cpp-programming/stack
*/
/*
    Stacks are a type of container adaptors with LIFO(Last In First Out) type of working, where a new element
    is added at one end (top) and an element is removed from that end only. Stack uses an encapsulated object
    of either vector or deque (by default) or list (sequential container class) as its underlying container,
    providing a specific set of member functions to access its elements.

    remember that: The stack data structure follows the LIFO (Last In First Out) principle.
    That is, the element added last will be removed first.


    Capacity:
    1.size() – Returns the number of elements in the stack.
    2.empty() – Returns whether the stack is empty.


    Element access:
    1.top() – Returns a reference to the top most element(last input element) of the stack
    2.value_type – Represents the type of object stored as an element in a stack. It acts as a synonym
    for the template parameter.


    Modifiers:
    1.push(g) – Adds the element ‘g’ at the top of the stack.
    2.pop() – Deletes the top most element(last input element) of the stack.
    3.swap() – It is used to swap the contents of one stack with another stack of same type.
    Sizes may differ.
    4.emplace() – Insert a new element into the stack container, the new element is added to the end
    of the stack.
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
