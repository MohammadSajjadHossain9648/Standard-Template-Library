#include<iostream>
#include<stack>
using namespace std;
/*
    to know more: https://www.geeksforgeeks.org/the-c-standard-template-library-stl/
                  https://www.studytonight.com/cpp/stl/
                  https://www.simplilearn.com/tutorials/cpp-tutorial/cpp-standard-template-library#:~:text=C%2B%2B%20STL%20(standard%20template%20library)%20is%20a%20software%20library%20for,%2C%20algorithms%2C%20and%20function%20objects.
                  https://www.studytonight.com/cpp/stl/stl-container-stack
*/
/*
    Capacity:
    1.size() – Returns the number of elements in the stack.
    2.empty() – Returns whether the stack is empty.
*/
int main()
{
    stack <int> v;
    for(auto i:{10,20,30,40,50})
    {
        v.push(i);
    }
    cout<<endl;

    cout<<"Size : "<<v.size();

    // checks if the stack is empty or not
    if (v.empty() == false)
        cout<<"\nstack is not empty";
    else
        cout<<"\nstack is empty";


    return 0;

    //output:
    //    Size : 5
    //    stack is not empty
}
