#include<iostream>
#include<map>
using namespace std;
/*
    **Always remember: Maps are the associative containers that store sorted key-value pair, in which each key
    is unique and it can be inserted or deleted but cannot be altered. Values associated with keys can be changed.
    it store values in ascending order.

    always remember: whatever you input in map, it always stay in ascending order and it always take unique values means store no duplicate values.
*/
int main()
{

//for taking user input in map
    map<int, string> v;
    int id, len;
    string name;
    cout<<"enter the length of map: ";
    cin>>len;

    cout<<"map<int, string> v : \n";
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

    cout<<"\nmap<int, string> v\nid\tname\n";
    for(auto i: v)
    {
        cout<<i.first<<"\t"<<i.second<<endl;
    }
    cout<<endl;




// initialize in map
    // Initializer List
    map <int, string> v1 = {{2,"sakib"},{1,"asif"},{5,"liton"},{3,"tamim"},{4,"afif"}};

    /* same as Uniform Initialization
    map <int, string> v1 {{2,"sakib"},{1,"asif"},{5,"liton"},{3,"tamim"},{4,"afif"}};
    */


    cout<<"\nmap<int, string> v1\nid\tname\n";
    for(auto i: v1)
    {
        cout<<i.first<<"\t"<<i.second<<endl;
    }
    cout<<endl;



    //can intialize map by using operator like[]
    map <int, string> v2;
    v2[2] = "sakib";
    v2[1] = "asif";
    v2[5] = "liton";
    v2[3] = "tamim";
    v2[4] = "afif";

    cout<<"\nmap<string, int> v2\nid\tname\n";
    for(auto i: v2)
    {
        cout<<i.first<<"\t"<<i.second<<endl;
    }
    cout<<endl;



    //or
    map<int, string> v3;
    v3.insert({2,"sakib"});
    v3.insert({1,"asif"});
    v3.insert({5,"liton"});
    v3.insert({3,"tamim"});
    v3.insert({4,"afif"});


    cout<<"\nmap<int, string> v3\nid\tname\n";
    for(auto i: v3)
    {
        cout<<i.first<<"\t"<<i.second<<endl;
    }
    cout<<endl;



    //or
    map<int, string> v4;
    v4.insert(make_pair(2,"sakib")); //same as -> v4.insert(pair<int, string>({2,"sakib"}));
    v4.insert(make_pair(1,"asif"));
    v4.insert(make_pair(5,"liton"));
    v4.insert(make_pair(3,"tamim"));
    v4.insert(make_pair(4,"afif"));


    cout<<"\nmap<int, string> v4\nid\tname\n";
    for(auto i: v4)
    {
        cout<<i.first<<"\t"<<i.second<<endl;
    }
    cout<<endl;



    //or can be write same as use emplace instead of insert
    map<int, string> v5;
    v5.emplace(make_pair(2,"sakib")); //same as -> v5.emplace(pair<int, string>({2,"sakib"}));
    v5.emplace(make_pair(1,"asif"));
    v5.emplace(make_pair(5,"liton"));
    v5.emplace(make_pair(3,"tamim"));
    v5.emplace(make_pair(4,"afif"));

    cout<<"\nmap<int, string> v5\nid\tname\n";
    for(auto i: v5)
    {
        cout<<i.first<<"\t"<<i.second<<endl;
    }
    cout<<endl;



    //or using pair by using one pair variable
    map<int, string> v6;
    pair<int, string> p;
    p = make_pair(2,"sakib"); // never write -> p(2, "sakib");
    v6.insert(p);
    p = make_pair(1,"asif");
    v6.insert(p);
    p = make_pair(5,"liton");
    v6.insert(p);
    p = make_pair(3,"tamim");
    v6.insert(p);
    p = make_pair(4,"afif");
    v6.insert(p);

    cout<<"\nmap<int, string> v6\nid\tname\n";
    for(auto i: v6)
    {
        cout<<i.first<<"\t"<<i.second<<endl;
    }
    cout<<endl;




    //or using pair by using many pair variables
    map<int, string> v7;
    pair<int, string> p1 = make_pair(2,"sakib");  //same as -> pair<int, string> p1(2,"sakib");
    v7.insert(p1);
    pair<int, string> p2 = make_pair(1,"asif");
    v7.insert(p2);
    pair<int, string> p3 = make_pair(5,"liton");
    v7.insert(p3);
    pair<int, string> p4 = make_pair(3,"tamim");
    v7.insert(p4);
    pair<int, string> p5 = make_pair(4,"afif");
    v7.insert(p5);

    cout<<"\nmap<int, string> v7\nid\tname\n";
    for(auto i: v7)
    {
        cout<<i.first<<"\t"<<i.second<<endl;
    }
    cout<<endl;




//map can initialize in ascending order && descending order
    map <int, string> s21 = {{2,"sakib"},{1,"asif"},{5,"liton"},{3,"tamim"},{4,"afif"}}; //ascending order

    cout<<"\nmap<int, string> s21\nid\tname\n";
    for(auto i: s21)
    {
    	cout<<i.first<<"\t"<<i.second<<endl;
    }
    cout<<endl;


    map <int, string, greater<int>> s22 = {{2,"sakib"},{1,"asif"},{5,"liton"},{3,"tamim"},{4,"afif"}}; //descending order

    cout<<"\nmap <int, string, greater<int>> s22\nid\tname\n";
    for(auto i: s22)
    {
    	cout<<i.first<<"\t"<<i.second<<endl;
    }
    cout<<endl;




// iterator
    // print map element using iteration
    map<int, string> s = {{2,"sakib"},{1,"asif"},{1,"asif"},{5,"liton"},{3,"tamim"},{4,"afif"}};

    map<int, string>::iterator it;  // Creating the iterator.

    cout<<"\nmap<int, string> s\nid\tname\n";
    for (it = s.begin(); it != s.end(); it++)
    {
    	cout<<it->first<<"\t"<<it->second<<endl;
    }
    cout<<endl;


    /* same as above
    map<int, string> s = {{2,"sakib"},{1,"asif"},{5,"liton"},{3,"tamim"},{4,"afif"}};

    map<int, string>::iterator it = s.begin();  // Creating the iterator.

    cout<<"\nmap<int, string> s\nid\tname\n";
    while(it != s.end())
    {
    	cout<<it->first<<"\t"<<it->second<<endl;
    	it++;
    }
    cout<<endl;
    */


    // print map element without using iteration
    map<int, string> s1 = {{2,"sakib"},{1,"asif"},{5,"liton"},{3,"tamim"},{4,"afif"}};

    cout<<"\nmap<int, string> s1\nid\tname\n";
    for (auto i: s1)
    {
    	cout<<i.first<<"\t"<<i.second<<endl;
    }
    cout<<endl;

    /* can write also
    map<int, string>  s1 = {{2,"sakib"},{1,"asif"},{5,"liton"},{3,"tamim"},{4,"afif"}};

    cout<<"map<int, string>  s1 \nid\tname\n";
    for (auto it = s1.begin(); it != s1.end(); it++)
    {
        cout<<it->first<<"\t"<<it->second<<endl;
    }
    cout<<endl;
    */



//copy one map to another
    map <int, string> m = {{2,"sakib"},{1,"asif"},{5,"liton"},{3,"tamim"},{4,"afif"}};
    map <int, string> m1 (m); //copy m1 in m

    cout<<"\nmap<int, string> m\nid\tname\n";
    for(auto i: m)
    {
        cout<<i.first<<"\t"<<i.second<<endl;
    }
    cout<<endl;

    cout<<"\nafter copy m into m1\nmap<int, string> m1\nid\tname\n";
    for(auto i: m1)
    {
        cout<<i.first<<"\t"<<i.second<<endl;
    }
    cout<<endl;



    //output:
    //    enter the length of map: 5
    //    map<int, string> v :
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
    //    map<int, string> v
    //    id      name
    //    1       asif
    //    2       sakib
    //    3       tamim
    //    4       afif
    //
    //
    //    map<int, string> v1
    //    id      name
    //    1       asif
    //    2       sakib
    //    3       tamim
    //    4       afif
    //    5       liton
    //
    //
    //    map<string, int> v2
    //    id      name
    //    1       asif
    //    2       sakib
    //    3       tamim
    //    4       afif
    //    5       liton
    //
    //
    //    map<string, int> v3
    //    id      name
    //    1       asif
    //    2       sakib
    //    3       tamim
    //    4       afif
    //    5       liton
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
    //    map<int, string> v5
    //    id      name
    //    1       asif
    //    2       sakib
    //    3       tamim
    //    4       afif
    //    5       liton
    //
    //
    //    map<int, string> v6
    //    id      name
    //    1       asif
    //    2       sakib
    //    3       tamim
    //    4       afif
    //    5       liton
    //
    //
    //    map<int, string> v7
    //    id      name
    //    1       asif
    //    2       sakib
    //    3       tamim
    //    4       afif
    //    5       liton
    //
    //
    //    map<int, string> s21
    //    id      name
    //    1       asif
    //    2       sakib
    //    3       tamim
    //    4       afif
    //    5       liton
    //
    //
    //    map <int, string, greater<int>> s22
    //    id      name
    //    5       liton
    //    4       afif
    //    3       tamim
    //    2       sakib
    //    1       asif
    //
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
    //    map<int, string> s1
    //    id      name
    //    1       asif
    //    2       sakib
    //    3       tamim
    //    4       afif
    //    5       liton
    //
    //
    //    map<int, string> m
    //    id      name
    //    1       asif
    //    2       sakib
    //    3       tamim
    //    4       afif
    //    5       liton
    //
    //
    //    after copy m into m1
    //    map<int, string> m1
    //    id      name
    //    1       asif
    //    2       sakib
    //    3       tamim
    //    4       afif
    //    5       liton
}
