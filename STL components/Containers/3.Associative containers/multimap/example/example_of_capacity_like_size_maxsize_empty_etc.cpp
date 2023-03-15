#include<iostream>
#include<map>
#include<algorithm>
using namespace std;
/*
    to know more: https://www.geeksforgeeks.org/the-c-standard-template-library-stl/
                  https://www.studytonight.com/cpp/stl/
                  https://www.simplilearn.com/tutorials/cpp-tutorial/cpp-standard-template-library#:~:text=C%2B%2B%20STL%20(standard%20template%20library)%20is%20a%20software%20library%20for,%2C%20algorithms%2C%20and%20function%20objects.
                  https://www.mygreatlearning.com/blog/multimap-in-cpp/
                  https://www.javatpoint.com/cpp-multimap
                  https://www.scaler.com/topics/cpp/multimap-in-cpp/
                  https://www.simplilearn.com/tutorials/cpp-tutorial/cpp-standard-template-library#:~:text=C%2B%2B%20STL%20(standard%20template%20library)%20is%20a%20software%20library%20for,%2C%20algorithms%2C%20and%20function%20objects.
                  https://www.studytonight.com/cpp/stl/stl-container-multimap
*/
/*
    Capacity:
    1.size() – Returns the number of elements in the multimap.
    2.max_size() – Returns the maximum number of elements that the multimap can hold.
    3.empty() – Returns whether the multimap is empty.
    4.find() - Returns an iterator to the element ‘g’ in the multimap if found, else returns the iterator to end.
    5.count() - Returns 1 or 0 based on whether the element ‘g’ is present in the multimap or not.
    6.lower_bound(const g) - Returns an iterator to the first element that is equivalent to ‘g’ or definitely
    will not go before the element ‘g’ in the multimap.
    7.upper_bound(const g) - Returns an iterator to the first element that will go after the element ‘g’ in the multimap.
    8.equal_range(const g) - The function returns an iterator of pairs. (key_comp). The pair refers to the range
    that includes all the elements in the container which have a key equivalent to k. which indiactes results of both
    the lower_bound and the upper_bound of g.
*/
int main()
{
    multimap <int, string> v = {{2,"sakib"},{1,"asif"},{5,"liton"},{3,"tamim"},{4,"afif"}};

    cout<<"\nmultimap<int, string> v\nid\tname\n";
    for(auto i: v)
    {
        cout<<i.first<<"\t"<<i.second<<endl;
    }
    cout<<endl;

    cout<<"Size : "<<v.size();
    cout<<"\nMax Size : "<<v.max_size();


//3.empty
    // checks if the multimap is empty or not
    if (v.empty() == false)
        cout<<"\nmultimap is not empty";
    else
        cout<<"\nmultimap is empty";


//4.find
    //example 1: find the id of 1 is present or not, find() only take unique value like id, never take name.
    cout<<"\nfind id 3: ";
    if(v.find(3) != v.end()) //can be write, if(v.find(3) == 1) or if(v.find(3) > 0)
    {
        cout<<"searching id 3 found in the multimap.";
    }
    else
    {
        cout<<"searching id 3 didnot found in the multimap.";
    }

    //or print with the details of id
    auto pos = v.find(1); //if found the id, pos store the name and id. else pos = v.end() which is null means nothing found.

    if(pos != v.end())
    {
        cout<<"\nid 1 found and the searching value id is "<<pos->first<<" and name is "<<pos->second;
    }
    else
    {
        cout<<"\nsearching value didnot found in the multimap.";
    }



    //example 2: find the id 5 and delete it from multimap
    v.erase(v.find(5));

    /* can be write above line
        auto pos = v.find(5);
        v.erase(pos);
    */

    cout<<"\n\nafter delete id 5 from multimap:";
    cout<<"\nmultimap<int, string> v\nid\tname\n";
    for(auto i: v)
    {
        cout<<i.first<<"\t"<<i.second<<endl;
    }
    cout<<endl;


    //example 3: print all values after id 2.
    auto pos1 = v.find(2);
    cout<<"\nprint all values after id 2: ";
    cout<<"\nmultimap<int, string> v\nid\tname\n";
    for(auto i=pos1; i!=v.end(); i++)
    {
        cout<<i->first<<"\t"<<i->second<<endl;
    }
    cout<<endl;



//5.count -> same as find
    //example 1: find the id 3 is present or not by counting,
    //if value present, count = 1(true). otherwise count = 0(false) means not present
    cout<<"\ncount id 3: ";
    if(v.count(3)) //can be write, if(v.count(3) == 1) or if(v.count(3) > 0)
    {
        cout<<"searching id 3 found in the multimap.";
    }
    else
    {
        cout<<"searching id 3 didnot found in the multimap.";
    }
    cout<<endl;


    //example 2: check all id's 1...10 is present or not by counting, if count = 1, value present. of count = 0, not present
    multimap<int, string> v1 = {{2,"sakib"},{4,"asif"},{6,"liton"},{8,"tamim"},{10,"afif"}};

    for(int i=1; i<=10; i++)
    {
        if(v1.count(i)) //can be write, if(v.count(30) == 1) or if(v.count(30) > 0)
        {
            cout<<"\nsearching id "<<i<<" found by count";
        }
        else
        {
            cout<<"\nsearching id "<<i<<" didnot found in the multimap.";
        }
    }
    cout<<endl;



//6.lower_bound and upper_bound (link:github\algorithm\Standard Template Library (STL)\STL components\Algorithms\Algorithms\Important STL Algorithms\example\Non-Manipulating Algorithms\example_of_lower_bound_and_upper_bound_algorithm.cpp)
    multimap<int, string> v2 = {{2,"sakib"},{4,"asif"},{6,"liton"},{8,"tamim"},{10,"afif"}};

    cout<<"\nmultimap<int, string> v2\nid\tname\n";
    for(auto i: v2)
    {
        cout<<i.first<<"\t"<<i.second<<endl;
    }
    cout<<endl;

    auto it1 = v2.lower_bound(3);
    auto it2 = v2.upper_bound(5);

    cout<<"\nthe lower bound value of 3 from v2: id = "<<it1->first<<" and name = "<<it1->second;
    cout<<"\nthe upper bound value of 5 from v2: id = "<<it2->first<<" and name = "<<it2->second;


    //example: delete the given range like 4 ... 6
    multimap<int, string>:: iterator itlow, ithigh;
    auto it3 = v2.lower_bound(4); //same as auto it3 = v2.lower_bound(3);
    auto it4 = v2.upper_bound(6); //same as auto it4 = v2.lower_bound(4/5);

    v2.erase(it3, it4); //give range here

    /* same as v2.erase(it3, it4)
    for(auto i=*it3; i!= *it4; i++)
    {
        v2.erase(i);
    }
    */

    cout<<"\nafter delete id 4 to 6 from v2:";
    cout<<"\nmultimap<int, string> v2\nid\tname\n";
    for(auto i: v2)
    {
        cout<<i.first<<"\t"<<i.second<<endl;
    }
    cout<<endl;




//8.equal_range which gives the result of both the lower_bound and the upper_bound of any value.
    multimap<int, string> v3 = {{2,"sakib"},{4,"asif"},{6,"liton"},{8,"tamim"},{10,"afif"}};

    cout<<"\nmultimap<int, string> v3\nid\tname\n";
    for(auto i: v3)
    {
        cout<<i.first<<"\t"<<i.second<<endl;
    }
    cout<<endl;

    auto it5 = v3.equal_range(4);

    //here, it5.first indicates lower bound and it5.second indicates upper bound
    cout<<"\nthe lower bound value of 4: id = "<<it5.first->first <<" and name = "<<it5.first->second;
    cout<<"\nthe upper bound value of 4: id = "<<it5.second->first <<" and name = "<<it5.second->second;


    return 0;

    //output:
    //    multimap<int, string> v
    //    id      name
    //    1       asif
    //    2       sakib
    //    3       tamim
    //    4       afif
    //    5       liton
    //
    //    Size : 5
    //    Max Size : 128102389400760775
    //    multimap is not empty
    //    find id 3: searching id 3 found in the multimap.
    //    id 1 found and the searching value id is 1 and name is asif
    //
    //    after delete id 5 from multimap:
    //    multimap<int, string> v
    //    id      name
    //    1       asif
    //    2       sakib
    //    3       tamim
    //    4       afif
    //
    //
    //    print all values after id 2:
    //    multimap<int, string> v
    //    id      name
    //    2       sakib
    //    3       tamim
    //    4       afif
    //
    //
    //    count id 3: searching id 3 found in the multimap.
    //
    //    searching id 1 didnot found in the multimap.
    //    searching id 2 found by count
    //    searching id 3 didnot found in the multimap.
    //    searching id 4 found by count
    //    searching id 5 didnot found in the multimap.
    //    searching id 6 found by count
    //    searching id 7 didnot found in the multimap.
    //    searching id 8 found by count
    //    searching id 9 didnot found in the multimap.
    //    searching id 10 found by count
    //
    //    multimap<int, string> v2
    //    id      name
    //    2       sakib
    //    4       asif
    //    6       liton
    //    8       tamim
    //    10      afif
    //
    //
    //    the lower bound value of 3 from v2: id = 4 and name = asif
    //    the upper bound value of 5 from v2: id = 6 and name = liton
    //    after delete id 4 to 6 from v2:
    //    multimap<int, string> v2
    //    id      name
    //    2       sakib
    //    8       tamim
    //    10      afif
    //
    //
    //    multimap<int, string> v3
    //    id      name
    //    2       sakib
    //    4       asif
    //    6       liton
    //    8       tamim
    //    10      afif
    //
    //
    //    the lower bound value of 4: id = 4 and name = asif
    //    the upper bound value of 4: id = 6 and name = liton
}
