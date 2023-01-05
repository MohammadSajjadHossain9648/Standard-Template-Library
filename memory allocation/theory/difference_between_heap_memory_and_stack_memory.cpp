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
    Stack	vs   Heap:
    1.1.Stack provides static memory allocation, i.e., it is used to store the temporary variables.
    1.2.Heap provides dynamic memory allocation. By default, all the global variables are stored in the heap.

    2.1.It is a linear data structure means that elements are stored in the linear manner, i.e., one data after another.
    2.2.It is hierarchical data structure means that the elements are stored in the form of tree.

    3.1.It is used to access the local variables.
    3.2.It is used to access the global variables by default.

    4.1.The size of the stack memory is limited which is dependent on the OS.
    4.2.The size of the memory is not limited.

    5.1.As it is a linear data structure, so data is stored in the contiguous blocks.
    5.2.As it is hierarchical data structure, so elements are stored in the random manner.

    6.1.In stack, the allocation and deallocation are automatically managed.
    6.2.In heap, the memory is manually managed.

    7.1.The implementation of stack can be done in three forms using array, linked list and dynamic memory.
    7.2.The implementation of heap can be done in two forms using arrays and trees.

    8.1.The main issue that occurs with a stack is the shortage of memory because the memory size cannot be changed at
    the runtime. The size of the stack is determined at the compile time.
    8.2.The main issue that occurs with a heap is the memory fragmentation. Here, memory fragmentation means that the
    memory gets wasted.

    9.1.It is of fixed size.
    9.2.It is flexible to use as the size of the heap can vary as per our needs.

    10.1.The access time in stack is faster.
    10.2.The access time in heap is slower.

    11.1.The size of the stack memory is decided by the operating system.
    11.2.The size of the heap memory is decided by the programmers.

    12.1.The scope of the variable cannot be changed.
    12.2.The scope of the variable can be changed.
*/
/*
    When to use the Heap or stack?
    You should use heap when you require to allocate a large block of memory. For example, you want to create a large
    size array or big structure to keep that variable around a long time then you should allocate it on the heap.

    However, If you are working with relatively small variables that are only required until the function using them
    is alive. Then you need to use the stack, which is faster and easier.
*/
int main()
{
}
