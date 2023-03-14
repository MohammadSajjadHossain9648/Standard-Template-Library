#include<iostream>
#include<map>
using namespace std;
/*
    **Always remember: multimaps are the associative containers that store sorted key-value pair, in which
    each key is unique and it can be inserted or deleted but cannot be altered. Values associated with keys
    can be changed.
*/
int main()
{
//for taking user input in multimap
    multimap<int, string> v;
    int id, len;
    string name;
    cout<<"enter the length of id numbers: ";
    cin>>len;

    cout<<"multimap<int, string>  v : \n";
    for(int i=0; i<len; i++)
    {
        cout<<"id: ";
        cin>>id;
        cout<<"name: ";
        cin>>name;
        v.insert(pair<int, string>(id, name)); //we can use make_pair instead of pair<int, string>
    }
    cout<<endl;

    cout<<"\nmultimap<int, string> v\nid\tname\n";
    for(auto i: v)
    {
        cout<<i.first<<"\t"<<i.second<<endl;
    }
    cout<<endl;


// initialize in multimap
    multimap <int, string> v1 = {{2,"sakib"},{1,"asif"},{5,"liton"},{3,"tamim"},{4,"afif"}};

    cout<<"\nmultimap<int, string> v1\nid\tname\n";
    for(auto i: v1)
    {
        cout<<i.first<<"\t"<<i.second<<endl;
    }
    cout<<endl;
    /* can be write istead of above v1 loop
        cout<<"\nmultimap<int, string> v1\nid\tname\n";
        for (auto i = v1.begin(); i != v1.end(); ++i)
            cout<<i->first<<"\t"<<i->second<<endl;
    */


//can intialize map by using operator like[]
     map <int, string> v4;
     v4[1] = "asif";
     v4[2] = "sakib";
     v4[3] = "tamim";
     v4[4] = "afif";
     v4[5] = "liton";

    cout<<"\nmap<int, string> v4\nid\tname\n";
    for(auto i: v4)
    {
        cout<<i.first<<"\t"<<i.second<<endl;
    }
    cout<<endl;


    //same as before v1
    multimap<int, string> v2;
    v2.insert(pair<int, string>(2,"sakib")); //same as v2.insert(make_pair(2,"sakib"));
    v2.insert(pair<int, string>(1,"asif"));
    v2.insert(pair<int, string>(5,"liton"));
    v2.insert(pair<int, string>(3,"tamim"));
    v2.insert(pair<int, string>(4,"afif"));


    cout<<"\nmultimap<int, string> v2\nid\tname\n";
    for(auto i: v2)
    {
        cout<<i.first<<"\t"<<i.second<<endl;
    }
    cout<<endl;


    //or can be write same as use emplace instead of insert
    multimap<int, string> v3;
    v3.emplace(make_pair(2,"sakib")); //we can use make_pair instead of pair<int, string>
    v3.emplace(make_pair(1,"asif"));
    v3.emplace(make_pair(5,"liton"));
    v3.emplace(make_pair(3,"tamim"));
    v3.emplace(make_pair(4,"afif"));


    cout<<"\nmultimap<int, string> v3\nid\tname\n";
    for(auto i: v3)
    {
        cout<<i.first<<"\t"<<i.second<<endl;
    }
    cout<<endl;



// iterator
    // print multimap element using iteration
    multimap<int, string>  s = {{2,"sakib"},{1,"asif"},{5,"liton"},{3,"tamim"},{4,"afif"}};

    multimap<int, string> ::iterator it;  // Creating the iterator.

    cout<<"multimap<int, string>  s \nid\tname\n";
    for (it = s.begin(); it != s.end(); it++)
    {
    	cout<<it->first<<"\t"<<it->second<<endl;
    }
    cout<<endl;

    /* same as before
        multimap<int, string>  s = {{2,"sakib"},{1,"asif"},{5,"liton"},{3,"tamim"},{4,"afif"}};

        cout<<"multimap<int, string>  s \nid\tname\n";
        for (auto it = s.begin(); it != s.end(); it++)
        {
            cout<<it->first<<"\t"<<it->second<<endl;
        }
        cout<<endl;
    */


    // print multimap element without using iteration
    multimap<int, string>  s1 = {{2,"sakib"},{1,"asif"},{5,"liton"},{3,"tamim"},{4,"afif"}};

    cout<<"\nmultimap<int, string> s1\nid\tname\n";
    for(auto i: s1)
    {
        cout<<i.first<<"\t"<<i.second<<endl;
    }
    cout<<endl;




//copy one multimap to another
    multimap <int, string> m = {{2,"sakib"},{1,"asif"},{5,"liton"},{3,"tamim"},{4,"afif"}};
    multimap <int, string> m1 (m); //copy m1 in m

    cout<<"\nmultimap<int, string> m\nid\tname\n";
    for(auto i: m)
    {
        cout<<i.first<<"\t"<<i.second<<endl;
    }
    cout<<endl;

    cout<<"\nafter copy m into m1\nmultimap<int, string> m1\nid\tname\n";
    for(auto i: m1)
    {
        cout<<i.first<<"\t"<<i.second<<endl;
    }
    cout<<endl;


    //output:
    //    enter the length of id numbers: 5
    //    multimap<int, string>  v :
    //    id: 1
    //    name: asif
    //    id: 2
    //    name: sakib
    //    id: 5
    //    name: afif
    //    id: 3
    //    name: liton
    //    id: 4
    //    name: tamim
    //
    //
    //    multimap<int, string> v
    //    id      name
    //    1       asif
    //    2       sakib
    //    3       liton
    //    4       tamim
    //    5       afif
    //
    //    multimap<int, string> v1
    //    id      name
    //    1       asif
    //    2       sakib
    //    3       tamim
    //    4       afif
    //    5       liton
    //
    //
    //
    //    map<int, string> v4
    //    id      name
    //    1       asif
    //    2       sakib
    //    3       tamim
    //    4       afif
    //    5       liton
    //
    //
    //    multimap<int, string> v2
    //    id      name
    //    1       asif
    //    2       sakib
    //    3       tamim
    //    4       afif
    //    5       liton
    //
    //
    //    multimap<int, string> v3
    //    id      name
    //    1       asif
    //    2       sakib
    //    3       tamim
    //    4       afif
    //    5       liton
    //
    //    multimap<int, string>  s
    //    id      name
    //    1       asif
    //    2       sakib
    //    3       tamim
    //    4       afif
    //    5       liton
    //
    //
    //    multimap<int, string> s1
    //    id      name
    //    1       asif
    //    2       sakib
    //    3       tamim
    //    4       afif
    //    5       liton
    //
    //    multimap<int, string> m
    //    id      name
    //    1       asif
    //    2       sakib
    //    3       tamim
    //    4       afif
    //    5       liton
    //
    //
    //    after copy m into m1
    //    multimap<int, string> m1
    //    id      name
    //    1       asif
    //    2       sakib
    //    3       tamim
    //    4       afif
    //    5       liton
}
