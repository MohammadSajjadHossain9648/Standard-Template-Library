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
int main()
{
    set <int> v = {10,20,50,40,30};

    cout<<"set <int> v = ";
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

    // print set element using iteration
    set<int> s = {12,43,234,65,34,54,3};

    set<int>::iterator it;  // Creating the iterator.

    cout<<"\nset<int> s = ";
    for (it = s.begin(); it != s.end(); it++)
    {
    	cout<<*it<<" ";
    }
    cout<<endl;



//reverse print the set
    cout<<"\nOutput of rbegin and rend: ";
    for (auto ir = v.rbegin(); ir != v.rend(); ++ir)
        cout<<*ir<<" ";

    cout<<"\nOutput of crbegin and crend : ";
    for (auto ir = v.crbegin(); ir != v.crend(); ++ir)
        cout<<*ir<<" ";

    return 0;

    //output:
    //    set <int> v = 10 20 30 40 50
    //    Output of begin and end: 10 20 30 40 50
    //    Output of cbegin and cend: 10 20 30 40 50
    //    set<int> s = 3 12 34 43 54 65 234
    //
    //    Output of rbegin and rend: 50 40 30 20 10
    //    Output of crbegin and crend : 50 40 30 20 10
}
