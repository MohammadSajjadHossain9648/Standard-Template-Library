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
    line 1 -> int num = 5;
    line 2 -> int *ptr = &num;

    see the model below:
        num                                         ptr
        ---                                -------------------------
        |5|                           |--> |0x7fff5fbff8ac(or, &num)|
        ---                           |    -------------------------
   0x7fff5fbff8ac(address of num) -----    0x7ffc1e98dfa4(address of ptr)

   in symbol table,
   line 1 : num -> 0x7fff5fbff8ac(address of num)
   line 2 : ptr -> 0x7ffc1e98dfa4(address of ptr)
*/
int add(int num1,int num2)
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

    int num[] = {1,2,3,4,5};
    int *ptr = num;
    /* show error -> int *ptr = num++; here num++ -> num = num+1;
    cause we try to update num address which is num[0] to num[1] in symbol table. that is not possible.
    */
    cout<<"\n\nthe value of *ptr = "<<*ptr;

    //output: the value of *ptr = 1

    /*
    in symbol table,
    line 1 : num -> 0x7fff5fbff8ac(address of num)
    line 2 : ptr -> 0x7ffc1e98dfa4(address of ptr)
    */
}
