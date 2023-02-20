#include<iostream>
#include<list>
using namespace std;
/*
    to know more: https://www.geeksforgeeks.org/the-c-standard-template-library-stl/
                  https://www.studytonight.com/cpp/stl/
                  https://www.simplilearn.com/tutorials/cpp-tutorial/cpp-standard-template-library#:~:text=C%2B%2B%20STL%20(standard%20template%20library)%20is%20a%20software%20library%20for,%2C%20algorithms%2C%20and%20function%20objects.
                  https://www.studytonight.com/cpp/stl/stl-container-list
*/
/*
    Capacity:
    1.size() – Returns the number of elements in the list.
    2.max_size() – Returns the maximum number of elements that the list can hold.
    3.resize(n) – Resizes the container so that it contains ‘n’ elements.
    4.empty() – Returns whether the container is empty.
*/
int main()
{
    list <int> v = {10,20,30,40,50};

    cout<<"list <int> v = ";
    for(int i: v)
    {
        cout<<i<<" ";
    }
    cout<<endl;

    cout<<"Size : "<<v.size();
    cout<<"\nMax_Size : "<<v.max_size();

    // resizes the list size to 4
    v.resize(4);

    // prints the list size after resize()
    cout<<"\nSize : "<<v.size();

    // checks if the list is empty or not
    if (v.empty() == false)
        cout<<"\nlist is not empty";
    else
        cout<<"\nlist is empty";


    return 0;

    //output:
    //    list <int> v = 10 20 30 40 50
    //    Size : 5
    //    Max_Size : 2305843009213693951
    //    Size : 4
    //    list is not empty
}
