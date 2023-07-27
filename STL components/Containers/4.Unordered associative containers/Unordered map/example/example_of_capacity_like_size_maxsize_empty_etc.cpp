#include<iostream>
#include<unordered_map>
#include<algorithm>
using namespace std;
/*
    to know more: https://www.geeksforgeeks.org/the-c-standard-template-library-stl/
                  https://www.studytonight.com/cpp/stl/
                  https://www.simplilearn.com/tutorials/cpp-tutorial/cpp-standard-template-library#:~:text=C%2B%2B%20STL%20(standard%20template%20library)%20is%20a%20software%20library%20for,%2C%20algorithms%2C%20and%20function%20objects.
                  https://www.mygreatlearning.com/blog/unordered_map-in-cpp/
                  https://www.javatpoint.com/cpp-unordered_map
                  https://www.scaler.com/topics/cpp/unordered_map-in-cpp/
                  https://www.simplilearn.com/tutorials/cpp-tutorial/cpp-standard-template-library#:~:text=C%2B%2B%20STL%20(standard%20template%20library)%20is%20a%20software%20library%20for,%2C%20algorithms%2C%20and%20function%20objects.
                  https://www.studytonight.com/cpp/stl/stl-container-unordered_map
*/
/*
    Capacity:
    1.size() – Returns the number of elements in the unordered_map.
    2.max_size() – Returns the maximum number of elements that the unordered_map can hold.
    3.empty() – Returns whether the unordered_map is empty.
    4.find()/at() - Returns an iterator to the element ‘g’ in the unordered_map if found, else returns the iterator to end.
    5.count() - Returns 1 or 0 based on whether the element ‘g’ is present in the unordered_map or not.
    6.equal_range(const g) - The function returns an iterator of pairs. (key_comp). The pair refers to the range
    that includes all the elements in the container which have a key equivalent to k. which indiactes results of both
    the lower_bound and the upper_bound of g.
*/
int main()
{
    unordered_map<int, string> v = {{2,"sakib"},{1,"asif"},{5,"liton"},{3,"tamim"},{4,"afif"}};

    cout<<"\nmap<int, string> v\nid\tname\n";
    for(auto i: v)
    {
        cout<<i.first<<"\t"<<i.second<<endl;
    }
    cout<<endl;


    cout<<"Size : "<<v.size();
    cout<<"\nMax Size : "<<v.max_size();


//3.empty
    // checks if the unordered_map is empty or not
    if (v.empty() == false)
        cout<<"\nunordered_map is not empty\n";
    else
        cout<<"\nunordered_map is empty\n";
    
    

//4.find or at (searching purpose)
    //example 1: find the value 3 is present or not using find
    auto pos = v.find(3); //if found the value, pos store the value. else pos = v.end() which is null means nothing found.

    if(pos != v.end())
    {
        cout<<"\nfound and the searching value is "<<pos->first<<" and name is "<<pos->second<<endl;
    }
    else
    {
        cout<<"\nsearching value didnot found in the unordered_map.\n";
    }


    //find the value 3 is present or not using at
    cout<<"\nthe searching value is "<<3<<" and name is "<<v.at(3)<<endl;

    //can write directly using [] and v.at(3) is same as v[3]
    cout<<"\nthe searching value is "<<3<<" and name is "<<v[3]<<endl;


    // change value for 4 using [] or at
    v[4] = "yasir";  // same as -> v.at(4) = "yasir";


    cout<<"\nAfter changing key 4 value:\nmap<int, string> v\nid\tname\n";
    for(auto i: v)
    {
        cout<<i.first<<"\t"<<i.second<<endl;
    }
    cout<<endl;



    //example 2: find the value 5 and delete it from unordered_map
    v.erase(v.find(5));

    /* can be write above line
        auto pos = v.find(5);
        v.erase(pos);
    */

    cout<<"\nafter delete 5 from unordered_map\n";
    cout<<"\nmap<int, string> v\nid\tname\n";
    for(auto i: v)
    {
        cout<<i.first<<"\t"<<i.second<<endl;
    }
    cout<<endl;


    /* never use it unordered_multimap cause its didnot follow any order
    //example 3: print all values after 2.
    v = {{2,"sakib"},{1,"asif"},{5,"liton"},{3,"tamim"},{4,"afif"}};

    auto pos1 = v.find(5);
    cout<<"\nprint all values after 5 \nunordered_map<int, string> v = ";
    for(auto i=pos1; i!=v.end(); i++)
    {
        cout<<i->first<<"\t"<<i->second<<endl;
    }
    cout<<endl;
    */



//5.count  -> same as find
    //example 1: find the value 3 is present or not by counting,
    //if value present, count = 1(true). otherwise count = 0(false) means not present
    if(v.count(3)) //can be write, if(v.count(3) == 1) or if(v.count(3) > 0)
    {
        cout<<"\nfound by count and the searching value is 3";
    }
    else
    {
        cout<<"\nsearching value didnot found in the unordered_map.";
    }


    //example 2: check all values 1...10 is present or not by counting, if count = 1, value present. of count = 0, not present
    unordered_map<int, string> v1 = {{2,"sakib"},{4,"asif"},{6,"liton"},{8,"tamim"},{10,"afif"}};

    for(auto i=1; i<=10; i++)
    {
        if(v1.count(i)) //can be write, if(v.count(i) == 1) or if(v.count(i) > 0)
        {
           cout<<"\nsearching value "<<i<<" found by count";
        }
        else
        {
           cout<<"\nsearching value "<<i<<" didnot found in the unordered_map.";
        }
    }
    cout<<endl;


//6.equal_range which gives the result of both the lower_bound and the upper_bound of any value.
    unordered_map<int, string> v3 = {{2,"sakib"},{1,"asif"},{5,"liton"},{3,"tamim"},{4,"afif"}};
    cout<<"\nmap<int, string> v3\nid\tname\n";
    for(auto i: v3)
    {
        cout<<i.first<<"\t"<<i.second<<endl;
    }
    cout<<endl;

    auto it5 = v3.equal_range(3);

    cout<<"\nthe lower bound value of 3 is "<<it5.first->first;
    cout<<"\nthe upper bound value of 3 is "<<it5.second->first;


    return 0;

    //output:
    //
    //    map<int, string> v
    //    id      name
    //    4       afif
    //    3       tamim
    //    5       liton
    //    1       asif
    //    2       sakib
    //
    //    Size : 5
    //    Max Size : 192153584101141162
    //    unordered_map is not empty
    //
    //    found and the searching value is 3 and name is tamim
    //
    //    the searching value is 3 and name is tamim
    //
    //    the searching value is 3 and name is tamim
    //
    //    after delete 5 from unordered_map
    //
    //    map<int, string> v
    //    id      name
    //    4       afif
    //    3       tamim
    //    1       asif
    //    2       sakib
    //
    //
    //
    //    found by count and the searching value is 3
    //    searching value 1 didnot found in the unordered_map.
    //    searching value 2 found by count
    //    searching value 3 didnot found in the unordered_map.
    //    searching value 4 found by count
    //    searching value 5 didnot found in the unordered_map.
    //    searching value 6 found by count
    //    searching value 7 didnot found in the unordered_map.
    //    searching value 8 found by count
    //    searching value 9 didnot found in the unordered_map.
    //    searching value 10 found by count
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
    //    the lower bound value of 3 is 3
    //    the upper bound value of 3 is 5
}
