#include<iostream>
#include<set>
using namespace std;

int main()
{

//for taking user input in set
    set<int> v;
    int x, len;
    cout<<"enter the length of set: ";
    cin>>len;

    cout<<"set<int> v : \n";
    for(int i=0; i<len; i++)
    {
        cin>>x;
        v.insert(x);
    }
    cout<<endl;

    cout<<"set<int> v = ";
    for(auto i: v)
    {
        cout<<i<<" ";
    }
    cout<<endl;


// initialize in set
    set <int> v1 = {10,20,50,40,30};
    cout<<"set<int> v1 = ";
    for(auto i: v1)
    {
        cout<<i<<" ";
    }
    cout<<endl;



    //same as before v1
    set<int> v2;
    for(auto i:{1,2,5,4,3})
    {
        v2.insert(i);
    }
    cout<<endl;

    cout<<"set<int> v2 = ";
    for(auto i: v2)
    {
        cout<<i<<" ";
    }
    cout<<endl;

    //or
    set<int> v3;
    v3.insert(10);
    v3.insert(9);
    v3.insert(8);
    v3.insert(7);
    v3.insert(6);

    cout<<"\nset<int> v3 = ";
    for(auto i: v3)
    {
        cout<<i<<" ";
    }
    cout<<endl;


    //or can be write same as use emplace instead of insert
    set<int> v4;
    v4.emplace(8);
    v4.emplace(7);
    v4.emplace(9);
    v4.emplace(6);
    v4.emplace(10);

    cout<<"\nset<int> v4 = ";
    for(auto i: v4)
    {
        cout<<i<<" ";
    }
    cout<<endl;


// iterator
    // print set element using iteration
    set<int> s = {12,43,234,65,34,54,3};

    set<int>::iterator it;  // Creating the iterator.

    cout<<"set<int> s = ";
    for (it = s.begin(); it != s.end(); it++)
    {
    	cout<<*it<<" ";
    }
    cout<<endl;

    // print set element without using iteration
    set<int> s1 = {12,43,234,65,34,54,3};

    cout<<"set<int> s1 = ";
    for (auto i: s1)
    {
    	cout<<i<<" ";
    }
    cout<<endl;




//set can initialize in descending order
    set<int, greater<int>> s2 = {10,30,40,20,50};
    cout<<"set<int> s2 = ";
    for (auto i: s2)
    {
    	cout<<i<<" ";
    }
    cout<<endl;




//copy one set to another
    set <int> m = {10,20,50,40,30};
    set <int> m1(m);

    cout<<"set<int> m = ";
    for(auto i: m)
    {
        cout<<i<<" ";
    }
    cout<<endl;

    cout<<"after copy m into m1\nset<int> m1 = ";
    for(auto i: m1)
    {
        cout<<i<<" ";
    }
    cout<<endl;

    //output:
    //    enter the length of set: 5
    //    set<int> v :
    //    10
    //    20
    //    30
    //    40
    //    30
    //
    //    set<int> v = 10 20 30 40
    //    set<int> v1 = 10 20 30 40 50
    //
    //    set<int> v2 = 1 2 3 4 5
    //
    //    set<int> v3 = 6 7 8 9 10
    //
    //    set<int> v4 = 6 7 8 9 10
    //    set<int> s = 3 12 34 43 54 65 234
    //    set<int> s1 = 3 12 34 43 54 65 234
    //    set<int> s2 = 50 40 30 20 10
    //    set<int> m = 10 20 30 40 50
    //    after copy m into m1
    //    set<int> m1 = 10 20 30 40 50
}
