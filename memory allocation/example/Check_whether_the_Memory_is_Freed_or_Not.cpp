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
int main()
{
    //allocate or initialize in the heap memory or dynamically memory allocation
    int *num = new int();   //same as int *num = new int;

    if(num == NULL)
    {
        cout<<"Memory Is Insuffficient\n";
    }
    else
    {
        //deallocate or delete in the heap memory
        delete num; //same as free(num);
        cout<<"memory is freed or free.";
    }

    //output: memory is freed or free.
}
