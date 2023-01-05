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
    What is Heap?
    The heap is a memory used by programming languages to store global variables. By default, all global variable
    are stored in heap memory space. It supports Dynamic memory allocation.

    The heap is not managed automatically for you and is not as tightly managed by the CPU. It is more like a
    free-floating region of memory.

    note: always deallocate or delete the heap memory after complete the program.
    like an example:
        int * arr = new int[5];
        delete arr; //same as free(arr);
*/
/*
    Heap Memory Allocation
    The allocation of heap memory takes place at the time of execution of the instructions of the programmer. The
    term heap refers to a collection of memory that can be allocated and deallocated by the programmer. Therefore,
    the heap has no relation to the heap data structure.

    It is important to understand that while the construction of an object happens in a heap, however, the corresponding
    information for these objects is saved in stack memory. Heap memory often suffers from security issues due to
    the visibility and accessibility of data stored in all threads.

    This, sometimes, can lead to a situation of memory leak in the application if the programmer misses handling
    heap memory with care.

    In heap, data is stored in a hierarchical manner which leads to slow access as compared to stack. Do you
    remember how the old platter hard drives used to get clogged due to fragmentation? Something similar happens
    with heap memory as well. Fragmentation leads to the clogging of heap memory.

    One of the major advantages of heap memory lies in the fact that there is no limitation on the size of the
    memory and it also allows for resizing of variables as and when needed.

    Heap memory is stored randomly, and that explains the slow speed of access because the data will have to be
    pulled from multiple random places on the chip.
*/
/*
    Advantages
    1.Heap helps you to find the greatest and minimum number
    2.Garbage collection runs on the heap memory to free the memory used by the object.
    3.Heap method also used in the Priority Queue.
    4.It allows you to access variables globally.
    5.Heap doesn’t have any limit on memory size.

    So, are you wondering if the heap is the best choice? Hold on! It also has some disadvantages which are important
    to consider as they impact the speed and performance of the program.



    Disadvantages of Heap
    1.It can provide the maximum memory an OS can provide
    2.It takes more time to compute.
    3.Memory management is more complicated in heap memory as it is used globally.
    4.It takes too much time in execution compared to the stack.

*/
int main()
{
    /*
    In C, there are the below-mentioned functions are used for the purpose of allocation and deallocation of
    memory on the heap.
        malloc ( )
        calloc ( )
        realloac ( )
        free ( )

    It is important to note that these functions will have to be used extremely carefully to avoid any memory leaks.

    In C++, these are the functions namely:
        new ( )
        delete ( )
    */

    /* dynamically memory allocation or access heap memory:
    int * arr = new int[5];
    free(arr);
    */

    /* What is Memory Leak?
    Memory leak occurs when programmers create a memory in heap and forget to delete it.

    The consequences of memory leak is that it reduces the performance of the computer by reducing the amount of
    available memory. Eventually, in the worst case, too much of the available memory may become allocated and all
    or part of the system or device stops working correctly, the application fails, or the system slows down vastly .

    Memory leaks are particularly serious issues for programs like daemons and servers which by definition never
    terminate.

    example:
    int * arr = new int[5];



    solution:
    To avoid memory leaks, memory allocated on heap should always be freed or free when no longer needed.

    example:
    int * arr = new int[5];
    delete arr; //same as free(arr);
    */
}
