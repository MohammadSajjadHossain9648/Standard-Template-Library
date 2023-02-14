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
    Element access:
    1.reference operator [index_no] – Returns a reference to the element at position ‘index_no’ in the array
    2.at(index_no) – Returns a reference to the element at position ‘index_no’ in the array
    3.front() – Returns a reference to the first element in the array
    4.back() – Returns a reference to the last element in the array
    5.data() – Returns a direct pointer to the memory array used internally by the array to store its owned elements.
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

    cout<<"Reference operator [index_no] : v[2] = "<<v[2];

    cout<<"\nat : v.at(4) = "<<v.at(4);

    cout<<"\nfront() : v.front() = "<<v.front();

    cout<<"\nback() : v.back() = "<<v.back();

    // pointer to the first element
    int* pos = v.data();
    cout<<"\nThe first element is "<<*pos;

    
    //output:
    //    array <int> v = 10 20 30 40 50
    //    Reference operator [index_no] : v[2] = 30
    //    at : v.at(4) = 50
    //    front() : v.front() = 10
    //    back() : v.back() = 50
    //    The first element is 10
}
