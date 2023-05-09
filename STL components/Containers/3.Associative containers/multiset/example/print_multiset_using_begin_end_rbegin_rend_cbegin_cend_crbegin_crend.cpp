#include<iostream>
#include<set>
using namespace std;
/*
    to know more: https://www.geeksforgeeks.org/the-c-standard-template-library-stl/
                  https://www.studytonight.com/cpp/stl/
                  https://www.simplilearn.com/tutorials/cpp-tutorial/cpp-standard-template-library#:~:text=C%2B%2B%20STL%20(standard%20template%20library)%20is%20a%20software%20library%20for,%2C%20algorithms%2C%20and%20function%20objects.
                  https://www.mygreatlearning.com/blog/multiset-in-cpp/
                  https://www.javatpoint.com/cpp-multiset
                  https://www.scaler.com/topics/cpp/multiset-in-cpp/
                  https://www.simplilearn.com/tutorials/cpp-tutorial/cpp-standard-template-library#:~:text=C%2B%2B%20STL%20(standard%20template%20library)%20is%20a%20software%20library%20for,%2C%20algorithms%2C%20and%20function%20objects.
                  https://www.studytonight.com/cpp/stl/stl-container-multiset
*/
/*
    1.begin() – Returns an iterator pointing to the first element in the multiset
    2.end() – Returns an iterator pointing to the theoretical element that follows the last element in the multiset
    3.rbegin() – Returns a reverse iterator pointing to the last element in the multiset (reverse beginning).
    It moves from last to first element
    4.rend() – Returns a reverse iterator pointing to the theoretical element preceding the first element in
    the multiset (considered as reverse end)
    5.cbegin() – Returns a constant iterator pointing to the first element in the multiset.
    6.cend() – Returns a constant iterator pointing to the theoretical element that follows the last element
    in the multiset.
    7.crbegin() – Returns a constant reverse iterator pointing to the last element in the multiset (reverse beginning).
    It moves from last to first element
    8.crend() – Returns a constant reverse iterator pointing to the theoretical element preceding the first element
    in the multiset (considered as reverse end)
*/
int main()
{
    multiset <int> v = {10,20,50,10,40,30};

    cout<<"multiset <int> v = ";
    for(auto i: v)
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

    // print multiset element using iteration
    multiset<int> s = {12,43,234,65,34,54,3};

    multiset<int>::iterator it;  // Creating the iterator.

    cout<<"\nmultiset<int> s = ";
    for (it = s.begin(); it != s.end(); it++)
    {
    	cout<<*it<<" ";
    }
    cout<<endl;



//reverse print the multiset
    cout<<"\nOutput of rbegin and rend: ";
    for (auto ir = v.rbegin(); ir != v.rend(); ++ir)
        cout<<*ir<<" ";

    cout<<"\nOutput of crbegin and crend : ";
    for (auto ir = v.crbegin(); ir != v.crend(); ++ir)
        cout<<*ir<<" ";

    return 0;

    //output:
    //    multiset <int> v = 10 10 20 30 40 50
    //    Output of begin and end: 10 10 20 30 40 50
    //    Output of cbegin and cend: 10 10 20 30 40 50
    //    multiset<int> s = 3 12 34 43 54 65 234
    //
    //    Output of rbegin and rend: 50 40 30 20 10
    //    Output of crbegin and crend : 50 40 30 20 10
}
