#include<iostream>
#include<set>
using namespace std;
/*
    always remember: whatever you input in multiset, it always stay in ascending order and store duplicate values.
*/
int main()
{

//for taking user input in multiset
    multiset<int> v;
    int x, len;
    cout<<"enter the length of multiset: ";
    cin>>len;

    cout<<"\nmultiset<int> v : \n";
    for(int i=0; i<len; i++)
    {
        cin>>x;
        v.insert(x);
    }
    cout<<endl;

    cout<<"\nmultiset<int> v: ";
    for(auto i: v)
    {
        cout<<i<<" ";
    }
    cout<<endl;





// initialize in multiset
    // Initializer List
    multiset <int> v1 = {10,20,50,40,30};

    /* same as Uniform Initialization
    multiset <int> v1 {10,20,50,40,30};
    */


    cout<<"\nmultiset<int> v1: ";
    for(auto i: v1)
    {
        cout<<i<<" ";
    }
    cout<<endl;




    //same as before v1
    multiset<int> v2;
    for(auto i:{1,2,5,4,3})
    {
        v2.insert(i);
    }
    cout<<endl;

    cout<<"\nmultiset<int> v2: ";
    for(auto i: v2)
    {
        cout<<i<<" ";
    }
    cout<<endl;



    //or
    multiset<int> v3;
    v3.insert(10);
    v3.insert(9);
    v3.insert(8);
    v3.insert(7);
    v3.insert(6);

    cout<<"\nmultiset<int> v3: ";
    for(auto i: v3)
    {
        cout<<i<<" ";
    }
    cout<<endl;



    //or can be write same as use emplace instead of insert
    multiset<int> v4;
    v4.emplace(8);
    v4.emplace(7);
    v4.emplace(9);
    v4.emplace(6);
    v4.emplace(10);

    cout<<"\nmultiset<int> v4: ";
    for(auto i: v4)
    {
        cout<<i<<" ";
    }
    cout<<endl;




// iterator
    // print multiset element using iteration
    multiset<int> s = {12,43,234,65,34,54,3};

    multiset<int>::iterator it;  // Creating the iterator.

    cout<<"\nmultiset<int> s: ";
    for (it = s.begin(); it != s.end(); it++)
    {
    	cout<<*it<<" ";
    }
    cout<<endl;


    /* same as above
    multiset<int> s = {12,43,234,65,34,54,3};

    multiset<int>::iterator it = s.begin();  // Creating the iterator.

    cout<<"\nmultiset<int> s: ";
    while(it != s.end())
    {
    	cout<<*it<<" ";
    	it++;
    }
    cout<<endl;
    */



    // print multiset element without using iteration
    multiset<int> s1 = {12,43,234,65,34,54,3};

    cout<<"\nmultiset<int> s1: ";
    for (auto i: s1)
    {
    	cout<<i<<" ";
    }
    cout<<endl;

    /* can write also
    multiset<int> s1 = {12,43,234,65,34,54,3};

    cout<<"\nmultiset<int> s1: ";
    for (auto it = s1.begin(); it != s1.end(); it++)
    {
        cout<<it<<" ";
    }
    cout<<endl;
    */





//multiset can initialize in ascending order && descending order
    multiset<int> s21 = {10,30,40,20,50}; //ascending order
    cout<<"\n\nmultiset<int> s21: ";
    for (auto i: s21)
    {
    	cout<<i<<" ";
    }
    cout<<endl;


    multiset<int, greater<int>> s22 = {10,30,40,20,50}; //descending order
    cout<<"\nmultiset<int> s22: ";
    for (auto i: s22)
    {
    	cout<<i<<" ";
    }
    cout<<endl;




//copy one multiset to another
    multiset <int> m = {10,20,50,40,30};
    multiset <int> m1(m);

    cout<<"\n\nmultiset<int> m: ";
    for(auto i: m)
    {
        cout<<i<<" ";
    }
    cout<<endl;

    cout<<"\nafter copy m into m1\nmultiset<int> m1: ";
    for(auto i: m1)
    {
        cout<<i<<" ";
    }
    cout<<endl;


    //output:
    //    enter the length of multiset: 5
    //    multiset<int> v :
    //    10
    //    20
    //    30
    //    40
    //    30
    //
    //    multiset<int> v = 10 20 30 30 40
    //
    //
    //    multiset<int> v1: 10 20 30 40 50
    //
    //    multiset<int> v2: 1 2 3 4 5
    //
    //    multiset<int> v3: 6 7 8 9 10
    //
    //    multiset<int> v4: 6 7 8 9 10
    //
    //    multiset<int> s: 3 12 34 43 54 65 234
    //
    //    multiset<int> s1: 3 12 34 43 54 65 234
    //
    //
    //    multiset<int> s21: 10 20 30 40 50
    //
    //    multiset<int> s22: 50 40 30 20 10
    //
    //
    //    multiset<int> m: 10 20 30 40 50
    //
    //    after copy m into m1
    //    multiset<int> m1: 10 20 30 40 50
}
