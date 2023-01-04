#include<iostream>
using namespace std;
/*
    to know more: https://www.geeksforgeeks.org/stack-vs-heap-memory-allocation/
                  https://www.guru99.com/stack-vs-heap.html
                  https://www.javatpoint.com/dynamic-memory-allocation-in-cpp
                  https://courses.engr.illinois.edu/cs225/fa2022/resources/stack-heap/
                  https://www.learncpp.com/cpp-tutorial/the-stack-and-the-heap/
                  https://www.softwaretestinghelp.com/stack-vs-heap/
                  https://www.makeuseof.com/stack-and-heap-memory-allocation/
                  https://www.javatpoint.com/stack-vs-heap
                  https://www.geeksforgeeks.org/what-is-memory-leak-how-can-we-avoid/
*/
/*
    What is a Stack?
    A stack is a special area of computer’s memory which stores temporary variables created by a function. In stack,
    variables are declared, stored and initialized during runtime.

    It is a temporary storage memory. When the computing task is complete, the memory of the variable will be
    automatically erased. The stack section mostly contains methods, local variable, and reference variables.
*/
/*
    Stack-Based Memory Allocation
    Stack memory gets allocated to adjacent blocks or chunks of memory. Since this allocation of memory happens in
    a function called stack, it is named as stack memory allocation.

    Therefore, the popular use of stack at the architecture level is memory allocation. A stack is that part of a
    computer memory that is used for contiguous, temporary memory allocation. Stack has a fixed starting location,
    but variable size.

    As mentioned above, this memory allocation is temporary in nature and stores local variables along with those
    arguments which are passed through a function along with their return addresses. All the data belonging to the
    function which completes execution is quickly removed from the stack.

    What this really means is that the value stored in stack memory is available only until the execution is still
    running and it will automatically erase the stack memory after the task is completed.
*/
/*
    Stack Overflow Error
    As the name suggests, stack overflow is a situation in which a program draws more memory as compared to the size
    of the stack. This results in the failure of the program. In a situation when, for a recurring call, there is no
    specific base condition, as soon as the memory is filled up, a stack overflow error takes place.

    One of the major shortcomings of the stack is that it is not possible to resize variables and memory allocation
    is done in one block. The size is limited depending on the OS in use and cannot be altered as they are fixed.
*/
/*
    Advantages
    1.Helps you to manage the data in a Last In First Out(LIFO) method which is not possible with Linked list and array.
    2.When a function is called the local variables are stored in a stack, and it is automatically destroyed once returned.
    3.A stack is used when a variable is not used outside that function.
    4.It allows you to control how memory is allocated and deallocated.
    5.Stack automatically cleans up the object.
    6.Not easily corrupted
    7.Variables cannot be resized.



    Disadvantages
    1.Stack memory is very limited.
    2.Creating too many objects on the stack can increase the risk of stack overflow.
    3.Random access is not possible.
    4.Variable storage will be overwritten, which sometimes leads to undefined behavior of the function or program.
    5.The stack will fall outside of the memory area, which might lead to an abnormal termination.
*/
/*
    Important Features
    Here are some important features of the stack:

    1.Memory allocation is temporary and limits data accessibility to the point where the method that contains the
    data is still running.
    2.Memory allocation and de-allocation are automatic at the completion of the execution of the corresponding method.
    3.In case the stack memory is completely full, the error Java .lang. Stack OverFlow error occurs.
    4.Stack memory allocation is comparatively safer than heap memory allocation, as the stored data is accessible
    only by the owner thread.
    5.The process of memory allocation and deallocation is quicker when compared with the heap.
    6.Heap storage has more storage size compared to stack.
*/
/*
    Benefits
    These include:
    1.Stack memory offers multiple advantages to the programmer at the time of compilation of the code.
    2.The process of allocation and deallocation of memory can be controlled.
    3.The capability to manage data in LIFO (Last In First Out) gives the stack an edge over the heap.
    4.Stack offers auto clean-up objects in memory and variables cannot be resized.
    5.The local variables are stored in the “called function” in the stack and are quickly terminated on return.

    But like every coin has another side, the stack has some disadvantages as well.
*/
/*
    conclusion
    These have been discussed below:
    1.Stack has a limited size for memory, which makes it unsuitable in case of the requirement of large memory size.
    2.During the compilation of code, stack overflow can happen if the number of objects exceeds the size of the stack.
*/
int main()
{
}
