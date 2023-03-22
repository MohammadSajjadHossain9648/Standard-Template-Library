#include<iostream>
#include<set>
using namespace std;
/*
    to know more: https://www.geeksforgeeks.org/the-c-standard-template-library-stl/
                  https://www.studytonight.com/cpp/stl/
                  https://www.simplilearn.com/tutorials/cpp-tutorial/cpp-standard-template-library#:~:text=C%2B%2B%20STL%20(standard%20template%20library)%20is%20a%20software%20library%20for,%2C%20algorithms%2C%20and%20function%20objects.
                  https://www.mygreatlearning.com/blog/set-in-cpp/
                  https://www.javatpoint.com/cpp-set
                  https://www.scaler.com/topics/cpp/set-in-cpp/
                  https://www.simplilearn.com/tutorials/cpp-tutorial/cpp-standard-template-library#:~:text=C%2B%2B%20STL%20(standard%20template%20library)%20is%20a%20software%20library%20for,%2C%20algorithms%2C%20and%20function%20objects.
                  https://www.studytonight.com/cpp/stl/stl-container-set
*/
/*
    Allocator:
    1.get_allocator() - C++ set get_allocator() function is used to return the copy of allocator object which
    helps to construct the set container.
    Time Complexity: O(1).
*/
int main()
{
//Example 1: The program below shows how allocator of a set can be used to allocate an array of 5 elements.
    set<int> s;
    int len=5;

    //allocate an array of 5 elements using s's allocator:
    int *arr;

    arr = s.get_allocator().allocate(len);

    //size of int is 4
    cout<<"size of set<int> s is "<< sizeof(*arr) * 5<<endl;

    //still set s is empty cause we just allocate the length of set
    cout<<"set<int> s = ";
    for(auto i: s)
    {
        cout<<i<<" ";
    }
    cout<<endl;


    //now assign len number of values in array arr
    cout<<"arr[] = ";
    for(int i=0; i<len; i++)
    {
        arr[i] = (i+1)*10;
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    //still set s is empty cause we just need to deallocate the array value in set
    cout<<"set<int> s = ";
    for(auto i: s)
    {
        cout<<i<<" ";
    }
    cout<<endl;

    // deallocate the memory allotted previously
    s.get_allocator().deallocate(arr, len);


    //output:
    //    size of set<int> s is 20
    //    set<int> s =
    //    arr[] = 10 20 30 40 50
    //    set<int> s =
}
