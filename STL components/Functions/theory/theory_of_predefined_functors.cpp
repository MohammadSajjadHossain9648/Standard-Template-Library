#include<iostream>
using namespace std;
/*
    to know more: https://www.geeksforgeeks.org/functors-in-cpp/
                  https://www.programiz.com/cpp-programming/functors
                  https://www.go4expert.com/articles/cpp-stl-functors-t34696/
                  https://www.technical-recipes.com/2011/using-function-objects-functors-c/
                  https://www.quantstart.com/articles/Function-Objects-Functors-in-C-Part-1/
                  https://learn.microsoft.com/en-us/cpp/standard-library/function-objects-in-the-stl?view=msvc-170
                  https://www.studytonight.com/cpp/stl/
*/
/*
    Please note that the title is Functors (Not Functions)!!

    Consider a function that takes only one argument. However, while calling this function
    we have a lot more information that we would like to pass to this function, but we cannot
    as it accepts only one parameter. What can be done?

    One obvious answer might be global variables. However, good coding practices do not advocate
    the use of global variables and say they must be used only when there is no other alternative.
*/
/*
    A function object, or functor, is any type that implements operator(). This operator is referred to as
    the call operator or sometimes the application operator. The C++ Standard Library uses function objects
    primarily as sorting criteria for containers and in algorithms.

    Function objects provide two main advantages over a straight function call. The first is that a function
    object can contain state. The second is that a function object is a type and therefore can be used as
    a template parameter.
*/
/*
    We can use predefined functors provided by the standard library by including the functional header file:
    #include <functional>

    C++ provides the following library functors for arithmetic, relational, and logical operations.

    1. Arithmetic Functors
        Functors	Description
        ------------------------
        plus	    returns the sum of two parameters
        minus	    returns the difference of two parameters
        multiplies	returns the product of two parameters
        divides	    returns the result after dividing two parameters
        modulus	    returns the remainder after dividing two parameters
        negate	    returns the negated value of a parameter

    2. Relational Functors
        Functors	    Description
        ----------------------------
        equal_to	    returns true if the two parameters are equal
        not_equal_to	returns true if the two parameters are not equal
        greater	        returns true if the first parameter is greater than the second
        greater_equal	returns true if the first parameter is greater than or equal to the second
        less	        returns true if the first parameter is less than the second
        less_equal	    returns true if the first parameter is less than or equal to the second

    3. Logical Functors
        Functors	    Description
        ------------------------------
        logical_and	    returns the result of Logical AND operation of two booleans
        logical_or	    returns the result of Logical OR operation of two booleans
        logical_not	    returns the result of Logical NOT operation of a boolean

    4. Bitwise Functors
        Functors	Description
        -------------------------------
        bit_and	    returns the result of Bitwise AND operation of two parameters
        bit_or	    returns the result of Bitwise OR operation of two parameters
        bit_xor	    returns the result of Bitwise XOR operation of two parameters
*/
int main()
{
}
