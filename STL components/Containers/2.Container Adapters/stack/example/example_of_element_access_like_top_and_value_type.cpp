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
    Element access:
    1.top() – Returns a reference to the top most element(last input element) of the stack
    2.value_type – Represents the type of object stored as an element in a stack. It acts as a synonym
    for the template parameter.
*/
int main()
{
    stack <int> v;
    for(auto i:{10,20,90,40,50})
    {
        v.push(i);
    }
    cout<<endl;

    cout<<"\ntop() : v.top() = "<<v.top();


//value_type
    // declare value_type for priority queue
    stack<int>::value_type x;

    // Declares stack
    stack<int> v1;

    // here x acts as a variable of int data type
    x = 10;
    cout<<"\nThe value_type is x = "<<x<<endl;

    v1.push(x);
    x = 20;
    v1.push(x);

    cout<<"The element at the top of the stack is "<< v1.top()<<"."<<endl;

    return 0;

    //output:
    //    top() : v.top() = 90
    //    The value_type is x = 10
    //    The element at the top of the stack is 20.
}
