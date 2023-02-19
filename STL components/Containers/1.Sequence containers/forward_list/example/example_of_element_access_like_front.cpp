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
    Element access:
    1.front() – Returns a reference to the first element in the forward_list
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


    cout<<"\nfront() : v.front() = "<<v.front();


    return 0;

    //output:
    //    forward_list <int> v = 10 20 30 40 50
    //    front() : v.front() = 10

}
