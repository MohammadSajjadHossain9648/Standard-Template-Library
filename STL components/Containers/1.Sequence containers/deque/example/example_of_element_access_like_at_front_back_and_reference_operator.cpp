#include<iostream>
#include<deque>
using namespace std;
/*
    to know more: https://www.geeksforgeeks.org/the-c-standard-template-library-stl/
                  https://www.studytonight.com/cpp/stl/
                  https://www.simplilearn.com/tutorials/cpp-tutorial/cpp-standard-template-library#:~:text=C%2B%2B%20STL%20(standard%20template%20library)%20is%20a%20software%20library%20for,%2C%20algorithms%2C%20and%20function%20objects.
                  https://www.studytonight.com/cpp/stl/stl-container-deque
                  https://www.geeksforgeeks.org/deque-cpp-stl/
*/
int main()
{
    deque <int> v = {10,20,30,40,50};

    cout<<"deque <int> v = ";
    for(int i: v)
    {
        cout<<i<<" ";
    }
    cout<<endl;

    cout<<"Reference operator [index_no] : v[2] = "<<v[2];

    cout<<"\nat : v.at(4) = "<<v.at(4);

    cout<<"\nfront() : v.front() = "<<v.front();

    cout<<"\nback() : v.back() = "<<v.back();

    return 0;

    //output:
    //    deque <int> v = 10 20 30 40 50
    //    Reference operator [index_no] : v[2] = 30
    //    at : v.at(4) = 50
    //    front() : v.front() = 10
    //    back() : v.back() = 50
}
