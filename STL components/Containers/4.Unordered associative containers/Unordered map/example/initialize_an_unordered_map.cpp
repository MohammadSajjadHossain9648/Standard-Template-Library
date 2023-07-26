#include<iostream>
#include<unordered_map>
using namespace std;
/*
    always remember: whatever you input in unordered_map, it store duplicate values.
*/
int main()
{

//for taking user input in unordered_map
    unordered_map<int, string> v;
    int id, len;
    string name;
    cout<<"enter the length of unordered_map: ";
    cin>>len;

    cout<<"unordered_map<int, string> v : \n";
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

    cout<<"\nunordered_map<int, string> v\nid\tname\n";
    for(auto i: v)
    {
        cout<<i.first<<"\t"<<i.second<<endl;
    }
    cout<<endl;




// initialize in unordered_map
    // Initializer List
    unordered_map <int, string> v1 = {{1,"asif"},{2,"sakib"},{3,"tamim"},{4,"afif"},{5,"liton"}};

    /* same as Uniform Initialization
    unordered_map <int, string> v1 {{1,"asif"},{2,"sakib"},{3,"tamim"},{4,"afif"},{5,"liton"}};
    */


    cout<<"\nunordered_map<int, string> v1\nid\tname\n";
    for(auto i: v1)
    {
        cout<<i.first<<"\t"<<i.second<<endl;
    }
    cout<<endl;



    //can intialize map by using operator like[]
    unordered_map <int, string> v2;
    v2[1] = "asif";
    v2[2] = "sakib";
    v2[3] = "tamim";
    v2[4] = "afif";
    v2[5] = "liton";

    cout<<"\nunordered_map<string, int> v2\nid\tname\n";
    for(auto i: v2)
    {
        cout<<i.first<<"\t"<<i.second<<endl;
    }
    cout<<endl;




    //or
    unordered_map<int, string> v3;
    v3.insert({1,"asif"});
    v3.insert({2,"sakib"});
    v3.insert({3,"tamim"});
    v3.insert({4,"afif"});
    v3.insert({5,"liton"});


    cout<<"\nunordered_map<int, string> v3\nid\tname\n";
    for(auto i: v3)
    {
        cout<<i.first<<"\t"<<i.second<<endl;
    }
    cout<<endl;




    //or
    unordered_map<int, string> v4;
    v4.insert(make_pair(1,"asif")); //same as -> v4.insert(pair<int, string>({1,"asif"}));
    v4.insert(make_pair(2,"sakib"));
    v4.insert(make_pair(3,"tamim"));
    v4.insert(make_pair(4,"afif"));
    v4.insert(make_pair(5,"liton"));


    cout<<"\nunordered_map<int, string> v4\nid\tname\n";
    for(auto i: v4)
    {
        cout<<i.first<<"\t"<<i.second<<endl;
    }
    cout<<endl;


    //or can be write same as use emplace instead of insert
    unordered_map<int, string> v5;
    v5.emplace(make_pair(1,"asif")); //same as -> v5.emplace(pair<int, string>({1,"asif"}));
    v5.emplace(make_pair(2,"sakib"));
    v5.emplace(make_pair(3,"tamim"));
    v5.emplace(make_pair(4,"afif"));
    v5.emplace(make_pair(5,"liton"));

    cout<<"\nunordered_map<int, string> v5\nid\tname\n";
    for(auto i: v5)
    {
        cout<<i.first<<"\t"<<i.second<<endl;
    }
    cout<<endl;


    //or using pair by using one pair variable
    unordered_map<int, string> v6;
    pair<int, string> p;
    p = make_pair(1,"asif"); // never write -> p(1, "asif");
    v6.insert(p);
    p = make_pair(2,"sakib");
    v6.insert(p);
    p = make_pair(3,"tamim");
    v6.insert(p);
    p = make_pair(4,"afif");
    v6.insert(p);
    p = make_pair(5,"liton");
    v6.insert(p);

    cout<<"\nunordered_map<int, string> v6\nid\tname\n";
    for(auto i: v6)
    {
        cout<<i.first<<"\t"<<i.second<<endl;
    }
    cout<<endl;


    //or using pair by using many pair variables
    unordered_map<int, string> v7;
    pair<int, string> p1 = make_pair(1,"asif");  //same as -> pair<int, string> p1(1,"asif");
    v7.insert(p1);
    pair<int, string> p2 = make_pair(2,"sakib");
    v7.insert(p2);
    pair<int, string> p3 = make_pair(3,"tamim");
    v7.insert(p3);
    pair<int, string> p4 = make_pair(4,"afif");
    v7.insert(p4);
    pair<int, string> p5 = make_pair(5,"liton");
    v7.insert(p5);

    cout<<"\nunordered_map<int, string> v7\nid\tname\n";
    for(auto i: v7)
    {
        cout<<i.first<<"\t"<<i.second<<endl;
    }
    cout<<endl;




//issue
    /* note: unordered_map can not initialize in ascending order && descending order

    unordered_map<int, string> s21 = {{2,"sakib"},{1,"asif"},{5,"liton"},{3,"tamim"},{4,"afif"}}; //ascending order
    unordered_map<int, string, greater<int>> s22 = {{2,"sakib"},{1,"asif"},{5,"liton"},{3,"tamim"},{4,"afif"}}; //descending order
    */




// iterator
    // print unordered_map element using iteration
    unordered_map<int, string> s = {{2,"sakib"},{1,"asif"},{1,"asif"},{5,"liton"},{3,"tamim"},{4,"afif"}};

    unordered_map<int, string>::iterator it;  // Creating the iterator.

    cout<<"\nunordered_map<int, string> s\nid\tname\n";
    for (it = s.begin(); it != s.end(); it++)
    {
    	cout<<it->first<<"\t"<<it->second<<endl;
    }
    cout<<endl;


    /* same as above
    unordered_map<int, string> s = {{2,"sakib"},{1,"asif"},{5,"liton"},{3,"tamim"},{4,"afif"}};

    unordered_map<int, string>::iterator it = s.begin();  // Creating the iterator.

    cout<<"\nunordered_map<int, string> s\nid\tname\n";
    while(it != s.end())
    {
    	cout<<it->first<<"\t"<<it->second<<endl;
    	it++;
    }
    cout<<endl;
    */


    // print unordered_map element without using iteration
    unordered_map<int, string> s1 = {{2,"sakib"},{1,"asif"},{5,"liton"},{3,"tamim"},{4,"afif"}};

    cout<<"\nunordered_map<int, string> s1\nid\tname\n";
    for (auto i: s1)
    {
    	cout<<i.first<<"\t"<<i.second<<endl;
    }
    cout<<endl;

    /* can write also
    unordered_map<int, string>  s1 = {{2,"sakib"},{1,"asif"},{5,"liton"},{3,"tamim"},{4,"afif"}};

    cout<<"unordered_map<int, string>  s1 \nid\tname\n";
    for (auto it = s1.begin(); it != s1.end(); it++)
    {
        cout<<it->first<<"\t"<<it->second<<endl;
    }
    cout<<endl;
    */



//copy one unordered_map to another
    unordered_map <int, string> m = {{2,"sakib"},{1,"asif"},{5,"liton"},{3,"tamim"},{4,"afif"}};
    unordered_map <int, string> m1 (m); //copy m1 in m

    cout<<"\nunordered_map<int, string> m\nid\tname\n";
    for(auto i: m)
    {
        cout<<i.first<<"\t"<<i.second<<endl;
    }
    cout<<endl;

    cout<<"\nafter copy m into m1\nunordered_map<int, string> m1\nid\tname\n";
    for(auto i: m1)
    {
        cout<<i.first<<"\t"<<i.second<<endl;
    }
    cout<<endl;



    //output:
    //    enter the length of unordered_map: 5
    //    unordered_map<int, string> v :
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
    //    unordered_map<int, string> v
    //    id      name
    //    1       asif
    //    2       sakib
    //    3       tamim
    //    4       afif
    //
    //
    //    unordered_map<int, string> v1
    //    id      name
    //    5       liton
    //    4       afif
    //    3       tamim
    //    2       sakib
    //    1       asif
    //
    //
    //    unordered_map<string, int> v2
    //    id      name
    //    5       liton
    //    4       afif
    //    3       tamim
    //    2       sakib
    //    1       asif
    //
    //
    //    unordered_map<int, string> v3
    //    id      name
    //    5       liton
    //    4       afif
    //    3       tamim
    //    2       sakib
    //    1       asif
    //
    //
    //    unordered_map<int, string> v4
    //    id      name
    //    5       liton
    //    4       afif
    //    3       tamim
    //    2       sakib
    //    1       asif
    //
    //
    //    unordered_map<int, string> v5
    //    id      name
    //    5       liton
    //    4       afif
    //    3       tamim
    //    2       sakib
    //    1       asif
    //
    //
    //    unordered_map<int, string> v6
    //    id      name
    //    5       liton
    //    4       afif
    //    3       tamim
    //    2       sakib
    //    1       asif
    //
    //
    //    unordered_map<int, string> v7
    //    id      name
    //    5       liton
    //    4       afif
    //    3       tamim
    //    2       sakib
    //    1       asif
    //
    //
    //    unordered_map<int, string> s
    //    id      name
    //    4       afif
    //    3       tamim
    //    5       liton
    //    1       asif
    //    2       sakib
    //
    //
    //    unordered_map<int, string> s1
    //    id      name
    //    4       afif
    //    3       tamim
    //    5       liton
    //    1       asif
    //    2       sakib
    //
    //
    //    unordered_map<int, string> m
    //    id      name
    //    4       afif
    //    3       tamim
    //    5       liton
    //    1       asif
    //    2       sakib
    //
    //
    //    after copy m into m1
    //    unordered_map<int, string> m1
    //    id      name
    //    4       afif
    //    3       tamim
    //    5       liton
    //    1       asif
    //    2       sakib
}
