#include<iostream>
#include<array>
#include<tuple> // for get()
using namespace std;
/*
    to know more: https://www.geeksforgeeks.org/the-c-standard-template-library-stl/
                  https://www.studytonight.com/cpp/stl/
                  https://www.simplilearn.com/tutorials/cpp-tutorial/cpp-standard-template-library#:~:text=C%2B%2B%20STL%20(standard%20template%20library)%20is%20a%20software%20library%20for,%2C%20algorithms%2C%20and%20function%20objects.
                  https://www.studytonight.com/cpp/stl/stl-container-array
*/
/*
    1.begin() – Returns an iterator pointing to the first element in the array
    2.end() – Returns an iterator pointing to the theoretical element that follows the last element in the array
    3.rbegin() – Returns a reverse iterator pointing to the last element in the array (reverse beginning).
    It moves from last to first element
    4.rend() – Returns a reverse iterator pointing to the theoretical element preceding the first element in
    the array (considered as reverse end)
    5.cbegin() – Returns a constant iterator pointing to the first element in the array.
    6.cend() – Returns a constant iterator pointing to the theoretical element that follows the last element
    in the array.
    7.crbegin() – Returns a constant reverse iterator pointing to the last element in the array (reverse beginning).
    It moves from last to first element
    8.crend() – Returns a constant reverse iterator pointing to the theoretical element preceding the first element
    in the array (considered as reverse end)
    9.get() :- This function is also used to access the elements of array. This function is not the member of
    array class but overloaded function from class tuple. use header #include<tuple>
*/
int main()
{
    array <int, 5> v = {10,20,30,40,50};

    cout<<"array <int, 5> v = ";
    for(int i: v)
    {
        cout<<i<<" ";
    }
    cout<<endl;

    cout<<"Output of begin and end: ";
    for (auto i = v.begin(); i != v.end(); ++i)
        cout<<*i<<" ";

    cout<<"\nOutput of cbegin and cend: ";
    for (auto i = v.cbegin(); i != v.cend(); ++i)
        cout<<*i<<" ";

    // Printing array elements using get()
    cout << "The array elements are (using get()) : ";
    cout << get<0>(ar) << " " << get<1>(ar) << " ";
    cout << get<2>(ar) << " " << get<3>(ar) << " ";
    cout << get<4>(ar) << " " << get<5>(ar) << " ";
    cout << endl;

//reverse print the dynamic array or array
    cout<<"\nOutput of rbegin and rend: ";
    for (auto ir = v.rbegin(); ir != v.rend(); ++ir)
        cout<<*ir<<" ";

    cout<<"\nOutput of crbegin and crend : ";
    for (auto ir = v.crbegin(); ir != v.crend(); ++ir)
        cout<<*ir<<" ";

    
    

    //output:
    //    array <int, 5> v = 10 20 30 40 50
    //    Output of begin and end: 10 20 30 40 50
    //    Output of cbegin and cend: 10 20 30 40 50
    //    Output of rbegin and rend: 50 40 30 20 10
    //    Output of crbegin and crend : 50 40 30 20 10
}
