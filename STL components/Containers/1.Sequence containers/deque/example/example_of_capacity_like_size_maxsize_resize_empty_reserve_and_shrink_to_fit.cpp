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
/*
    Capacity:
    1.size() – Returns the number of elements in the deque.
    2.max_size() – Returns the maximum number of elements that the deque can hold.
    3.resize(n) – Resizes the container so that it contains ‘n’ elements.
    4.empty() – Returns whether the container is empty.
    5.shrink_to_fit() – Reduces the capacity of the container to fit its size and destroys all elements beyond
    the capacity.
    6.reserve() – Requests that the deque capacity be at least enough to contain n elements.
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

    cout<<"Size : "<<v.size();
    cout<<"\nMax_Size : "<<v.max_size();

    // resizes the deque size to 4
    v.resize(4);

    // prints the deque size after resize()
    cout<<"\nSize : "<<v.size();

    // checks if the deque is empty or not
    if (v.empty() == false)
        cout<<"\ndeque is not empty";
    else
        cout<<"\ndeque is empty";

    // Shrinks the deque
    v.shrink_to_fit();
    cout<<"\ndeque elements are: ";
    for (auto it = v.begin(); it != v.end(); it++)
        cout<<*it<<" ";

    return 0;

    //output:
    //    deque <int> v = 10 20 30 40 50
    //    Size : 5
    //    Max_Size : 2305843009213693951
    //    Size : 4
    //    deque is not empty
    //    deque elements are: 10 20 30 40
}
