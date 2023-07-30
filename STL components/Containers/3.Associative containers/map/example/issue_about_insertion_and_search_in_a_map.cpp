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
//what happen when inserting data in same key
    map <int, string> v = {{1,"asif"},{2,"sakib"},{3,"tamim"},{4,"afif"},{5,"liton"}};

    cout<<"\nmap<int, string> v\nid\tname\n";
    for(auto i: v)
    {
        cout<<i.first<<"\t"<<i.second<<endl;
    }
    cout<<endl;


    //never insert the key cause already inserted in map but only update the key data in map
    v[4] = "mehedi";

    cout<<"\nmap<int, string> v\nid\tname\n";
    for(auto i: v)
    {
        cout<<i.first<<"\t"<<i.second<<endl;
    }
    cout<<endl;





//what happen when searching key is not inserted
    /* show error if write
    cout<<"\n\nvalue in key 10: "<<v.at(10)<<endl;

    or,
    cout<<"\n\nvalue in key 10: "<<v.at(10)<<endl;
    v[10];


    output:
    value in key 10: terminate called after throwing an instance of 'std::out_of_range'
    what():  map::at
    */


    v[10]; // automatically create key 10 with null value
    cout<<"\n\nvalue in key 10: "<<v.at(10)<<endl;  // nothing show error cause automatically create key 10 with null value




    //output:
    //
    //    map<int, string> v
    //    id      name
    //    1       asif
    //    2       sakib
    //    3       tamim
    //    4       afif
    //    5       liton
    //
    //
    //    map<int, string> v
    //    id      name
    //    1       asif
    //    2       sakib
    //    3       tamim
    //    4       mehedi
    //    5       liton
    //
    //
    //
    //    value in key 10:
}
