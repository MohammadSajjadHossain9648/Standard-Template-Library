#include<iostream>
#include<queue>
using namespace std;
/*
    to know more: https://www.geeksforgeeks.org/the-c-standard-template-library-stl/
                  https://www.studytonight.com/cpp/stl/
                  https://www.simplilearn.com/tutorials/cpp-tutorial/cpp-standard-template-library#:~:text=C%2B%2B%20STL%20(standard%20template%20library)%20is%20a%20software%20library%20for,%2C%20algorithms%2C%20and%20function%20objects.
                  https://www.studytonight.com/cpp/stl/stl-container-queue
*/
/*
    Modifiers:
    1.push() – Adds the element at the end of the queue.
    2.pop() – Deletes the first element of the queue.
    3.swap() – It is used to swap the contents of one queue with another queue of same type. Sizes may differ.
    4.emplace() – Insert a new element into the queue container, the new element is added to the end of the queue.
*/
int main()
{
    // Assign queue
    queue<int> v;
    for(auto i:{10,20,30,40,50})
    {
        v.push(i);
    }
    cout<<endl;

    // inserts 15 to the last position
    v.push(15);
    cout<<"\nThe last element is: "<<v.back();

    // removes last element
    v.pop();
    cout<<"\nThe last element is: "<<v.front();

//emplace
    queue<int> v3;
    v3.push(6);
    v3.push(7);
    v3.push(8);
    v3.push(9);
    v3.push(10);

    cout<<"\nqueue<int> v3 = ";
    while(!v3.empty())
    {
        cout<<v3.front()<<" ";
        v3.pop();
    }

    //or can be write same as use emplace instead of push
    queue<int> v4;
    v4.emplace(6);
    v4.emplace(7);
    v4.emplace(8);
    v4.emplace(9);
    v4.emplace(10);

    cout<<"\nqueue<int> v4 = ";
    while(!v4.empty())
    {
        cout<<v4.front()<<" ";
        v4.pop();
    }



    // two queue to perform swap
    queue<int> v1, v2;
    v1.push(1);
    v1.push(2);
    v2.push(3);
    v2.push(4);

    cout<<"\nbefore Swap \nqueue 1: v1 = {1,2}";
    cout<<"\nqueue 2: v2 = {3,4}";

    // Swaps v1 and v2
    v1.swap(v2);

    cout<<"\nAfter Swap \nqueue 1: ";
    cout<<"queue<int> v1 = ";
    while(!v1.empty())
    {
        cout<<v1.front()<<" ";
        v1.pop();
    }
    cout<<endl;


    cout<<"\nqueue 2: ";
    cout<<"queue<int> v2 = ";
    while(!v2.empty())
    {
        cout<<v2.front()<<" ";
        v2.pop();
    }
    cout<<endl;


    //output:
    //    The last element is: 15
    //    The last element is: 20
    //    queue<int> v3 = 6 7 8 9 10
    //    queue<int> v4 = 6 7 8 9 10
    //    before Swap
    //    queue 1: v1 = {1,2}
    //    queue 2: v2 = {3,4}
    //    After Swap
    //    queue 1: queue<int> v1 = 3 4
    //
    //    queue 2: queue<int> v2 = 1 2
}
