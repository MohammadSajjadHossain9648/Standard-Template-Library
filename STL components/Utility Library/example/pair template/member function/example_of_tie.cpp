#include<iostream>
#include<utility>
#include<tuple>
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
    use header : #include<tuple>
    tie(): This function works the same as in tuples. It creates a tuple of l value references to its arguments
    i.e., to unpack the tuple (or here pair) values into separate variables. Just like in tuples, here are also
    two variants of the tie, with and without “ignore”. “ignore” keyword ignores a particular tuple element from
    getting unpacked.
    However, tuples can have multiple arguments but pairs only have two arguments. So, in the case of pair of pairs,
    unpacking needs to be explicitly handled.
*/
int main()
{
    pair<int, int> pair1 = { 1, 2 };
    int a, b;
    tie(a, b) = pair1;
    cout<<a<<" "<<b<<"\n";

    pair<int, int> pair2 = { 3, 4 };
    tie(a, ignore) = pair2;

    // prints old value of b
    cout<<a<<" "<<b<<"\n";

    // Illustrating pair of pairs
    pair<int, pair<int, char> > pair3 = { 3, { 4, 'a' } };
    int x, y;
    char z;

    // tie(x,y,z) = pair3; Gives compilation error
    // tie(x, tie(y,z)) = pair3; Gives compilation error
    // Each pair needs to be explicitly handled
    x = pair3.first;
    tie(y, z) = pair3.second;
    cout<<x<<" "<<y<<" "<<z<<"\n";


    //output:
    //    1 2
    //    3 2
    //    3 4 a

}
