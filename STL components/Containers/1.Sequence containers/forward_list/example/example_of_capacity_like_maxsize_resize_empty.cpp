#include<iostream>
#include<forward_list>
using namespace std;
/*
    to know more: https://www.geeksforgeeks.org/the-c-standard-template-library-stl/
                  https://www.studytonight.com/cpp/stl/
                  https://www.simplilearn.com/tutorials/cpp-tutorial/cpp-standard-template-library#:~:text=C%2B%2B%20STL%20(standard%20template%20library)%20is%20a%20software%20library%20for,%2C%20algorithms%2C%20and%20function%20objects.
                  https://www.studytonight.com/cpp/stl/stl-container-forward_list
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

    cout<<"\nMax_Size : "<<v.max_size();

    // resizes the forward_list size to 4
    v.resize(4);
    cout<<"\nafter v.resize(4), forward_list <int> v = ";
    for(int i: v)
    {
        cout<<i<<" ";
    }
    cout<<endl;

    // checks if the forward_list is empty or not
    if (v.empty() == false)
        cout<<"\nforward_list is not empty";
    else
        cout<<"\nforward_list is empty";


    return 0;

    //output:
    //    forward_list <int> v = 10 20 30 40 50
    //
    //    Max_Size : 576460752303423487
    //    after v.resize(4), forward_list <int> v = 10 20 30 40
    //
    //    forward_list is not empty
}
