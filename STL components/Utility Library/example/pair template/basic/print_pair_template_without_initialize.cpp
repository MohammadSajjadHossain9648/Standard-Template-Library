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
    pair<int, double> PAIR1;
    pair<string, char> PAIR2;


    cout<<PAIR1.first; // it is initialised to 0
    cout<<PAIR1.second; // it is initialised to 0


    cout<<PAIR2.first;  // it prints nothing i.e NULL
    cout<<PAIR2.second; // it prints nothing i.e NULL

    return 0;

    //output: 00

}
