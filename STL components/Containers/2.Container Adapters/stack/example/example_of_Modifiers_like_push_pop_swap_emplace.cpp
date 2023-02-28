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
    Modifiers:
    1.push(g) – Adds the element ‘g’ at the top of the stack.
    2.pop() – Deletes the top most element(last input element) of the stack.
    3.swap() – It is used to swap the contents of one stack with another stack of same type.
    Sizes may differ.
    4.emplace() – Insert a new element into the stack container, the new element is added to the end
    of the stack.
*/
int main()
{
    stack<int> v;
    for(auto i:{10,20,50,40,30})
    {
        v.push(i);
    }
    cout<<endl;

    // inserts 15 according to its position by decreasing order
    v.push(15);   //-> v = 50 40 30 20 15 10
    cout<<"\nv.push(15), The first element is: "<<v.top(); //50

    // removes first or top element
    v.pop(); //-> v = 40 30 20 15 10
    cout<<"\nv.pop(), The first element is: "<<v.top(); // 40

    cout<<"\nstack<int> v :\n";
    while(!v.empty()) // can be write same as, while(v.empty() == false)
    {
        cout<<v.top()<<"\n";
        v.pop();
    }
    cout<<endl;


//emplace
    stack<int> v3;
    v3.push(6);
    v3.push(7);
    v3.push(8);
    v3.push(9);
    v3.push(10);

    cout<<"\nstack<int> v3 = ";
    while(!v3.empty())
    {
        cout<<v3.top()<<" ";
        v3.pop();
    }

    //or can be write same as use emplace instead of push
    stack<int> v4;
    v4.emplace(6);
    v4.emplace(7);
    v4.emplace(8);
    v4.emplace(9);
    v4.emplace(10);

    cout<<"\nstack<int> v4 = ";
    while(!v4.empty())
    {
        cout<<v4.top()<<" ";
        v4.pop();
    }


//swap
    // two stack to perform swap
    stack<int> v1, v2;
    v1.push(1);
    v1.push(2);
    v2.push(3);
    v2.push(4);

    cout<<"\nbefore Swap \nstack 1: v1 :\n2 \n1";
    cout<<"\nstack 2: v2: v1 :\n4 \n3";

    // Swaps v1 and v2
    v1.swap(v2);

    cout<<"\nAfter Swap \nstack 1: ";
    cout<<"v1 :\n";
    while(!v1.empty())
    {
        cout<<v1.top()<<"\n";
        v1.pop();
    }
    cout<<endl;


    cout<<"stack 2: ";
    cout<<"v2 :\n";
    while(!v2.empty())
    {
        cout<<v2.top()<<"\n";
        v2.pop();
    }
    cout<<endl;


    //output:
    //    v.push(15), The first element is: 15
    //    v.pop(), The first element is: 30
    //    stack<int> v :
    //    30
    //    40
    //    50
    //    20
    //    10
    //
    //
    //    stack<int> v3 = 10 9 8 7 6
    //    stack<int> v4 = 10 9 8 7 6
    //    before Swap
    //    stack 1: v1 :
    //    2
    //    1
    //    stack 2: v2: v1 :
    //    4
    //    3
    //    After Swap
    //    stack 1: v1 :
    //    4
    //    3
    //
    //    stack 2: v2 :
    //    2
    //    1
}
