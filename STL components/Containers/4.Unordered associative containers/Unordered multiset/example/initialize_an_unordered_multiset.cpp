#include<iostream>
#include<unordered_set>
using namespace std;
/*
    always remember: whatever you input in unordered_multiset, it store duplicate values.
*/
int main()
{

//for taking user input in unordered_multiset
    unordered_multiset<int> v;
    int x, len;
    cout<<"enter the length of unordered_multiset: ";
    cin>>len;

    cout<<"\nunordered_multiset<int> v : \n";
    for(int i=0; i<len; i++)
    {
        cin>>x;
        v.insert(x);
    }
    cout<<endl;

    cout<<"\nunordered_multiset<int> v: ";
    for(auto i: v)
    {
        cout<<i<<" ";
    }
    cout<<endl;





// initialize in unordered_multiset
    // Initializer List
    unordered_multiset <int> v1 = {10,20,50,40,30};

    /* same as Uniform Initialization
    unordered_multiset <int> v1 {10,20,50,40,30};
    */


    cout<<"\nunordered_multiset<int> v1: ";
    for(auto i: v1)
    {
        cout<<i<<" ";
    }
    cout<<endl;




    //same as before v1
    unordered_multiset<int> v2;
    for(auto i:{1,2,5,4,3})
    {
        v2.insert(i);
    }
    cout<<endl;

    cout<<"\nunordered_multiset<int> v2: ";
    for(auto i: v2)
    {
        cout<<i<<" ";
    }
    cout<<endl;




    //or
    unordered_multiset<int> v3;
    v3.insert(10);
    v3.insert(9);
    v3.insert(8);
    v3.insert(7);
    v3.insert(6);

    cout<<"\nunordered_multiset<int> v3: ";
    for(auto i: v3)
    {
        cout<<i<<" ";
    }
    cout<<endl;




    //or can be write same as use emplace instead of insert
    unordered_multiset<int> v4;
    v4.emplace(8);
    v4.emplace(7);
    v4.emplace(9);
    v4.emplace(6);
    v4.emplace(10);

    cout<<"\nunordered_multiset<int> v4: ";
    for(auto i: v4)
    {
        cout<<i<<" ";
    }
    cout<<endl;





// iterator
    // print unordered_multiset element using iteration
    unordered_multiset<int> s = {12,43,234,65,34,54,3};

    unordered_multiset<int>::iterator it;  // Creating the iterator.

    cout<<"\nunordered_multiset<int> s: ";
    for(it = s.begin(); it != s.end(); it++)
    {
    	cout<<*it<<" ";
    }
    cout<<endl;


    /* same as above
    unordered_multiset<int> s = {12,43,234,65,34,54,3};

    unordered_multiset<int>::iterator it = s.begin();  // Creating the iterator.

    cout<<"\nunordered_multiset<int> s: ";
    while(it != s.end())
    {
    	cout<<*it<<" ";
    	it++;
    }
    cout<<endl;
    */



    // print unordered_multiset element without using iteration
    unordered_multiset<int> s1 = {12,43,234,65,34,54,3};

    cout<<"\nunordered_multiset<int> s1: ";
    for(auto i: s1)
    {
    	cout<<i<<" ";
    }
    cout<<endl;

    /* can write also
    unordered_multiset<int> s1 = {12,43,234,65,34,54,3};

    cout<<"\nunordered_multiset<int> s1: ";
    for(auto it = s1.begin(); it != s1.end(); it++)
    {
        cout<<it<<" ";
    }
    cout<<endl;
    */




//issue
    /* note: unordered_multiset can not initialize in ascending order && descending order

    unordered_multiset<int> s21 = {10,30,40,20,50}; //ascending order
    unordered_multiset<int, greater<int>> s22 = {10,30,40,20,50}; //descending order

    cout<<"\nunordered_multiset<int> s22: ";
    for(auto i: s22)
    {
    	cout<<i<<" ";
    }
    cout<<endl;
    */



//copy one unordered_multiset to another
    unordered_multiset <int> m = {10,20,50,40,30};
    unordered_multiset <int> m1(m);

    cout<<"\n\nunordered_multiset<int> m: ";
    for(auto i: m)
    {
        cout<<i<<" ";
    }
    cout<<endl;

    cout<<"\nafter copy m into m1\nunordered_multiset<int> m1: ";
    for(auto i: m1)
    {
        cout<<i<<" ";
    }
    cout<<endl;


    //output:
    //    enter the length of multiunordered_multiset: 5
    //    unordered_multiset<int> v :
    //    10
    //    20
    //    30
    //    40
    //    30
    //
    //    unordered_multiset<int> v: 10 20 30 30 40
    //
    //
    //    unordered_multiset<int> v1: 30 40 50 20 10
    //
    //
    //    unordered_multiset<int> v2: 3 4 5 2 1
    //
    //    unordered_multiset<int> v3: 6 7 8 9 10
    //
    //    unordered_multiset<int> v4: 10 6 9 7 8
    //
    //    unordered_multiset<int> s: 34 65 3 234 43 54 12
    //
    //    unordered_multiset<int> s1: 34 65 3 234 43 54 12
    //
    //
    //    unordered_multiset<int> m: 30 40 50 20 10
    //
    //    after copy m into m1
    //    unordered_multiset<int> m1: 30 40 50 20 10
}
