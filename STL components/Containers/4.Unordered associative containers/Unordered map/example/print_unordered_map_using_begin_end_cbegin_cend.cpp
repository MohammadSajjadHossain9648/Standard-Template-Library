#include<iostream>
#include<unordered_map>
using namespace std;
/*
    to know more: https://www.geeksforgeeks.org/the-c-standard-template-library-stl/
                  https://www.studytonight.com/cpp/stl/
                  https://www.simplilearn.com/tutorials/cpp-tutorial/cpp-standard-template-library#:~:text=C%2B%2B%20STL%20(standard%20template%20library)%20is%20a%20software%20library%20for,%2C%20algorithms%2C%20and%20function%20objects.
                  https://www.mygreatlearning.com/blog/unordered_map-in-cpp/
                  https://www.javatpoint.com/cpp-unordered_map
                  https://www.scaler.com/topics/cpp/unordered_map-in-cpp/
                  https://www.simplilearn.com/tutorials/cpp-tutorial/cpp-standard-template-library#:~:text=C%2B%2B%20STL%20(standard%20template%20library)%20is%20a%20software%20library%20for,%2C%20algorithms%2C%20and%20function%20objects.
                  https://www.studytonight.com/cpp/stl/stl-container-unordered_map
*/
/*
    Iterators:
    1.begin() – Returns an iterator pointing to the first element in the unordered_map
    2.end() – Returns an iterator pointing to the theoretical element that follows the last element in the unordered_map
    3.cbegin() – Returns a constant iterator pointing to the first element in the unordered_map.
    4.cend() – Returns a constant iterator pointing to the theoretical element that follows the last element
    in the unordered_map.
*/
int main()
{
    unordered_map<int, string> v = {{2,"sakib"},{1,"asif"},{5,"liton"},{3,"tamim"},{4,"afif"}};

    cout<<"\nmap<int, string> v\nid\tname\n";
    for(auto i: v)
    {
        cout<<i.first<<"\t"<<i.second<<endl;
    }
    cout<<endl;


    cout<<"Output of begin and end: ";
    cout<<"\nmap<int, string> v\nid\tname\n";
    for (auto i = v.begin(); i != v.end(); ++i)
        cout<<i->first<<"\t"<<i->second<<endl;

    cout<<"\nOutput of cbegin and cend: ";
    cout<<"\nmap<int, string> v\nid\tname\n";
    for (auto i = v.cbegin(); i != v.cend(); ++i)
        cout<<i->first<<"\t"<<i->second<<endl;



    // print unordered_map element using iteration
    unordered_map<int, string> s = {{2,"sakib"},{1,"asif"},{5,"liton"},{3,"tamim"},{4,"afif"}};

    unordered_map<int, string>::iterator it;  // Creating the iterator.

   cout<<"\nmap<int, string> s\nid\tname\n";
    for (it = s.begin(); it != s.end(); it++)
    {
    	cout<<it->first<<"\t"<<it->second<<endl;
    }
    cout<<endl;


    return 0;

    //output:
    //
    //    map<int, string> v
    //    id      name
    //    4       afif
    //    3       tamim
    //    5       liton
    //    1       asif
    //    2       sakib
    //
    //    Output of begin and end:
    //    map<int, string> v
    //    id      name
    //    4       afif
    //    3       tamim
    //    5       liton
    //    1       asif
    //    2       sakib
    //
    //    Output of cbegin and cend:
    //    map<int, string> v
    //    id      name
    //    4       afif
    //    3       tamim
    //    5       liton
    //    1       asif
    //    2       sakib
    //
    //    map<int, string> s
    //    id      name
    //    4       afif
    //    3       tamim
    //    5       liton
    //    1       asif
    //    2       sakib
}
