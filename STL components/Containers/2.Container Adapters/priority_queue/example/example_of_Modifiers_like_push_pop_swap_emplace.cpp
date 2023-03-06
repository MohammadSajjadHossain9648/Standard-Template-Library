#include<iostream>
#include<queue>
using namespace std;
/*
    to know more: https://www.geeksforgeeks.org/the-c-standard-template-library-stl/
                  https://www.studytonight.com/cpp/stl/
                  https://www.simplilearn.com/tutorials/cpp-tutorial/cpp-standard-template-library#:~:text=C%2B%2B%20STL%20(standard%20template%20library)%20is%20a%20software%20library%20for,%2C%20algorithms%2C%20and%20function%20objects.
                  https://www.studytonight.com/cpp/stl/stl-container-priority_queue
*/
/*
    Modifiers:
    1.push() – Adds the element at the end of the priority_queue by decreasing order.
    2.pop() – Deletes the topmost/first element(greatest element) of the priority_queue.
    3.swap() – It is used to swap the contents of one priority_queue with another priority_queue of same type.
    Sizes may differ.
    4.emplace() – Insert a new element into the priority_queue container, the new element is added to the end
    of the priority_queue.
*/
int main()
{
    priority_queue<int> v;
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

    cout<<"\npriority_queue<int> v = ";
    while(!v.empty()) // can be write same as, while(v.empty() == false)
    {
        cout<<v.top()<<" ";
        v.pop();
    }
    cout<<endl;


//emplace
    priority_queue<int> v3;
    v3.push(6);
    v3.push(7);
    v3.push(8);
    v3.push(9);
    v3.push(10);

    cout<<"\npriority_queue<int> v3 = ";
    while(!v3.empty())
    {
        cout<<v3.top()<<" ";
        v3.pop();
    }

    //or can be write same as use emplace instead of push
    priority_queue<int> v4;
    v4.emplace(6);
    v4.emplace(7);
    v4.emplace(8);
    v4.emplace(9);
    v4.emplace(10);

    cout<<"\npriority_queue<int> v4 = ";
    while(!v4.empty())
    {
        cout<<v4.top()<<" ";
        v4.pop();
    }


//swap
    // two priority_queue to perform swap
    priority_queue<int> v1, v2;
    v1.push(1);
    v1.push(2);
    v2.push(3);
    v2.push(4);

    cout<<"\nbefore Swap \npriority_queue 1: v1 = {1,2}";
    cout<<"\npriority_queue 2: v2 = {3,4}";

    // Swaps v1 and v2
    v1.swap(v2);

    cout<<"\nAfter Swap \npriority_queue 1: ";
    cout<<"v1 = ";
    while(!v1.empty())
    {
        cout<<v1.top()<<" ";
        v1.pop();
    }
    cout<<endl;


    cout<<"priority_queue 2: ";
    cout<<"v2 = ";
    while(!v2.empty())
    {
        cout<<v2.top()<<" ";
        v2.pop();
    }
    cout<<endl;
}
