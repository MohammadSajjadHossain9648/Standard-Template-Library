#include<iostream>
#include<utility>
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
    pair < pair < int, int >, int > p1;
    p1 = make_pair(make_pair(1, 2), 3);

    cout<<"Printing elements of nested pair: ";
    cout<<p1.first.first<<" "<<p1.first.second<<" "<<p1.second<<endl;
    return 0;

    //output:
    //  Printing elements of nested pair: 1 2 3
}
