#include<iostream>
#include<map>
using namespace std;
/*
    **Always remember: multimaps are the associative containers that store sorted key-value pair, in which each key
    is unique and it can be inserted or deleted but cannot be altered. Values associated with keys can be changed.
    it store values in ascending order.

    always remember: whatever you input in multimap, it always stay in ascending order and it always stay in ascending order and store duplicate values.
*/
int main()
{

//for taking user input in multimap
    multimap<int, string> v;
    int id, len;
    string name;
    cout<<"enter the length of multimap: ";
    cin>>len;

    cout<<"multimap<int, string> v : \n";
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




// initialize in multimap
    // Initializer List
    multimap <int, string> v1 = {{2,"sakib"},{1,"asif"},{5,"liton"},{3,"tamim"},{4,"afif"}};

    /* same as Uniform Initialization
    multimap <int, string> v1 {{2,"sakib"},{1,"asif"},{5,"liton"},{3,"tamim"},{4,"afif"}};
    */


    cout<<"\nmultimap<int, string> v1\nid\tname\n";
    for(auto i: v1)
    {
        cout<<i.first<<"\t"<<i.second<<endl;
    }
    cout<<endl;



    //issue -> remember that can not intialize multimap by using operator like[]
    /*never use this way
    multimap <int, string> v1;
    v1[1] = "asif";
    v1[2] = "sakib";

    or,
    multimap <string, int> v1;
    v1["asif"] = 1;
    v1["sakib"] = 2;
    */



    //or
    multimap<int, string> v2;
    v2.insert({2,"sakib"});
    v2.insert({1,"asif"});
    v2.insert({5,"liton"});
    v2.insert({3,"tamim"});
    v2.insert({4,"afif"});


    cout<<"\nmultimap<int, string> v2\nid\tname\n";
    for(auto i: v2)
    {
        cout<<i.first<<"\t"<<i.second<<endl;
    }
    cout<<endl;



    //or
    multimap<int, string> v3;
    v3.insert(make_pair(2,"sakib")); //same as -> v3.insert(pair<int, string>({2,"sakib"}));
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
    multimap<int, string> v4;
    v4.emplace(make_pair(2,"sakib")); //same as -> v4.emplace(pair<int, string>({2,"sakib"}));
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



    //or using pair by using one pair variable
    multimap<int, string> v5;
    pair<int, string> p;
    p = make_pair(2,"sakib"); // never write -> p(2, "sakib");
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




    //or using pair by using many pair variables
    multimap<int, string> v6;
    pair<int, string> p1 = make_pair(2,"sakib");  //same as -> pair<int, string> p1(2,"sakib");
    v6.insert(p1);
    pair<int, string> p2 = make_pair(1,"asif");
    v6.insert(p2);
    pair<int, string> p3 = make_pair(5,"liton");
    v6.insert(p3);
    pair<int, string> p4 = make_pair(3,"tamim");
    v6.insert(p4);
    pair<int, string> p5 = make_pair(4,"afif");
    v6.insert(p5);

    cout<<"\nmultimap<int, string> v6\nid\tname\n";
    for(auto i: v6)
    {
        cout<<i.first<<"\t"<<i.second<<endl;
    }
    cout<<endl;




//multimap can initialize in ascending order && descending order
    multimap <int, string> s21 = {{2,"sakib"},{1,"asif"},{5,"liton"},{3,"tamim"},{4,"afif"}}; //ascending order

    cout<<"\nmultimap<int, string> s21\nid\tname\n";
    for(auto i: s21)
    {
    	cout<<i.first<<"\t"<<i.second<<endl;
    }
    cout<<endl;


    multimap <int, string, greater<int>> s22 = {{2,"sakib"},{1,"asif"},{5,"liton"},{3,"tamim"},{4,"afif"}}; //descending order

    cout<<"\nmultimap <int, string, greater<int>> s22\nid\tname\n";
    for(auto i: s22)
    {
    	cout<<i.first<<"\t"<<i.second<<endl;
    }
    cout<<endl;




// iterator
    // print multimap element using iteration
    multimap<int, string> s = {{2,"sakib"},{1,"asif"},{1,"asif"},{5,"liton"},{3,"tamim"},{4,"afif"}};

    multimap<int, string>::iterator it;  // Creating the iterator.

    cout<<"\nmultimap<int, string> s\nid\tname\n";
    for (it = s.begin(); it != s.end(); it++)
    {
    	cout<<it->first<<"\t"<<it->second<<endl;
    }
    cout<<endl;


    /* same as above
    multimap<int, string> s = {{2,"sakib"},{1,"asif"},{5,"liton"},{3,"tamim"},{4,"afif"}};

    multimap<int, string>::iterator it = s.begin();  // Creating the iterator.

    cout<<"\nmultimap<int, string> s\nid\tname\n";
    while(it != s.end())
    {
    	cout<<it->first<<"\t"<<it->second<<endl;
    	it++;
    }
    cout<<endl;
    */


    // print multimap element without using iteration
    multimap<int, string> s1 = {{2,"sakib"},{1,"asif"},{5,"liton"},{3,"tamim"},{4,"afif"}};

    cout<<"\nmultimap<int, string> s1\nid\tname\n";
    for (auto i: s1)
    {
    	cout<<i.first<<"\t"<<i.second<<endl;
    }
    cout<<endl;

    /* can write also
    multimap<int, string>  s1 = {{2,"sakib"},{1,"asif"},{5,"liton"},{3,"tamim"},{4,"afif"}};

    cout<<"multimap<int, string>  s1 \nid\tname\n";
    for (auto it = s1.begin(); it != s1.end(); it++)
    {
        cout<<it->first<<"\t"<<it->second<<endl;
    }
    cout<<endl;
    */



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
    //    enter the length of multimap: 5
    //    multimap<int, string> v :
    //    id: 4
    //    name: afif
    //    id: 3
    //    name: tamim
    //    id: 2
    //    name: sakib
    //    id: 1
    //    name: asif
    //    id: 2
    //    name: sakib
    //
    //
    //    multimap<int, string> v
    //    id      name
    //    1       asif
    //    2       sakib
    //    2       sakib
    //    3       tamim
    //    4       afif
    //
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
    //
    //    multimap<int, string> v4
    //    id      name
    //    1       asif
    //    2       sakib
    //    3       tamim
    //    4       afif
    //    5       liton
    //
    //
    //    multimap<int, string> v5
    //    id      name
    //    1       asif
    //    2       sakib
    //    3       tamim
    //    4       afif
    //    5       liton
    //
    //
    //    multimap<int, string> v6
    //    id      name
    //    1       asif
    //    2       sakib
    //    3       tamim
    //    4       afif
    //    5       liton
    //
    //
    //    multimap<int, string> s21
    //    id      name
    //    1       asif
    //    2       sakib
    //    3       tamim
    //    4       afif
    //    5       liton
    //
    //
    //    multimap <int, string, greater<int>> s22
    //    id      name
    //    5       liton
    //    4       afif
    //    3       tamim
    //    2       sakib
    //    1       asif
    //
    //
    //    multimap<int, string> s
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
