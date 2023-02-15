#include<iostream>
#include<deque>
using namespace std;
/*
    to know more: https://www.geeksforgeeks.org/the-c-standard-template-library-stl/
                  https://www.studytonight.com/cpp/stl/
                  https://www.simplilearn.com/tutorials/cpp-tutorial/cpp-standard-template-library#:~:text=C%2B%2B%20STL%20(standard%20template%20library)%20is%20a%20software%20library%20for,%2C%20algorithms%2C%20and%20function%20objects.
                  https://www.studytonight.com/cpp/stl/stl-container-deque
                  https://www.geeksforgeeks.org/deque-cpp-stl/
                  https://iq.opengenus.org/initialize-deque-in-cpp-stl/
*/
/*
    Modifiers:
    1.assign() – It assigns new value to the deque elements by replacing old ones
    & fill() -  fill constructor will give us the ability to construct and initialize a deque with n number
    of elements and assign a value to each element.
    2.push_back() – It push the elements into a deque from the back
    3.pop_back() – It is used to pop or remove elements from a deque from the back.
    4.insert() – It inserts new elements before the element at the specified position
    5.erase() – It is used to remove elements from a container from the specified position or range.
    6.swap() – It is used to swap the contents of one deque with another deque of same type. Sizes may differ.
    7.clear() – It is used to remove all the elements of the deque container
    8.emplace() – It extends the container by inserting new element at position
    9.emplace_front() – It is used to insert a new element into the list container, the new element is added
    to the begining of the list
    10.emplace_back() – It is used to insert a new element into the deque container, the new element is added
    to the end of the deque
    11.move() - move constructor will give us the ability to construct a new deque and initialize with elements
    from another deque. This initialization technique gives us a linear time complexity of 0(n).
    12.copy() - copy constructor will give us the ability to construct a new deque and initialize it with a copy
    of elements present in another existing deque. This initialization technique gives us a linear time complexity
    of 0(n).
    13.range() - range constructor will give us the ability to construct a deque and initialize it with elements
    that are in a range between first to last using {}. This initialization technique gives us a linear time
    complexity of 0(n).
*/
int main()
{
    // Assign deque
    deque<int> v;

    // fill the deque with 10 five times
    v.assign(5, 10); // same as fill constructor, deque<int> v(5, 10); -> here 5 is size, 10 is value

    cout<<"The deque elements are: ";
    for (int i = 0; i < v.size(); i++)
        cout<<v[i]<<" ";

    // inserts 15 to the last position
    v.push_back(15);
    int n = v.size();
    cout<<"\nThe last element is: "<<v[n - 1];

    // removes last element
    v.pop_back();

    // prints the deque
    cout<<"\nThe deque elements are: ";
    for (int i = 0; i < v.size(); i++)
        cout<<v[i]<<" ";

    // inserts 5 at the beginning
    v.insert(v.begin(), 5);

    cout<<"\nThe first element is: "<<v[0];

    // removes the first element
    v.erase(v.begin());

    cout<<"\nThe first element is: "<<v[0];

    // inserts at the beginning or can be insert any place
    v.emplace(v.begin(), 5);
    cout<<"\nThe first element is: "<<v[0];

    // inserts 15 at the beginning
    v.emplace_front(15);
    cout<<"\nThe first element is: "<<v.front();

    // Inserts 20 at the end
    v.emplace_back(20);
    n = v.size();
    cout<<"\nThe last element is: "<<v[n - 1];

    // erases the deque
    v.clear();
    cout<<"\ndeque size after erase(): "<<v.size();

    // two deque to perform swap
    deque<int> v1, v2;
    v1.push_back(1);
    v1.push_back(2);
    v2.push_back(3);
    v2.push_back(4);

    cout<<"\n\ndeque 1: ";
    for (int i = 0; i < v1.size(); i++)
        cout<<v1[i]<<" ";

    cout<<"\ndeque 2: ";
    for (int i = 0; i < v2.size(); i++)
        cout<<v2[i]<<" ";

    // Swaps v1 and v2
    v1.swap(v2);

    cout<<"\nAfter Swap \ndeque 1: ";
    for (int i = 0; i < v1.size(); i++)
        cout<<v1[i]<<" ";

    cout<<"\ndeque 2: ";
    for (int i = 0; i < v2.size(); i++)
        cout<<v2[i]<<" ";


// move constructor
    deque<int> d1 = {1,2,3};
    deque<int> d2(move(d1));

    cout<<"\nAfter move \ndeque 1: ";
    for (int i = 0; i < d1.size(); i++)
        cout<<d1[i]<<" ";

    cout<<"\ndeque 2: ";
    for (int i = 0; i < d2.size(); i++)
        cout<<d2[i]<<" ";


// copy constructor
    deque<int> d3 = {1,2,3};
    deque<int> d4(d3);

    cout<<"\nAfter copy \ndeque 3: ";
    for (int i = 0; i < d3.size(); i++)
        cout<<d3[i]<<" ";

    cout<<"\ndeque 4: ";
    for (int i = 0; i < d4.size(); i++)
        cout<<d4[i]<<" ";


// copy range of value into another deque by using range constructor
    deque<int> d5 = {1,2,3,4,5,6,7,8,9};
    deque<int> d6(d5.begin(), d5.begin()+5);

    cout<<"\nAfter copy first 5 element in deque 6 by using range \ndeque 5: ";
    for (int i = 0; i < d5.size(); i++)
        cout<<d5[i]<<" ";

    cout<<"\ndeque 6: ";
    for (int i = 0; i < d6.size(); i++)
        cout<<d6[i]<<" ";

    //output:
    //    The deque elements are: 10 10 10 10 10
    //    The last element is: 15
    //    The deque elements are: 10 10 10 10 10
    //    The first element is: 5
    //    The first element is: 10
    //    The first element is: 5
    //    The first element is: 15
    //    The last element is: 20
    //    deque size after erase(): 0
    //
    //    deque 1: 1 2
    //    deque 2: 3 4
    //    After Swap
    //    deque 1: 3 4
    //    deque 2: 1 2
    //    After move
    //    deque 1:
    //    deque 2: 1 2 3
    //    After copy
    //    deque 3: 1 2 3
    //    deque 4: 1 2 3
    //    After copy first 5 element in deque 6 by using range
    //    deque 5: 1 2 3 4 5 6 7 8 9
    //    deque 6: 1 2 3 4 5
}
