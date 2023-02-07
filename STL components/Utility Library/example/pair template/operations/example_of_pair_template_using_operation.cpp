#include <iostream>
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
int main ()
{
    pair<int,int> pair1, pair2;

    pair1 = make_pair(1, 2);
    pair2 = make_pair(2, 4);

    if(pair1 != pair2)
        cout<<"Pairs are not equal" << endl;
    else
        cout<<"Pairs are equal" << endl;


    if(pair1 < pair2)
        cout<<"Pair2 is greater than pair1" << endl;
    else
        cout<<"Pair2 is less than pair1" << endl;


    pair<string,int> pair3, pair4;

    pair3 = make_pair("messi", 10);
    pair4 = make_pair("messi", 10);

    if(pair3 == pair4)
        cout<<"Pairs are equal" << endl;
    else
        cout<<"Pairs are not equal" << endl;

    return 0;

    //output:
    //    Pairs are not equal
    //    Pair2 is greater than pair1
    //    Pairs are equal
}
