#include<iostream>
#include<tuple>
using namespace std;
/*
    to know more: https://www.geeksforgeeks.org/tuples-in-c/
                  https://cplusplus.com/reference/tuple/tuple/
                  https://www.softwaretestinghelp.com/strings-pair-tuples-in-stl/
                  https://www.geeksforgeeks.org/the-c-standard-template-library-stl/
                  https://www.geeksforgeeks.org/pair-in-cpp-stl/
                  https://www.simplilearn.com/tutorials/cpp-tutorial/cpp-pair
                  https://www.scaler.com/topics/cpp/pair-in-cpp/
                  https://cplusplus.com/reference/utility/pair/
                  https://www.studytonight.com/cpp/stl/
                  https://www.studytonight.com/cpp/stl/stl-pair-template
*/
/*
    Operations on tuple :-
    tie() :- The work of tie() is to unpack the tuple values into separate variables. There are two variants
    of tie(), with and without “ignore” , the “ignore” ignores a particular tuple element and stops it from
    getting unpacked.
*/
int main ()
{
    // Initializing variables for unpacking
    int i_val;
    char ch_val;
    float f_val;

    // Initializing tuple
    tuple <int,char,float> tup1(20,'g',17.5);

    // Use of tie() without ignore
    tie(i_val,ch_val,f_val) = tup1;

    // Displaying unpacked tuple elements
    // without ignore
    cout<<"The unpacked tuple values (without ignore) are : ";
    cout<<i_val<<" "<<ch_val<<" "<<f_val<<endl;

    // Use of tie() with ignore
    // ignores char value
    tie(i_val,ignore,f_val) = tup1;

    // Displaying unpacked tuple elements
    // with ignore
    cout<<"The unpacked tuple values (with ignore) are : ";
    cout<<i_val <<" "<<f_val<<endl;

    return 0;

    //output:
    //    The unpacked tuple values (without ignore) are : 20 g 17.5
    //    The unpacked tuple values (with ignore) are : 20 17.5
}
