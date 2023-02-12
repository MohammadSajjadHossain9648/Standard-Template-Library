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
    Capacity:
    1.size() – Returns the number of elements in the array.
    2.max_size() – Returns the maximum number of elements that the array can hold.
    3.empty() – Returns whether the array is empty.
*/
int main()
{
    array <int, 5> v = {10,20,30,40,50};

    cout<<"array <int> v = ";
    for(int i: v)
    {
        cout<<i<<" ";
    }
    cout<<endl;

    cout<<"Size : "<<v.size();
    cout<<"\nMax_Size : "<<v.max_size();


    // checks if the array is empty or not
    if (v.empty() == false)
        cout<<"\narray is not empty";
    else
        cout<<"\narray is empty";


    return 0;

    //output:
    //    array <int> v = 10 20 30 40 50
    //    Size : 5
    //    Max_Size : 5
    //    array is not empty
}
