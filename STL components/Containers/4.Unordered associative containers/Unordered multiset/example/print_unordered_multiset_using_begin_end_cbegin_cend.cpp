#include<iostream>
#include<unordered_set>
using namespace std;
/*
    to know more: https://www.geeksforgeeks.org/the-c-standard-template-library-stl/
                  https://www.studytonight.com/cpp/stl/
                  https://www.simplilearn.com/tutorials/cpp-tutorial/cpp-standard-template-library#:~:text=C%2B%2B%20STL%20(standard%20template%20library)%20is%20a%20software%20library%20for,%2C%20algorithms%2C%20and%20function%20objects.
                  https://www.mygreatlearning.com/blog/unordered_multiset-in-cpp/
                  https://www.javatpoint.com/cpp-unordered_multiset
                  https://www.scaler.com/topics/cpp/unordered_multiset-in-cpp/
                  https://www.simplilearn.com/tutorials/cpp-tutorial/cpp-standard-template-library#:~:text=C%2B%2B%20STL%20(standard%20template%20library)%20is%20a%20software%20library%20for,%2C%20algorithms%2C%20and%20function%20objects.
                  https://www.studytonight.com/cpp/stl/stl-container-unordered_multiset
*/
int main()
{
    unordered_multiset <int> v = {10,20,50,40,30};

    cout<<"unordered_multiset <int> v = ";
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

    // print unordered_multiset element using iteration
    unordered_multiset<int> s = {12,43,234,65,34,54,3};

    unordered_multiset<int>::iterator it;  // Creating the iterator.

    cout<<"\nunordered_multiset<int> s = ";
    for (it = s.begin(); it != s.end(); it++)
    {
    	cout<<*it<<" ";
    }
    cout<<endl;


    return 0;

    //output:
    //    unordered_multiset <int> v = 30 40 50 20 10
    //    Output of begin and end: 30 40 50 20 10
    //    Output of cbegin and cend: 30 40 50 20 10
    //    unordered_multiset<int> s = 3 54 34 65 234 43 12
}
