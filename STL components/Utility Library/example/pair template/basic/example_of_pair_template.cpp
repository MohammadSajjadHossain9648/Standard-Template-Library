#include <iostream>
#include <utility>
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

int main()
{
    // defining a pair
    pair<int, string> PAIR1;

    PAIR1.first = 100; // first part of the pair
    PAIR1.second = "Dollars"; // second part of the pair

    /* can write above three lines code into one line
        pair<int, string> PAIR1(100, "Dollars");
    */


    cout<<PAIR1.first<<" "<<PAIR1.second<< endl;
    /*same as
    cout<<PAIR1.first<<" ";
    cout<<PAIR1.second<< endl;
    */

    return 0;

    //output: 100 Dollars

}
