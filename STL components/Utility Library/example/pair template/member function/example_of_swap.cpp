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
/*
    swap(): This function swaps the contents of one pair object with the contents of another pair object.
    The pairs must be of the same type.
*/
int main()
{
    pair<char, int> pair1 = make_pair('A', 1);
    pair<char, int> pair2 = make_pair('B', 2);

    cout<<"Before swapping:"<<endl;
    cout<<"Contents of pair1 = "<<pair1.first<<" "<<pair1.second<<endl;
    cout<<"Contents of pair2 = "<<pair2.first<<" "<<pair2.second<<endl;

    pair1.swap(pair2);

    cout<<"\nAfter swapping:"<<endl;
    cout<<"Contents of pair1 = "<<pair1.first<<" "<<pair1.second<<endl;
    cout<<"Contents of pair2 = "<<pair2.first<<" "<<pair2.second<<endl;

    return 0;

    //output:
    //    Before swapping:
    //    Contents of pair1 = A 1
    //    Contents of pair2 = B 2
    //
    //    After swapping:
    //    Contents of pair1 = B 2
    //    Contents of pair2 = A 1
}
