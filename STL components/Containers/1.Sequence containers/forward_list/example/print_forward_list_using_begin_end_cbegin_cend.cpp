#include<iostream>
#include<forward_list>
using namespace std;
/*
    to know more: https://www.geeksforgeeks.org/the-c-standard-template-library-stl/
                  https://www.studytonight.com/cpp/stl/
                  https://www.simplilearn.com/tutorials/cpp-tutorial/cpp-standard-template-library#:~:text=C%2B%2B%20STL%20(standard%20template%20library)%20is%20a%20software%20library%20for,%2C%20algorithms%2C%20and%20function%20objects.
                  https://www.studytonight.com/cpp/stl/stl-container-forward_list
*/
/*
    1.begin() – Returns an iterator pointing to the first element in the forward_list
    2.end() – Returns an iterator pointing to the theoretical element that follows the last element in the forward_list
    3.cbegin() – Returns a constant iterator pointing to the first element in the forward_list.
    4.cend() – Returns a constant iterator pointing to the theoretical element that follows the last element
    in the forward_list.
*/
int main()
{
    forward_list <int> v = {10,20,30,40,50};

    cout<<"forward_list <int> v = ";
    for(int i: v)
    {
        cout<<i<<" ";
    }
    cout<<endl;

    cout<<"Output of begin and end: ";
    for (auto i = v.begin(); i != v.end(); ++i)
        cout<<*i<<" ";

    cout<<"\nOutput of cbegin and cend: ";
    for (auto i = v.cbegin(); i != v.cend(); ++i)
        cout<<*i<<" ";

    return 0;

    //output:
    //    forward_list <int> v = 10 20 30 40 50
    //    Output of begin and end: 10 20 30 40 50
    //    Output of cbegin and cend: 10 20 30 40 50

}
