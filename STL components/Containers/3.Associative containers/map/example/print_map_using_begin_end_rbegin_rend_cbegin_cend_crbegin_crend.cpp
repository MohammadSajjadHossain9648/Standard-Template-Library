#include<iostream>
#include<map>
using namespace std;
/*
    to know more: https://www.geeksforgeeks.org/the-c-standard-template-library-stl/
                  https://www.studytonight.com/cpp/stl/
                  https://www.simplilearn.com/tutorials/cpp-tutorial/cpp-standard-template-library#:~:text=C%2B%2B%20STL%20(standard%20template%20library)%20is%20a%20software%20library%20for,%2C%20algorithms%2C%20and%20function%20objects.
                  https://www.mygreatlearning.com/blog/map-in-cpp/
                  https://www.javatpoint.com/cpp-map
                  https://www.scaler.com/topics/cpp/map-in-cpp/
                  https://www.simplilearn.com/tutorials/cpp-tutorial/cpp-standard-template-library#:~:text=C%2B%2B%20STL%20(standard%20template%20library)%20is%20a%20software%20library%20for,%2C%20algorithms%2C%20and%20function%20objects.
                  https://www.studytonight.com/cpp/stl/stl-container-map
*/
/*
    1.begin() – Returns an iterator pointing to the first element in the map
    2.end() – Returns an iterator pointing to the theoretical element that follows the last element in the map
    3.rbegin() – Returns a reverse iterator pointing to the last element in the map (reverse beginning).
    It moves from last to first element
    4.rend() – Returns a reverse iterator pointing to the theoretical element preceding the first element in
    the map (considered as reverse end)
    5.cbegin() – Returns a constant iterator pointing to the first element in the map.
    6.cend() – Returns a constant iterator pointing to the theoretical element that follows the last element
    in the map.
    7.crbegin() – Returns a constant reverse iterator pointing to the last element in the map (reverse beginning).
    It moves from last to first element
    8.crend() – Returns a constant reverse iterator pointing to the theoretical element preceding the first element
    in the map (considered as reverse end)
*/
int main()
{
    map <int, string> v = {{2,"sakib"},{1,"asif"},{5,"liton"},{3,"tamim"},{4,"afif"}};

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


    // print map element using iteration which is same as auto iteration
    map <int, string> s = {{2,"sakib"},{1,"asif"},{5,"liton"},{3,"tamim"},{4,"afif"}};

    map<int, string>::iterator it;  // Creating the iterator.

    cout<<"\nmap<int, string> s\nid\tname\n";
    for (it = s.begin(); it != s.end(); it++)
    {
    	cout<<it->first<<"\t"<<it->second<<endl;
    }
    cout<<endl;




//reverse print the map
    cout<<"\nOutput of rbegin and rend: ";
    cout<<"\nmap<int, string> v\nid\tname\n";
    for (auto ir = v.rbegin(); ir != v.rend(); ++ir)
        cout<<ir->first<<"\t"<<ir->second<<endl;

    cout<<"\nOutput of crbegin and crend : ";
    cout<<"\nmap<int, string> v\nid\tname\n";
    for (auto ir = v.crbegin(); ir != v.crend(); ++ir)
        cout<<ir->first<<"\t"<<ir->second<<endl;

    return 0;

    //output:
    //    map<int, string> v
    //    id      name
    //    1       asif
    //    2       sakib
    //    3       tamim
    //    4       afif
    //    5       liton
    //
    //    Output of begin and end:
    //    map<int, string> v
    //    id      name
    //    1       asif
    //    2       sakib
    //    3       tamim
    //    4       afif
    //    5       liton
    //
    //    Output of cbegin and cend:
    //    map<int, string> v
    //    id      name
    //    1       asif
    //    2       sakib
    //    3       tamim
    //    4       afif
    //    5       liton
    //
    //    map<int, string> s
    //    id      name
    //    1       asif
    //    2       sakib
    //    3       tamim
    //    4       afif
    //    5       liton
    //
    //
    //    Output of rbegin and rend:
    //    map<int, string> v
    //    id      name
    //    5       liton
    //    4       afif
    //    3       tamim
    //    2       sakib
    //    1       asif
    //
    //    Output of crbegin and crend :
    //    map<int, string> v
    //    id      name
    //    5       liton
    //    4       afif
    //    3       tamim
    //    2       sakib
    //    1       asif
}
