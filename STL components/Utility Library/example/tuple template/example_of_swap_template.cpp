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
    swap() :- The swap(), swaps the elements of the two different tuples.
*/
int main ()
{
    // Initializing 1st tuple
    tuple <int,char,float> tup1(20,'g',17.5);

    // Initializing 2nd tuple
    tuple <int,char,float> tup2(10,'f',15.5);

    // Printing 1st and 2nd tuple before swapping
    cout<<"The first tuple elements before swapping are : ";
    cout<< get<0>(tup1)<<" "<<get<1>(tup1)<<" "<<get<2>(tup1)<<endl;
    cout<<"The second tuple elements before swapping are : ";
    cout<< get<0>(tup2)<<" "<<get<1>(tup2)<<" "<<get<2>(tup2)<<endl;

    // Swapping tup1 values with tup2
    tup1.swap(tup2);

    // Printing 1st and 2nd tuple after swapping
    cout<<"The first tuple elements after swapping are : ";
    cout<< get<0>(tup1)<<" "<<get<1>(tup1)<<" "<<get<2>(tup1)<<endl;
    cout<<"The second tuple elements after swapping are : ";
    cout<<get<0>(tup2)<<" "<<get<1>(tup2)<<" "<<get<2>(tup2)<<endl;

    return 0;

    //output:
    //    The first tuple elements before swapping are : 20 g 17.5
    //    The second tuple elements before swapping are : 10 f 15.5
    //    The first tuple elements after swapping are : 10 f 15.5
    //    The second tuple elements after swapping are : 20 g 17.5
}
