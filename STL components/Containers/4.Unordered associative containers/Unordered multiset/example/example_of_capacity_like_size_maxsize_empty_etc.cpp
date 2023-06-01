#include<iostream>
#include<unordered_set>
#include<algorithm>
using namespace std;
/*
    to know more: https://www.geeksforgeeks.org/the-c-standard-template-library-stl/
                  https://www.studytonight.com/cpp/stl/
                  https://www.simplilearn.com/tutorials/cpp-tutorial/cpp-standard-template-library#:~:text=C%2B%2B%20STL%20(standard%20template%20library)%20is%20a%20software%20library%20for,%2C%20algorithms%2C%20and%20function%20objects.
                  https://www.mygreatlearning.com/blog/unordered_multiset-in-cpp/
                  https://www.javatpoint.com/cpp-unordered_multiset
                  https://www.scaler.com/topics/cpp/unordered_multiset-in-cpp/
                  https://www.simplilearn.com/tutorials/cpp-tutorial/cpp-standard-template-library#:~:text=C%2B%2B%20STL%20(standard%20template%20library)%20is%20a%20software%20library%20for,%2C%20algorithms%2C%20and%20function%20objects.
                  https://www.studytonight.com/cpp/stl/stl-container-unordered_multiset
*/
/*
    Capacity:
    1.size() – Returns the number of elements in the unordered_multiset.
    2.max_size() – Returns the maximum number of elements that the unordered_multiset can hold.
    3.empty() – Returns whether the unordered_multiset is empty.
    4.find() - Returns an iterator to the element ‘g’ in the unordered_multiset if found, else returns the iterator to end.
    5.count() - Returns 1 or 0 based on whether the element ‘g’ is present in the unordered_multiset or not.
    6.equal_range(const g) - The function returns an iterator of pairs. (key_comp). The pair refers to the range
    that includes all the elements in the container which have a key equivalent to k. which indiactes results of both
    the lower_bound and the upper_bound of g.
*/
int main()
{
    unordered_multiset <int> v = {10,20,30,40,20,50,5};

    cout<<"unordered_multiset <int> v = ";
    for(auto i : v)
    {
        cout<<i<<" ";
    }
    cout<<endl;


    cout<<"Size : "<<v.size();
    cout<<"\nMax Size : "<<v.max_size();


//3.empty
    // checks if the unordered_multiset is empty or not
    if (v.empty() == false)
        cout<<"\nunordered_multiset is not empty";
    else
        cout<<"\nunordered_multiset is empty";


//4.find
    //example 1: find the value 30 is present or not
    auto pos = v.find(30); //if found the value, pos store the value. else pos = v.end() which is null means nothing found.

    if(pos != v.end())
    {
        cout<<"\nfound and the searching value is "<<*pos;
    }
    else
    {
        cout<<"\nsearching value didnot found in the unordered_multiset.";
    }



    //example 2: find the value 5 and delete it from unordered_multiset
    v.erase(v.find(5));

    /* can be write above line
        auto pos = v.find(5);
        v.erase(pos);
    */

    cout<<"\nafter delete 5 from unordered_multiset \nunordered_multiset <int> v = ";
    for(auto i : v)
    {
        cout<<i<<" ";
    }
    cout<<endl;


    //example 3: print all values after 20.
    auto pos1 = v.find(20);
    cout<<"\nprint all values after 20 \nunordered_multiset <int> v = ";
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
        cout<<"\nsearching value didnot found in the unordered_multiset.";
    }


    //example 2: check all values 1...10 is present or not by counting, if count = 1, value present. of count = 0, not present
    unordered_multiset<int> v1 = {2,4,6,8,10};

    for(int i=1; i<=10; i++)
    {
        if(v1.count(i)) //can be write, if(v.count(30) == 1) or if(v.count(30) > 0)
        {
            cout<<"\nsearching value "<<i<<" found by count";
        }
        else
        {
            cout<<"\nsearching value "<<i<<" didnot found in the unordered_multiset.";
        }
    }
    cout<<endl;


//6.equal_range which gives the result of both the lower_bound and the upper_bound of any value.
    unordered_multiset<int> v3 = {5, 10, 15, 20, 20, 23, 42, 45};
    cout<<"\nunordered_multiset<int> v3 = ";
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
    //    unordered_multiset <int> v = 50 5 40 30 20 20 10
    //    Size : 7
    //    Max Size : 576460752303423487
    //    unordered_multiset is not empty
    //    found and the searching value is 30
    //    after delete 5 from unordered_multiset
    //    unordered_multiset <int> v = 50 40 30 20 20 10
    //
    //    print all values after 20
    //    unordered_multiset <int> v = 20 20 10
    //
    //    found by count and the searching value is 30
    //    searching value 1 didnot found in the unordered_multiset.
    //    searching value 2 found by count
    //    searching value 3 didnot found in the unordered_multiset.
    //    searching value 4 found by count
    //    searching value 5 didnot found in the unordered_multiset.
    //    searching value 6 found by count
    //    searching value 7 didnot found in the unordered_multiset.
    //    searching value 8 found by count
    //    searching value 9 didnot found in the unordered_multiset.
    //    searching value 10 found by count
    //
    //    unordered_multiset<int> v3 = 45 23 42 20 20 15 10 5
    //
    //    the lower bound value of 15 is 15
    //    the upper bound value of 15 is 10
}
