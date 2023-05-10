#include<iostream>
#include<set>
#include<algorithm>
using namespace std;
/*
    to know more: https://www.geeksforgeeks.org/the-c-standard-template-library-stl/
                  https://www.studytonight.com/cpp/stl/
                  https://www.simplilearn.com/tutorials/cpp-tutorial/cpp-standard-template-library#:~:text=C%2B%2B%20STL%20(standard%20template%20library)%20is%20a%20software%20library%20for,%2C%20algorithms%2C%20and%20function%20objects.
                  https://www.mygreatlearning.com/blog/multiset-in-cpp/
                  https://www.javatpoint.com/cpp-multiset
                  https://www.scaler.com/topics/cpp/multiset-in-cpp/
                  https://www.simplilearn.com/tutorials/cpp-tutorial/cpp-standard-template-library#:~:text=C%2B%2B%20STL%20(standard%20template%20library)%20is%20a%20software%20library%20for,%2C%20algorithms%2C%20and%20function%20objects.
                  https://www.studytonight.com/cpp/stl/stl-container-multiset
*/
/*
    Capacity:
    1.size() – Returns the number of elements in the multiset.
    2.max_size() – Returns the maximum number of elements that the multiset can hold.
    3.empty() – Returns whether the multiset is empty.
    4.find() - Returns an iterator to the element ‘g’ in the multiset if found, else returns the iterator to end.
    5.count() - Returns 1 or 0 based on whether the element ‘g’ is present in the multiset or not.
    6.lower_bound(const g) - Returns an iterator to the first element that is equivalent to ‘g’ or definitely
    will not go before the element ‘g’ in the multiset.
    7.upper_bound(const g) - Returns an iterator to the first element that will go after the element ‘g’ in the multiset.
    8.equal_range(const g) - The function returns an iterator of pairs. (key_comp). The pair refers to the range
    that includes all the elements in the container which have a key equivalent to k. which indiactes results of both
    the lower_bound and the upper_bound of g.
*/
int main()
{
    multiset <int> v = {10,20,30,40,20,50,5};

    cout<<"multiset <int> v = ";
    for(auto i : v)
    {
        cout<<i<<" ";
    }
    cout<<endl;


    cout<<"Size : "<<v.size();
    cout<<"\nMax Size : "<<v.max_size();


//3.empty
    // checks if the multiset is empty or not
    if (v.empty() == false)
        cout<<"\nmultiset is not empty";
    else
        cout<<"\nmultiset is empty";


//4.find
    //example 1: find the value 30 is present or not
    auto pos = v.find(30); //if found the value, pos store the value. else pos = v.end() which is null means nothing found.

    if(pos != v.end())
    {
        cout<<"\nfound and the searching value is "<<*pos;
    }
    else
    {
        cout<<"\nsearching value didnot found in the multiset.";
    }



    //example 2: find the value 20 and delete it from multiset
    v.erase(v.find(5)); //it delete only single x value.
    v.erase(20); //it delete whole x values.


    /* can be write above line
        auto pos = v.find(5);
        v.erase(pos);
    */

    cout<<"\nafter delete 5 and 20 from multiset \nmultiset <int> v = ";
    for(auto i : v)
    {
        cout<<i<<" ";
    }
    cout<<endl;


    //example 3: print all values after 20.
    auto pos1 = v.find(20);
    cout<<"\nprint all values after 20 \nmultiset <int> v = ";
    for(auto i=pos1; i!=v.end(); i++)
    {
        cout<<*i<<" ";
    }
    cout<<endl;



//5.count  -> same as find
    //example 1: find the value 30 is present or not by counting,
    //if value present, count = 1(true). otherwise count = 0(false) means not present
    if(v.count(30)) //can be write, if(v.count(30) == 1) or if(v.count(30) > 0)
    {
        cout<<"\nfound by count and the searching value is 30";
    }
    else
    {
        cout<<"\nsearching value didnot found in the multiset.";
    }


    //example 2: check all values 1...10 is present or not by counting, if count = 1, value present. of count = 0, not present
    multiset<int> v1 = {2,4,6,8,10};

    for(int i=1; i<=10; i++)
    {
        if(v1.count(i)) //can be write, if(v.count(30) == 1) or if(v.count(30) > 0)
        {
            cout<<"\nsearching value "<<i<<" found by count";
        }
        else
        {
            cout<<"\nsearching value "<<i<<" didnot found in the multiset.";
        }
    }
    cout<<endl;



//6.lower_bound and upper_bound (link:github\algorithm\Standard Template Library (STL)\STL components\Algorithms\Algorithms\Important STL Algorithms\example\Non-Manipulating Algorithms\example_of_lower_bound_and_upper_bound_algorithm.cpp)
    multiset<int> v2 = {5, 10, 15, 20, 20, 23, 42, 45};
    cout<<"\nmultiset<int> v2 = ";
    for(auto i: v2)
    {
        cout<<i<<" ";
    }
    cout<<endl;

    auto it1 = v2.lower_bound(15);
    auto it2 = v2.upper_bound(15);

    cout<<"\nthe lower bound value of 15 is "<<*it1;
    cout<<"\nthe upper bound value of 15 is "<<*it2;

    //example: delete the given range like 10 ... 20
    multiset<int>:: iterator itlow, ithigh;
    auto it3 = v2.lower_bound(10);
    auto it4 = v2.upper_bound(20);

    v2.erase(it3, it4); //give range here

    /* same as v2.erase(it3, it4)
    for(auto i=*it3; i!= *it4; i++)
    {
        v2.erase(i);
    }
    */

    cout<<"\nafter delete 10 to 20 \nmultiset<int> v2 = ";
    for(auto i: v2)
    {
        cout<<i<<" ";
    }
    cout<<endl;




//8.equal_range which gives the result of both the lower_bound and the upper_bound of any value.
    multiset<int> v3 = {5, 10, 15, 20, 20, 23, 42, 45};
    cout<<"\nmultiset<int> v3 = ";
    for(auto i: v3)
    {
        cout<<i<<" ";
    }
    cout<<endl;

    auto it5 = v3.equal_range(15);

    cout<<"\nthe lower bound value of 15 is "<<*it5.first;
    cout<<"\nthe upper bound value of 15 is "<<*it5.second;


    return 0;

    //output:
    //    multiset <int> v = 5 10 20 20 30 40 50
    //    Size : 6
    //    Max Size : 230584300921369395
    //    multiset is not empty
    //    found and the searching value is 30
    //    after delete 5 and 20 from multiset
    //    multiset <int> v = 10 30 40 50
    //
    //    print all values after 20
    //    multiset <int> v = 20 30 40 50
    //
    //    found by count and the searching value is 30
    //    searching value 1 didnot found in the multiset.
    //    searching value 2 found by count
    //    searching value 3 didnot found in the multiset.
    //    searching value 4 found by count
    //    searching value 5 didnot found in the multiset.
    //    searching value 6 found by count
    //    searching value 7 didnot found in the multiset.
    //    searching value 8 found by count
    //    searching value 9 didnot found in the multiset.
    //    searching value 10 found by count
    //
    //    multiset<int> v2 = 5 10 15 20 23 42 45
    //
    //    the lower bound value of 15 is 15
    //    the upper bound value of 15 is 20
    //    after delete 10 to 20
    //    multiset<int> v2 = 5 23 42 45
    //
    //    multiset<int> v3 = 5 10 15 20 23 42 45
    //
    //    the lower bound value of 15 is 15
    //    the upper bound value of 15 is 20
}
