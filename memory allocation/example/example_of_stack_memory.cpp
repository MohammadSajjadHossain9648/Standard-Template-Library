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
int hello()
{
    int a = 100;
    return a;
}
int main()
{
    int a;
    int b = -3;
    int c = 1234;
    int *p = &b;
    int d = hello();
    return 0;

    /*
    how stack work in code; always store like -> type variable_name value
    step 1: store int a
    step 2: store int b -3
    step 3: store int c 1234
    step 4: store int *p which point to step 2
    step 5: store int a 100 which is indicate hello()
    step 6: change location int a 100 which is indicate main()
    */
    /* The following figures show examples of what stack memory looks like when the corresponding code is run:

    step 1 :
            main()
        |           |
        |           |
        |           |
        -------------
        | int a ??? |
        -------------
            stack

    step 2 :
            main()
        |           |
        |           |
        |           |
        -------------
        | int b -3  |
        -------------
        | int a ??? |
        -------------
            stack

    step 3 :
            main()
        |           |
        |           |
        |           |
        -------------
        | int c 1234|
        -------------
        | int b -3  |
        -------------
        | int a ??? |
        -------------
            stack

    step 4 :
            main()
        |           |
        |           |
        |           |
        -------------
        | int *p  .-|----
        -------------   |
        | int c 1234|   |
        -------------   |
        | int b -3  |<---
        -------------
        | int a ??? |
        -------------
            stack

    step 5 :
            hello()
        |           |
        |           |
        |           |
        -------------
        | int a 100 |
        -------------

            main()
        |           |
        |           |
        |           |
        -------------
        | int *p  .-|----
        -------------   |
        | int c 1234|   |
        -------------   |
        | int b -3  |<---
        -------------
        | int a ??? |
        -------------
            stack

    step 6 :
            main()
        |           |
        |           |
        |           |
        -------------
        | int a 100 |
        -------------
        | int *p  .-|----
        -------------   |
        | int c 1234|   |
        -------------   |
        | int b -3  |<---
        -------------
        | int a ??? |
        -------------
            stack


    final step:
        |           |
        |           |
        |           |
        -------------
        | int a 100 |  <----|
        -------------       |
        | int *p  .-|----   |
        -------------   |   |
        | int c 1234|   |   |-> main()
        -------------   |   |
        | int b -3  |<---   |
        -------------       |
        | int a ??? |   <---|
        -------------
            stack
    */
}
