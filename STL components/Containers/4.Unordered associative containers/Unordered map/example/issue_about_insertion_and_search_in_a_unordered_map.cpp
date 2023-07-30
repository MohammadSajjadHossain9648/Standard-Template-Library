#include<iostream>
#include<unordered_map>
using namespace std;
/*
    always remember: whatever you input in unordered_map, it store duplicate values.
*/
int main()
{
//what happen when inserting data in same key
    unordered_map <int, string> v = {{1,"asif"},{2,"sakib"},{3,"tamim"},{4,"afif"},{5,"liton"}};

    cout<<"\nunordered_map<int, string> v\nid\tname\n";
    for(auto i: v)
    {
        cout<<i.first<<"\t"<<i.second<<endl;
    }
    cout<<endl;


    //never insert the key cause already inserted in map but only update the key data in map
    v[4] = "mehedi";

    cout<<"\nunordered_map<int, string> v\nid\tname\n";
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
    what():  unordered_map::at
    */


    v[10]; // automatically create key 10 with null value
    cout<<"\n\nvalue in key 10: "<<v.at(10)<<endl;  // nothing show error cause automatically create key 10 with null value 




    //output:
    //
    //    unordered_map<int, string> v
    //    id      name
    //    5       liton
    //    4       afif
    //    3       tamim
    //    2       sakib
    //    1       asif
    //
    //
    //    unordered_map<int, string> v
    //    id      name
    //    5       liton
    //    4       mehedi
    //    3       tamim
    //    2       sakib
    //    1       asif
    //
    //
    //
    //    value in key 10:
}
