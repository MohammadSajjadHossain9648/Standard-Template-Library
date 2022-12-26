#include<iostream>
using namespace std;
/*
    to know more: https://www.geeksforgeeks.org/the-c-standard-template-library-stl/
                  https://www.geeksforgeeks.org/templates-cpp/
                  https://www.geeksforgeeks.org/c-plus-plus-gq/templates-gq/
                  https://www.geeksforgeeks.org/template-specialization-c/
*/
/*
    A template is a simple yet very powerful tool in C++. The simple idea is to pass data type as a parameter
    so that we don’t need to write the same code for different data types. For example, a software company may
    need to sort() for different data types. Rather than writing and maintaining multiple codes, we can write
    one sort() and pass data type as a parameter.
    C++ adds two new keywords to support templates: ‘template’ and ‘typename’. The second keyword can always
    be replaced by the keyword ‘class’.
*/
/*
    How Do Templates Work?
    Templates are expanded at compiler time. This is like macros. The difference is, that the compiler does
    type checking before template expansion. The idea is simple, source code contains only function/class,
    but compiled code may contain multiple copies of the same function/class.

    Function Templates:
    We write a generic function that can be used for different data types. Examples of
    function templates are sort(), max(), min(), printArray().
    note: Function templates allow the programmer to write a generic function which is independent of data type.
    Using function templates we can reduces the size of the code and makes the maintenance code easy.
    source: https://www.geeksforgeeks.org/template-specialization-c/


    Class Templates:
    Class Templates like function templates, class templates are useful when a class defines something that
    is independent of the data type. Can be useful for classes like LinkedList, BinaryTree, Stack, Queue, Array, etc.

*/
int main()
{
}
