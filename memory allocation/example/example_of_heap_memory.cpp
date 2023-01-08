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
    int *p = new int;
    int *c1 = new int(10);
    int *c2 = c1;
    *c2 = 20;
    cout<<*c1;
    return 0;

    /*
    The following figures show examples of what stack memory looks like when the corresponding code is run:

    step 1 :
            main()
        |           |       -------------
        |           |   |-->|  int  0   |
        |           |   |   -------------
        -------------   |   |           |
        | int* p  .-|----   |           |
        -------------       -------------
            stack               heap


    step 2 :
            main()
        |           |           -------------
        |           |   |---->  |  int  0   |
        |           |   |       -------------
        |           |   |       |           |
        -------------   |       -------------
        | int *c1 .-|---|-----> |  int  10  |
        -------------   |       -------------
        | int* p  .-|----       |           |
        -------------           -------------
            stack                   heap


    step 3 :
            main()
        |           |           -------------
        |           |   |---->  |  int  0   |
        -------------   |       -------------
        | int *c2 .-|---|---    |           |
        -------------   |  |    -------------
        | int *c1 .-|---|-----> |  int  10  |
        -------------   |       -------------
        | int* p  .-|----       |           |
        -------------           -------------
            stack                   heap


    step 4 :
            main()
        |           |           -------------
        |           |   |---->  |  int  0   |
        -------------   |       -------------
        | int *c2 .-|---|---    |           |
        -------------   |  |    -------------
        | int *c1 .-|---|-----> |  int  20  |
        -------------   |       -------------
        | int* p  .-|----       |           |
        -------------           -------------
            stack                   heap





    final step:
            main()
        |           |           -------------
        |           |   |---->  |  int  0   |
        -------------   |       -------------
        | int *c2 .-|---|---    |           |
        -------------   |  |    -------------
        | int *c1 .-|---|-----> |  int  20  |
        -------------   |       -------------
        | int* p  .-|----       |           |
        -------------           -------------
            stack                   heap
    */
}
