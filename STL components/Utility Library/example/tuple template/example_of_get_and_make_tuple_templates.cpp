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
    1. get() :- get() is used to access the tuple values and modify them, it accepts the index and tuple name
    as arguments to access a particular tuple element.
    2. make_tuple() :- make_tuple() is used to assign tuple with values. The values passed should be in order
    with the values declared in tuple.
*/
int main ()
{
    // Declaring tuple
    tuple <char, int, float> geek;

    // Assigning values to tuple using make_tuple()
    geek = make_tuple('a', 10, 15.5);

    // Printing initial tuple values using get()
    cout<<"The initial values of tuple are : ";
    cout<<get<0>(geek)<<" "<<get<1>(geek);
    cout<<" "<<get<2>(geek)<<endl;

    // Use of get() to change values of tuple
    get<0>(geek) = 'b';
    get<2>(geek) =  20.5;

    // Printing modified tuple values
    cout<<"The modified values of tuple are : ";
    cout<<get<0>(geek)<<" "<<get<1>(geek);
    cout<<" "<<get<2>(geek)<<endl;

    return 0;

    //output:
    //    The initial values of tuple are : a 10 15.5
    //    The modified values of tuple are : b 10 20.5
}
