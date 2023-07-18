#include<iostream>
#include<unordered_map>
using namespace std;
/*
    always remember: whatever you input in unordered_multimap, it always take unique values.
*/
int main()
{

//for taking user input in unordered_multimap
    unordered_multimap<int, string> v;
    int id, len;
    string name;
    cout<<"enter the length of unordered_multimap: ";
    cin>>len;

    cout<<"unordered_multimap<int, string> v : \n";
    for(int i=0; i<len; i++)
    {
        cout<<"id: ";
        cin>>id;
        cout<<"name: ";
        cin>>name;
        v.insert(pair<int, string>(id, name)); //we can use make_pair instead of pair<int, string>

        /*input name in ascending order of id
        cout<<"name: ";
        cin>>name;
        v.insert(pair<int, string>(i+1, name)); //we can use make_pair instead of pair<int, string>
        */
    }
    cout<<endl;

    cout<<"\nmultimap<int, string> v\nid\tname\n";
    for(auto i: v)
    {
        cout<<i.first<<"\t"<<i.second<<endl;
    }
    cout<<endl;


// initialize in unordered_multimap
    unordered_multimap <int, string> v1 = {{2,"sakib"},{1,"asif"},{5,"liton"},{3,"tamim"},{4,"afif"}};

    cout<<"\nmultimap<int, string> v1\nid\tname\n";
    for(auto i: v1)
    {
        cout<<i.first<<"\t"<<i.second<<endl;
    }
    cout<<endl;



    //or
    unordered_multimap<int, string> v3;
    v3.insert(make_pair(2,"sakib")); //can use v3.insert(pair<int, string>({2,"sakib"}));
    v3.insert(make_pair(1,"asif"));
    v3.insert(make_pair(5,"liton"));
    v3.insert(make_pair(3,"tamim"));
    v3.insert(make_pair(4,"afif"));


    cout<<"\nmultimap<int, string> v3\nid\tname\n";
    for(auto i: v3)
    {
        cout<<i.first<<"\t"<<i.second<<endl;
    }
    cout<<endl;


    //or can be write same as use emplace instead of insert
    unordered_multimap<int, string> v4;
    v4.emplace(make_pair(2,"sakib")); //can use v4.emplace(pair<int, string>({2,"sakib"}));
    v4.emplace(make_pair(1,"asif"));
    v4.emplace(make_pair(5,"liton"));
    v4.emplace(make_pair(3,"tamim"));
    v4.emplace(make_pair(4,"afif"));

    cout<<"\nmultimap<int, string> v4\nid\tname\n";
    for(auto i: v4)
    {
        cout<<i.first<<"\t"<<i.second<<endl;
    }
    cout<<endl;


    //or using pair
    unordered_multimap<int, string> v5;
    pair<int, string> p;    //can write d-> pair<int, string> p = make_pair(2,"sakib");
    p = make_pair(2,"sakib");
    v5.insert(p);
    p = make_pair(1,"asif");
    v5.insert(p);
    p = make_pair(5,"liton");
    v5.insert(p);
    p = make_pair(3,"tamim");
    v5.insert(p);
    p = make_pair(4,"afif");
    v5.insert(p);

    cout<<"\nmultimap<int, string> v5\nid\tname\n";
    for(auto i: v5)
    {
        cout<<i.first<<"\t"<<i.second<<endl;
    }
    cout<<endl;


    //or using pair
    unordered_multimap<int, string> v6;
    pair<int, string> p1(2,"sakib");  //never write -> pair<int, string> p;   p(2, "sakib");
    v6.insert(p1);
    pair<int, string> p2(1,"asif");
    v6.insert(p2);
    pair<int, string> p3(5,"liton");
    v6.insert(p3);
    pair<int, string> p4(3,"tamim");
    v6.insert(p4);
    pair<int, string> p5(4,"afif");
    v6.insert(p5);

    cout<<"\nmultimap<int, string> v6\nid\tname\n";
    for(auto i: v6)
    {
        cout<<i.first<<"\t"<<i.second<<endl;
    }
    cout<<endl;


// iterator
    // print unordered_multimap element using iteration
    unordered_multimap<int, string> s = {{2,"sakib"},{1,"asif"},{5,"liton"},{3,"tamim"},{4,"afif"}};

    unordered_multimap<int, string>::iterator it;  // Creating the iterator.

    cout<<"\nmultimap<int, string> s\nid\tname\n";
    for (it = s.begin(); it != s.end(); it++)
    {
    	cout<<it->first<<"\t"<<it->second<<endl;
    }
    cout<<endl;

    // print unordered_multimap element without using iteration
    unordered_multimap<int, string> s1 = {{2,"sakib"},{1,"asif"},{5,"liton"},{3,"tamim"},{4,"afif"}};

    cout<<"\nmultimap<int, string> s1\nid\tname\n";
    for (auto i: s1)
    {
    	cout<<i.first<<"\t"<<i.second<<endl;
    }
    cout<<endl;



    //output:
    //    enter the length of unordered_multimap: 5
    //    unordered_multimap<int, string> v :
    //    id: 4
    //    name: afif
    //    id: 3
    //    name: tamim
    //    id: 5
    //    name: liton
    //    id: 1
    //    name: asif
    //    id: 2
    //    name: sakib
    //
    //
    //    map<int, string> v
    //    id      name
    //    2       sakib
    //    1       asif
    //    5       liton
    //    3       tamim
    //    4       afif
    //
    //    map<int, string> v1
    //    id      name
    //    4       afif
    //    3       tamim
    //    5       liton
    //    1       asif
    //    2       sakib
    //
    //
    //    map<int, string> v3
    //    id      name
    //    4       afif
    //    3       tamim
    //    5       liton
    //    1       asif
    //    2       sakib
    //
    //
    //    map<int, string> v4
    //    id      name
    //    4       afif
    //    3       tamim
    //    5       liton
    //    1       asif
    //    2       sakib
    //
    //
    //    map<int, string> v5
    //    id      name
    //    4       afif
    //    3       tamim
    //    5       liton
    //    1       asif
    //    2       sakib
    //
    //
    //    map<int, string> v6
    //    id      name
    //    4       afif
    //    3       tamim
    //    5       liton
    //    1       asif
    //    2       sakib
    //
    //
    //    map<int, string> s
    //    id      name
    //    4       afif
    //    3       tamim
    //    5       liton
    //    1       asif
    //    2       sakib
    //
    //
    //    map<int, string> s1
    //    id      name
    //    4       afif
    //    3       tamim
    //    5       liton
    //    1       asif
    //    2       sakib
}
