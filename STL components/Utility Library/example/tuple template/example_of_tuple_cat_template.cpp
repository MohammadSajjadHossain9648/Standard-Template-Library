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
    tuple_cat() :- This function concatenates two tuples and returns a new tuple.
*/
int main ()
{
    // Initializing 1st tuple
    tuple <int,char,float> tup1(20,'g',17.5);

    // Initializing 2nd tuple
    tuple <int,char,float> tup2(30,'f',10.5);

    // Concatenating 2 tuples to return a new tuple
    auto tup3 = tuple_cat(tup2,tup1);

    // Displaying new tuple elements
    cout<<"The new tuple elements in order are : ";
    cout<<get<0>(tup3)<<" "<<get<1>(tup3)<<" ";
    cout<<get<2>(tup3)<<" "<<get<3>(tup3)<<" ";
    cout<<get<4>(tup3)<<" "<<get<5>(tup3)<<endl;

    return 0;

    //output:
    //    The new tuple elements in order are : 30 f 10.5 20 g 17.5
}
