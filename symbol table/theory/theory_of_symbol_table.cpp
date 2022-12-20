#include<iostream>
using namespace std;
/*
    to know more: https://www.geeksforgeeks.org/introduction-of-compiler-design/
                  https://www.geeksforgeeks.org/phases-of-a-compiler/
                  https://www.geeksforgeeks.org/symbol-table-compiler/
                  https://www.geeksforgeeks.org/cpp-program-to-implement-symbol-table/#:~:text=A%20Symbol%20table%20is%20a,%2Dnumber%20of%20occurrence%2C%20etc.

*/
/*
    before start -> read above all geeksforgeeks links. and understand the compiler theory.
*/
/*
    Symbol Table is an important data structure created and maintained by the compiler in order to keep track of
    semantics of variables i.e. it stores information about the scope and binding information about names, information
    about instances of various entities such as variable and function names, classes, objects, etc.

    1.It is built-in lexical and syntax analysis phases.
    2.The information is collected by the analysis phases of the compiler and is used by the synthesis phases
    of the compiler to generate code.
    3.It is used by the compiler to achieve compile-time efficiency.
    4.It is used by various phases of the compiler as follows:-
        4.1.Lexical Analysis: Creates new table entries in the table, for example like entries about tokens.
        4.2.Syntax Analysis: Adds information regarding attribute type, scope, dimension, line of reference, use,
        etc in the table.
        4.3.Semantic Analysis: Uses available information in the table to check for semantics i.e. to verify
        that expressions and assignments are semantically correct(type checking) and update it accordingly.
        4.4.Intermediate Code generation: Refers symbol table for knowing how much and what type of run-time is
        allocated and table helps in adding temporary variable information.
        4.5.Code Optimization: Uses information present in the symbol table for machine-dependent optimization.
        4.6.Target Code generation: Generates code by using address information of identifier present in the table.

    Symbol Table entries – Each entry in the symbol table is associated with attributes that support the compiler
    in different phases.

    Items stored in Symbol table:
    1.Variable names and constants
    2.Procedure and function names
    3.Literal constants and strings
    4.Compiler generated temporaries
    5.Labels in source languages


    Information used by the compiler from Symbol table:
    1.Data type and name
    2.Declaring procedures
    3.Offset in storage
    4.If structure or record then, a pointer to structure table.
    5.For parameters, whether parameter passing by value or by reference
    6.Number and type of arguments passed to function
    7.Base Address
*/

/*
    always remember that symbol table can not be changed.

    like an example,
    int arr[10];
    when we call arr with size 10, there are 10 blocks for memory allocation with address.
            --------------------------------------------------------------------------------
            |      |       |        |      |       |       |       |       |       |       |
            --------------------------------------------------------------------------------
    address -> 7100   7104   7108   7112     7116     7120    7124    7128     7232    7236

    in symbol table, it stores variable name and address of first blocks like 7100 and size. so that we can not create
    array with same variable name.
    when we call arr[2] for value, it search variable name arr with the store address which is 7100. then calculate the
    arr address = (7100 + 2*4) = 7108. here, 4 is byte size of int or size of each block.
*/
int main()
{

}
