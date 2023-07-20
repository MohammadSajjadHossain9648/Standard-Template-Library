#include<iostream>
#include<unordered_set>
using namespace std;
/*
    always remember: whatever you input in unordered_set, it always take unique values.
*/
int main()
{

//for taking user input in unordered_set
    unordered_set<int> v;
    int x, len;
    cout<<"enter the length of unordered_set: ";
    cin>>len;

    cout<<"unordered_set<int> v : \n";
    for(int i=0; i<len; i++)
    {
        cin>>x;
        v.insert(x);
    }
    cout<<endl;

    cout<<"unordered_set<int> v = ";
    for(auto i: v)
    {
        cout<<i<<" ";
    }
    cout<<endl;


// initialize in unordered_set
    // Initializer List 
    unordered_set <int> v1 = {10,20,50,40,30}; 

    /* same as Uniform Initialization
    unordered_set <int> v1 {10,20,50,40,30};
    */

    
    cout<<"unordered_set<int> v1 = ";
    for(auto i: v1)
    {
        cout<<i<<" ";
    }
    cout<<endl;

    //same as before v1
    unordered_set<int> v2;
    for(auto i:{1,2,5,4,3})
    {
        v2.insert(i);
    }
    cout<<endl;

    cout<<"unordered_set<int> v2 = ";
    for(auto i: v2)
    {
        cout<<i<<" ";
    }
    cout<<endl;

    //or
    unordered_set<int> v3;
    v3.insert(10);
    v3.insert(9);
    v3.insert(8);
    v3.insert(7);
    v3.insert(6);

    cout<<"\nunordered_set<int> v3 = ";
    for(auto i: v3)
    {
        cout<<i<<" ";
    }
    cout<<endl;


    //or can be write same as use emplace instead of insert
    unordered_set<int> v4;
    v4.emplace(8);
    v4.emplace(7);
    v4.emplace(9);
    v4.emplace(6);
    v4.emplace(10);

    cout<<"\nunordered_set<int> v4 = ";
    for(auto i: v4)
    {
        cout<<i<<" ";
    }
    cout<<endl;


// iterator
    // print unordered_set element using iteration
    unordered_set<int> s = {12,43,234,65,34,54,3};

    unordered_set<int>::iterator it;  // Creating the iterator.

    cout<<"unordered_set<int> s = ";
    for (it = s.begin(); it != s.end(); it++)
    {
    	cout<<*it<<" ";
    }
    cout<<endl;

    // print unordered_set element without using iteration
    unordered_set<int> s1 = {12,43,234,65,34,54,3};

    cout<<"unordered_set<int> s1 = ";
    for (auto i: s1)
    {
    	cout<<i<<" ";
    }
    cout<<endl;



    //output:
    //    enter the length of unordered_set: 5
    //    unordered_set<int> v :
    //    10
    //    20
    //    30
    //    10
    //    40
    //
    //    unordered_set<int> v = 40 30 20 10
    //    unordered_set<int> v1 = 30 40 50 20 10
    //
    //    unordered_set<int> v2 = 3 4 5 2 1
    //
    //    unordered_set<int> v3 = 6 7 8 9 10
    //
    //    unordered_set<int> v4 = 10 6 9 7 8
    //    unordered_set<int> s = 3 54 34 65 234 43 12
    //    unordered_set<int> s1 = 3 54 34 65 234 43 12
}
