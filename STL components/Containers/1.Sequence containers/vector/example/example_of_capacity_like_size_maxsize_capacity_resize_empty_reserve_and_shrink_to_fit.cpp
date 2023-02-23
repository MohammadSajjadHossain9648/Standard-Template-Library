#include<iostream>
#include<vector>
using namespace std;
/*
    to know more: https://www.geeksforgeeks.org/the-c-standard-template-library-stl/
                  https://www.studytonight.com/cpp/stl/
                  https://www.simplilearn.com/tutorials/cpp-tutorial/cpp-standard-template-library#:~:text=C%2B%2B%20STL%20(standard%20template%20library)%20is%20a%20software%20library%20for,%2C%20algorithms%2C%20and%20function%20objects.
                  https://www.studytonight.com/cpp/stl/stl-container-vector
*/
/*
    Capacity:
    1.size() – Returns the number of elements in the vector.
    2.max_size() – Returns the maximum number of elements that the vector can hold.
    3.capacity() – Returns the size of the storage space currently allocated to the vector expressed as number
    of elements.
    4.resize(n) – Resizes the container so that it contains ‘n’ elements.
    5.empty() – Returns whether the container is empty.
    6.shrink_to_fit() – Reduces the capacity of the container to fit its size and destroys all elements beyond
    the capacity.
    7.reserve() – Requests that the vector capacity be at least enough to contain n elements.
*/
int main()
{
    vector <int> v = {10,20,30,40,50};

    cout<<"vector <int> v = ";
    for(auto i: v)
    {
        cout<<i<<" ";
    }
    cout<<endl;

    cout<<"Size : "<<v.size();
    cout<<"\nCapacity : "<<v.capacity();
    cout<<"\nMax_Size : "<<v.max_size();

    // resizes the vector size to 4
    v.resize(4);

    // prints the vector size after resize()
    cout<<"\nSize : "<<v.size();

    cout<<"\nafter resize(4):\nvector <int> v = ";
    for(auto i: v)
    {
        cout<<i<<" ";
    }
    cout<<endl;

    // checks if the vector is empty or not
    if (v.empty() == false)
        cout<<"\nVector is not empty";
    else
        cout<<"\nVector is empty";

//6.shrink_to_fit
    //Shrinks the vector
    v.shrink_to_fit();
    cout<<"\nVector elements are: ";
    for (auto it = v.begin(); it != v.end(); it++)
        cout<<*it<<" ";
    cout<<endl;


//difference between size and capacity
    //size indicates how many elements in vector and capacity indiactes space for this vector
    //when user want input a value in vector, and capacity is equal to size means no space for input value thats time
    //capacity increase 2 times. and also after clear the vector, the capacity still remain same but size is zero.
    cout<<"\ndifference between size and capacity:\n";

    vector<int> vec;
    cout<<"Size : "<<vec.size();
    cout<<"\nCapacity : "<<vec.capacity();

    vec.push_back(1);
    cout<<"\n\nvector<int> vec = 1";
    cout<<"\nSize : "<<vec.size();
    cout<<"\nCapacity : "<<vec.capacity();

    vec.push_back(2);
    cout<<"\n\nvector<int> vec = 1 2";
    cout<<"\nSize : "<<vec.size();
    cout<<"\nCapacity : "<<vec.capacity();

    vec.push_back(3);
    cout<<"\n\nvector<int> vec = 1 2 3";
    cout<<"\nSize : "<<vec.size();
    cout<<"\nCapacity : "<<vec.capacity();

    vec.push_back(4);
    cout<<"\n\nvector<int> vec = 1 2 3 4";
    cout<<"\nSize : "<<vec.size();
    cout<<"\nCapacity : "<<vec.capacity();

    vec.push_back(5);
    cout<<"\n\nvector<int> vec = 1 2 3 4 5";
    cout<<"\nSize : "<<vec.size();
    cout<<"\nCapacity : "<<vec.capacity();

    vec.clear();
    cout<<"\n\nafter clear the vector\nSize : "<<vec.size();
    cout<<"\nCapacity : "<<vec.capacity();
    return 0;

    //output:
    //    vector <int> v = 10 20 30 40 50
    //    Size : 5
    //    Capacity : 5
    //    Max_Size : 2305843009213693951
    //    Size : 4
    //
    //    after resize(4):
    //    vector <int> v = 10 20 30 40
    //    Vector is not empty
    //    Vector elements are: 10 20 30 40
    //
    //
    //    difference between size and capacity:
    //    Size : 0
    //    Capacity : 0
    //
    //    vector<int> vec = 1
    //    Size : 1
    //    Capacity : 1
    //
    //    vector<int> vec = 1 2
    //    Size : 2
    //    Capacity : 2
    //
    //    vector<int> vec = 1 2 3
    //    Size : 3
    //    Capacity : 4
    //
    //    vector<int> vec = 1 2 3 4
    //    Size : 4
    //    Capacity : 4
    //
    //    vector<int> vec = 1 2 3 4 5
    //    Size : 5
    //    Capacity : 8
    //
    //    after clear the vector
    //    Size : 0
    //    Capacity : 8
}
