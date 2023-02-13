#include<iostream>
#include<array>
using namespace std;
/*
    to know more: https://www.geeksforgeeks.org/the-c-standard-template-library-stl/
                  https://www.studytonight.com/cpp/stl/
                  https://www.simplilearn.com/tutorials/cpp-tutorial/cpp-standard-template-library#:~:text=C%2B%2B%20STL%20(standard%20template%20library)%20is%20a%20software%20library%20for,%2C%20algorithms%2C%20and%20function%20objects.
                  https://www.studytonight.com/cpp/stl/stl-container-array
*/
/*
    Modifiers:
    1.swap() – It is used to swap the contents of one array with another array of same type. Sizes may differ.
    2.fill() - This function is used to fill the entire array with a particular value.
*/
int main()
{
    // Assign array
    array<int, 5> v;

    // Filling array with 0
    v.fill(5);

    cout<<"The array elements are: ";
    for (int i = 0; i < v.size(); i++)
        cout<<v[i]<<" ";



    // two array to perform swap
    array<int, 5> v1 = {1,2,3,4,5};
    array<int, 5> v2 = {6,7,8,9,10};

    cout<<"\n\nv1: ";
    for (int i = 0; i < v1.size(); i++)
        cout<<v1[i]<<" ";

    cout<<"\nv2: ";
    for (int i = 0; i < v2.size(); i++)
        cout<<v2[i]<<" ";

    // Swaps v1 and v2
    v1.swap(v2);

    cout<<"\nAfter Swap \nv1: ";
    for (int i = 0; i < v1.size(); i++)
        cout<<v1[i]<<" ";

    cout<<"\nv2: ";
    for (int i = 0; i < v2.size(); i++)
        cout<<v2[i]<<" ";


    //output:
    //    The array elements are: 5 5 5 5 5
    //
    //    v1: 1 2 3 4 5
    //    v2: 6 7 8 9 10
    //    After Swap
    //    v1: 6 7 8 9 10
    //    v2: 1 2 3 4 5
}
