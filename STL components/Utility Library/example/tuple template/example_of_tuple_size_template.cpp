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
    tuple_size() :- It returns the number of elements present in the tuple.
*/
int main ()
{
    // Initializing tuple
    tuple <char,int,float> geek(20,'g',17.5);

    // Use of size to find tuple_size of tuple
    cout<<"The size of tuple is : ";
    cout<<tuple_size<decltype(geek)>::value<<endl;

    return 0;

    //output:
    //   The size of tuple is : 3
}
