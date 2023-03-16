#include<iostream>
#include<map>
using namespace std;
/*
    to know more: https://www.geeksforgeeks.org/the-c-standard-template-library-stl/
                  https://www.studytonight.com/cpp/stl/
                  https://www.simplilearn.com/tutorials/cpp-tutorial/cpp-standard-template-library#:~:text=C%2B%2B%20STL%20(standard%20template%20library)%20is%20a%20software%20library%20for,%2C%20algorithms%2C%20and%20function%20objects.
                  https://www.mygreatlearning.com/blog/multimap-in-cpp/
                  https://www.javatpoint.com/cpp-multimap
                  https://www.scaler.com/topics/cpp/multimap-in-cpp/
                  https://www.simplilearn.com/tutorials/cpp-tutorial/cpp-standard-template-library#:~:text=C%2B%2B%20STL%20(standard%20template%20library)%20is%20a%20software%20library%20for,%2C%20algorithms%2C%20and%20function%20objects.
                  https://www.studytonight.com/cpp/stl/stl-container-multimap
*/
/*
    Allocator:
    1.get_allocator() - C++ multimap get_allocator() function is used to return the copy of allocator object which
    helps to construct the multimap container.
    Time Complexity: O(1).
*/
int main()
{
//Example 1: The program below shows how allocator of a multimap can be used to allocate an array of 5 elements.
    multimap<int, string> s;
    int len=5;

    //allocate an array of 5 elements using s's allocator:
    pair<const int, string> *arr;

    arr = s.get_allocator().allocate(len);

    //size of int is 4
    cout<<"size of multimap<int, string> s is "<< sizeof(*arr) * 5<<endl;

    //still multimap s is empty cause we just allocate the length of multimap
    cout<<"multimap<int, string> s = ";
    for(auto i: s)
    {
        cout<<i.first<<" "<<i.second;
    }
    cout<<endl;


    // deallocate the memory allotted previously
    s.get_allocator().deallocate(arr, len);


    //output:
    //    size of multimap<int, string> s is 200
    //    multimap<int, string> s =
}
