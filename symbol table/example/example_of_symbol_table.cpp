#include<iostream>
using namespace std;
/*
    to know more: https://www.geeksforgeeks.org/introduction-of-compiler-design/
                  https://www.geeksforgeeks.org/phases-of-a-compiler/
                  https://www.geeksforgeeks.org/symbol-table-compiler/
                  https://www.geeksforgeeks.org/cpp-program-to-implement-symbol-table/#:~:text=A%20Symbol%20table%20is%20a,%2Dnumber%20of%20occurrence%2C%20etc.
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
int add(int num1, int num2)
{
    int sum = 0;
    sum = num1+num2;
    return sum;
}
int main()
{
    int num1 = 10, num2 = 20;
    cout<<"result is "<<add(num1,num2);

    //output: result is 30

    /*
    Symbol Table for above code:

    Name	Type	    Scope
    ---------------------------
    add	    function	global
    num1	int	        function parameter
    num2	int	        function parameter
    sum	    int	        local
    */
}
