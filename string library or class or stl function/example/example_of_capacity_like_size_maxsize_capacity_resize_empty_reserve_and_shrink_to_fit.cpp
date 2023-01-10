#include<iostream>
#include<string>
using namespace std;
/*
    to know more: https://www.geeksforgeeks.org/stdstring-class-in-c/
                  https://www.geeksforgeeks.org/strings-library-in-cpp-stl/
                  https://cplusplus.com/reference/string/string/
                  https://www.scaler.com/topics/cpp/strings-in-cpp/
*/
/*
    Capacity:
    1.size()/length() – Returns the number of elements in the string.
    2.max_size() – Returns the maximum number of elements that the string can hold.
    3.capacity() – Returns the size of the storage space currently allocated to the string expressed as number
    of elements.
    4.resize(n) – Resizes the container so that it contains ‘n’ elements.
    5.empty() – Returns whether the container is empty.
    6.find()/ npos - Maximum value for size_t, if found print starting index, else -1
    7.shrink_to_fit() – Reduces the capacity of the container to fit its size and destroys all elements beyond
    the capacity.
    8.reserve() – Requests that the string capacity be at least enough to contain n elements.
*/
int main()
{
    string s = "i am new"; //same as ->string s = "i am new\0 hello";

    cout<<"string s = "<<s<<endl;

    cout<<"\nSize : "<<s.size();
    cout<<"\nSize : "<<s.length();
    cout<<"\nCapacity : "<<s.capacity();
    cout<<"\nMax_Size : "<<s.max_size();

    // resizes the string size to 4
    s.resize(4);

    // prints the string size after resize()
    cout<<"\nSize : "<<s.size();

    cout<<"\nafter resize(4):\nstring s = "<<s<<endl;



//5.empty
    // checks if the string is empty or not
    if (s.empty() == false)
        cout<<"\nstring is not empty";
    else
        cout<<"\nstring is empty";




//6.find()/ npos -> if found print starting index, else -1
    string str1 = "geeksforgeeks";
    string str2 = "for";

    // Find position of string s2
    int found = str1.find(str2); //same as ->size_t found = str1.find(str2); -> print index no
    cout<<"\nfound : "<<found;


    //or can be write by npos
    // Find position of string s2
    int found2 = str1.find(str2); //print index no

    if(found2 != string::npos)
    {
        cout<<"\nfirst "<<str2<<" found at: "<< found2<<endl;
    }
    else
    {
        cout<<str2<<" is not in"<<"the string"<<endl;
    }




//7.shrink_to_fit
    string str = "geeksforgeeks is for geeks";

    // Displaying string
    cout<<"\nThe initial string is : "<<str<<endl;

    // Resizing string using resize()
    str.resize(13);

    // Displaying string
    cout<<"\nThe string after resize operation is : "<<str<<endl;

    // Displaying capacity of string
    cout<<"\nThe capacity of string is : "<<str.capacity()<<endl;

    // Displaying length of the string
    cout<<"\nThe length of the string is :"<<str.length()<<endl;

    // Decreasing the capacity of string using shrink_to_fit()
    str.shrink_to_fit();

    // Displaying string
    cout<<"\nThe new capacity after shrinking is : "<<str.capacity()<<endl;



//difference between size and capacity
    //size indicates how many elements in string and capacity indiactes space for this string
    //when user want input a value in string, and capacity is equal to size means no space for input value thats time
    //capacity increase 2 times. and also after clear the string, the capacity still remain same but size is zero.
    cout<<"\ndifference between size and capacity:\n";

    string s1;
    cout<<"\nSize : "<<s1.size();
    cout<<"\nCapacity : "<<s1.capacity();

    s1.push_back('h');
    cout<<"\n\nstring<int> s1 = h";
    cout<<"\nSize : "<<s1.size();
    cout<<"\nCapacity : "<<s1.capacity();

    s1.push_back('e');
    cout<<"\n\nstring<int> s1 = h e";
    cout<<"\nSize : "<<s1.size();
    cout<<"\nCapacity : "<<s1.capacity();

    s1.push_back('l');
    cout<<"\n\nstring<int> s1 = h e l";
    cout<<"\nSize : "<<s1.size();
    cout<<"\nCapacity : "<<s1.capacity();

    s1.push_back('l');
    cout<<"\n\nstring<int> s1 = h e l l";
    cout<<"\nSize : "<<s1.size();
    cout<<"\nCapacity : "<<s1.capacity();

    s1.push_back('o');
    cout<<"\n\nstring<int> s1 = h e l l o";
    cout<<"\nSize : "<<s1.size();
    cout<<"\nCapacity : "<<s1.capacity();

    s1.clear();
    cout<<"\n\nafter clear the string\nSize : "<<s1.size();
    cout<<"\nCapacity : "<<s1.capacity();
    return 0;

    //output:
    //    string s = i am new
    //
    //    Size : 8
    //    Size : 8
    //    Capacity : 15
    //    Max_Size : 4611686018427387903
    //    Size : 4
    //    after resize(4):
    //    string s = i am
    //
    //    string is not empty
    //    found : 5
    //    first for found at: 5
    //
    //    The initial string is : geeksforgeeks is for geeks
    //
    //    The string after resize operation is : geeksforgeeks
    //
    //    The capacity of string is : 26
    //
    //    The length of the string is :13
    //
    //    The new capacity after shrinking is : 15
    //
    //    difference between size and capacity:
    //
    //    Size : 0
    //    Capacity : 15
    //
    //    string<int> s1 = h
    //    Size : 1
    //    Capacity : 15
    //
    //    string<int> s1 = h e
    //    Size : 2
    //    Capacity : 15
    //
    //    string<int> s1 = h e l
    //    Size : 3
    //    Capacity : 15
    //
    //    string<int> s1 = h e l l
    //    Size : 4
    //    Capacity : 15
    //
    //    string<int> s1 = h e l l o
    //    Size : 5
    //    Capacity : 15
    //
    //    after clear the string
    //    Size : 0
    //    Capacity : 15
}
