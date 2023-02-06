#include<iostream>
#include<vector>
using namespace std;
/*
    to know more: https://www.geeksforgeeks.org/the-c-standard-template-library-stl/
                  https://www.geeksforgeeks.org/pair-in-cpp-stl/
                  https://www.simplilearn.com/tutorials/cpp-tutorial/cpp-pair
                  https://www.scaler.com/topics/cpp/pair-in-cpp/
                  https://cplusplus.com/reference/utility/pair/
                  https://www.studytonight.com/cpp/stl/
                  https://www.studytonight.com/cpp/stl/stl-pair-template
                  https://www.geeksforgeeks.org/tuples-in-c/
                  https://cplusplus.com/reference/tuple/tuple/
                  https://www.softwaretestinghelp.com/strings-pair-tuples-in-stl/
*/
/*
    Utility Library
    Defined in header <utility>.

    1. pair template
    2. tuple template
*/
/*  what is pair?
    Pair is used to combine together two values that may be of different data types. Pair provides a way
    to store two heterogeneous objects as a single unit. It is basically used if we want to store tuples.
    The pair container is a simple container defined in <utility> header consisting of two data elements or objects.

    1. The first element is referenced as ‘first’ and the second element as ‘second’ and the order
    is fixed (first, second).
    2. Pair can be assigned, copied, and compared. The array of objects allocated in a map or hash_map
    is of type ‘pair’ by default in which all the ‘first’ elements are unique keys associated with their
    ‘second’ value objects.
    3. To access the elements, we use variable name followed by dot operator followed by the keyword
    first or second.
    ----------------------------------------------------------------------------------------------------------
    A pair in C++ is described as a container that combines two elements of the same or different data types.
    Pair in C++ consists of two elements, first and second (must be in this order), and they are accessed
    using the dot (.) operator and the keyword first or second.
*/
/*
    Nested Pairs
    We can use nested pairs, also. The syntax to declare nested pairs in C++ is as follows :
                pair <pair <dt1, dt2>, dt3> p1;
    Parameters:
    Here we have a nested pair, i.e., the first or second element of a pair is itself a pair.
            dt1: data type of first element.
            dt2: data type of second element.
            dt3: data type of third element.
*/
/*
    Pair STL Functions / Pair Member Functions:

    Function 1:
    make_pair(): It makes it possible to create a value pair without explicitly writing the data types.
                 Syntax: pair1 = make_pair(data1, data2);
    Function 2:
    swap():	It swaps the contents of one pair object with the contents of another pair object.
            The pairs have to be of the same kind.
            Syntax: pair1.swap(pair2)
    Function 3:
    tie():	It unpacks the pair values into independent variables by creating a pair of lvalue references
            to its arguments.
            Syntax: tie(int &, int &) = pair1;
*/
/*
    operators(=, ==, !=, >=, <=) in Pair:
    We can use operators with pairs as well.

    1) using equal(=): It assigns a new object for a pair object.
    Syntax: pair& operator= (const pair& pr);
    This Assigns “pr” as the new content for the “pair” object. The first value is assigned the first value
    of pr and the second value is assigned the second value of pr.

    2) Comparison (==) operator with pair: For the two given pairs say pair1 and pair2, the comparison operator
    compares the “first value and second value of those two pairs i.e. if pair1.first is equal to pair2.first
    or not” and   “if pair1.second is equal to pair2.second or not”.
    i.e   if (  (pari1.first ==pair2.first)   &&   (pair1.second==pair2.second)  )
    If any of the two condition is false then it returns false otherwise true.

    3) Not equal (!=) operator with pair: For the given two pairs say pair1 and pair2, the != operator compares
    the first values of those two pairs i.e. if pair1.first is equal to pair2.first or not, if they are equal
    then it checks the second values of both.

    4) Logical( >=, <= )operators with pair: For the given two pairs say pair1 and pair2, the =, >, can be used
    with pairs as well. It returns 0 or 1 by only comparing the first value of the pair. For pairs like p1=(1,20)
    and p2=(1,10) p2<p1 should give 0 (as it compares 1st element only & they are equal so it is definitely not less),
    but that isn’t true. Here the pair compares the second element and if it satisfies then returns 1 (this is only
    the case when the first element gets equal while using a relational operator > or < only, otherwise these
    operators work as mentioned above)
*/
/*
    Initializing a Pair: We can also initialize a pair.

    Syntax: pair (data_type1, data_type2) Pair_name (value1, value2) ;

    Different ways to initialize pair:

    pair  g1;         //default
    pair  g2(1, 'a');  //initialized,  different data type
    pair  g3(1, 10);   //initialized,  same data type
    pair  g4(g3);    //copy of g3

    Another way to initialize a pair is by using the make_pair() function.
    g2 = make_pair(1, 'a');
    Another valid syntax to declare pair is:
    g2 = {1, 'a'};
*/


/*
    What is a tuple?
    A tuple is an object that can hold a number of elements. The elements can be of different data types.
    The elements of tuples are initialized as arguments in order in which they will be accessed.
*/
/*
    Operations on tuple :-

    1. get() :- get() is used to access the tuple values and modify them, it accepts the index and tuple name
    as arguments to access a particular tuple element.

    2. make_tuple() :- make_tuple() is used to assign tuple with values. The values passed should be in order
    with the values declared in tuple.

    3. tuple_size :- It returns the number of elements present in the tuple.

    4. swap() :- The swap(), swaps the elements of the two different tuples.

    5. tie() :- The work of tie() is to unpack the tuple values into separate variables. There are two variants
    of tie(), with and without “ignore” , the “ignore” ignores a particular tuple element and stops it from
    getting unpacked.

    6. tuple_cat() :- This function concatenates two tuples and returns a new tuple.
*/
int main()
{
}


