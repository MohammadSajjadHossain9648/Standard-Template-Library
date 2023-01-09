#include<iostream>
#include<string>
using namespace std;
/*
    to know more: https://www.geeksforgeeks.org/the-c-standard-template-library-stl/
                  https://www.studytonight.com/cpp/stl/
                  https://www.simplilearn.com/tutorials/cpp-tutorial/cpp-standard-template-library#:~:text=C%2B%2B%20STL%20(standard%20template%20library)%20is%20a%20software%20library%20for,%2C%20algorithms%2C%20and%20function%20objects.
                  https://www.studytonight.com/cpp/stl/stl-container-string
*/
/*
    1.begin() – Returns an iterator pointing to the first element in the string
    2.end() – Returns an iterator pointing to the theoretical element that follows the last element in the string
    3.rbegin() – Returns a reverse iterator pointing to the last element in the string (reverse beginning).
    It moves from last to first element
    4.rend() – Returns a reverse iterator pointing to the theoretical element preceding the first element in
    the string (considered as reverse end)
    5.cbegin() – Returns a constant iterator pointing to the first element in the string.
    6.cend() – Returns a constant iterator pointing to the theoretical element that follows the last element
    in the string.
    7.crbegin() – Returns a constant reverse iterator pointing to the last element in the string (reverse beginning).
    It moves from last to first element
    8.crend() – Returns a constant reverse iterator pointing to the theoretical element preceding the first element
    in the string (considered as reverse end)

    note: iteration function never works on char array like char ch[] = "i am new";
*/
int main()
{
    string s = "i am new";

    cout<<"string s = "<<s<<endl;

    cout<<"\nOutput of begin and end: ";
    for (auto i = s.begin(); i != s.end(); ++i)
        cout<<*i; //without pointer give error-> cout<<s[i];

    cout<<"\nOutput of cbegin and cend: ";
    for (auto i = s.cbegin(); i != s.cend(); ++i)
        cout<<*i;


//reverse print the char array or string
    cout<<"\nOutput of rbegin and rend: ";
    for (auto ir = s.rbegin(); ir != s.rend(); ++ir)
        cout<<*ir;

    cout<<"\nOutput of crbegin and crend : ";
    for (auto ir = s.crbegin(); ir != s.crend(); ++ir)
        cout<<*ir;




//print with using iterator
    string str = "geeksforgeeks";

    // Declaring iterator
    string::iterator it;

    // Declaring reverse iterator
    string::reverse_iterator it1; //never work for reverse string output -> string::iterator it1;

    // Displaying string
    cout<<"\nThe string using forward iterators is : ";
    for (it = str.begin(); it != str.end(); it++) //same as -> for (string::iterator it = str.begin(); it != str.end(); it++)
        cout<<*it;

    // Displaying reverse string
    cout<<"\nThe reverse string using reverse iterators is : ";
    for (it1 = str.rbegin(); it1 != str.rend(); it1++)
        cout<<*it1;

    return 0;

    //output:
    //    string s = i am new
    //
    //    Output of begin and end: i am new
    //    Output of cbegin and cend: i am new
    //    Output of rbegin and rend: wen ma i
    //    Output of crbegin and crend : wen ma i
    //    The string using forward iterators is : geeksforgeeks
    //    The reverse string using reverse iterators is : skeegrofskeeg
}
