#include<iostream>
#include<unordered_set>
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
int main()
{
    unordered_multiset<int> v = {10,50,40};

//1.insert()
    // inserts 15 according to its position by ascending order
    v.insert(20);   //-> v = 10 20 40 50
    v.insert(30);   //-> v = 10 20 30 40 50
    /* can be write above two lines in one line
        v.insert({20,30});
    */

    cout<<"unordered_multiset<int> v = ";
    for(auto i: v)
    {
        cout<<i<<" ";
    }
    cout<<endl;


//2.insert(iterator position, const g)
    /* can write same way the above code
    unordered_multiset<int> v;

    // Function to insert elements in the unordered_multiset container
    auto itr = s.insert(s.begin(), 10);

    // the time taken to insertion is very less as the correct position for insertion is given
    itr = s.insert(itr, 40);
    itr = s.insert(itr, 20);
    itr = s.insert(itr, 50);
    itr = s.insert(itr, 30);
    */

    //another example: copy after a number to end into another unordered_multiset
    unordered_multiset<int> v1;
    v1.insert(v.find(30), v.end()); //-> begin value is 30, if v.find(25), v1 print null.

    cout<<"unordered_multiset<int> v1 = ";
    for(auto i: v1)
    {
        cout<<i<<" ";
    }
    cout<<endl;



//3.erase(const g) and erase(iterator position) -> always use iterator to erase anything
    //example 1: erase first element or last element
    v = {1,2,3,4,5,6,7,8,9,10};

    unordered_multiset<int> :: iterator it;

    it = v.begin();  //delete first element
    //or, it = v.end();   //delete last element

    v.erase(*it);   //same as v.erase(it);

    cout<<"unordered_multiset<int> v = ";
    for(auto i: v)
    {
        cout<<i<<" ";
    }
    cout<<endl;


    //example 2: delete a value
    v = {1,2,3,4,5,6,7,8,9,10};
    v.erase(6);
    /* delete a value by find it first
        unordered_multiset<int> :: iterator it;
        it = v.find(6);
        v.erase(it);
    */
    cout<<"unordered_multiset<int> v = ";
    for(auto i: v)
    {
        cout<<i<<" ";
    }
    cout<<endl;


    //example 4: erase all values
    v = {1,2,3,4,5,6,7,8,9,10};

    v.erase(v.begin(),v.end());

    cout<<"unordered_multiset<int> v = ";
    for(auto i:v)
    {
        cout<<i<<" ";
    }
    cout<<endl;


    //example 5: delete all even numbers from unordered_multiset
    v = {1,2,3,4,5,6,7,8,9,10};

    for(int i: v)
    {
        if(i%2 == 0)
        {
            v.erase(i);
        }
    }

    cout<<"\nafter delete all even numbers \nunordered_multiset<int> v = ";
    for(auto i:v)
    {
        cout<<i<<" ";
    }
    cout<<endl;




//5.clear()
    unordered_multiset<int> s = {1,2,3,4,5};
    s.clear();
    cout<<"\nafter clear, size is "<<s.size()<<endl;




//6.emplace()
    unordered_multiset<int> v3;
    v3.insert(6);
    v3.insert(7);
    v3.insert(8);
    v3.insert(9);
    v3.insert(10);

    cout<<"\nunordered_multiset<int> v3 = ";
    for(auto i: v3)
    {
        cout<<i<<" ";
    }
    cout<<endl;

    //or can be write same as use emplace instead of insert
    unordered_multiset<int> v4;
    v4.emplace(6);
    v4.emplace(7);
    v4.emplace(8);
    v4.emplace(9);
    v4.emplace(10);

    cout<<"\nunordered_multiset<int> v4 = ";
    for(auto i: v4)
    {
        cout<<i<<" ";
    }
    cout<<endl;




//7.emplace_hint(iterator position, value)
    unordered_multiset<int> s1;
    auto it6 = s1.emplace_hint(s1.begin(), 1);

    // stores the position of 2's insertion
    it6 = s1.emplace_hint(it6, 2);

    // fast step as it directly starts the search step from position where 3 was last inserted
    s1.emplace_hint(it6, 3);

    // this is a slower step as it starts checking from the position where 3 was inserted
    // but 0 is to be inserted before 1
    s1.emplace_hint(it6, 0);

    // prints the unordered_multiset elements
    cout<<"unordered_multiset<int> s1 = ";
    for (auto it6 = s1.begin(); it6 != s1.end(); it6++)
        cout<<*it6<<" ";
    cout<<endl;

    //another example:
    unordered_multiset<int> m = {60, 20, 30, 40};

    m.emplace_hint(m.end(), 50);
    m.emplace_hint(m.begin(), 10);

    cout<<"unordered_multiset<int> m = ";
    for (auto it = m.begin(); it != m.end(); ++it)
        cout<<*it<<" ";
    cout<<endl;

    //another example:
    typedef unordered_multiset<string> city;
    string name;
    city fmly ;
    int n;

    cout<<"Enter the number of family members :";
    cin>>n;

    cout<<"Enter the name of each member: \n";
    for(int i =0; i<n; i++)
    {
        cin>>name;      // Get key

        fmly.emplace_hint(fmly.begin(),name);

    }

    cout<<"\nTotal memnbers in family are:"<< fmly.size();

    cout<<"\nDetails of family members: \n";
    cout<<"\nName \n ________________________\n";
    city::iterator p;
    for(p = fmly.begin(); p!=fmly.end(); p++)
    {
        cout<<(*p)<<" \n ";
    }




//8.swap
    // two unordered_multiset to perform swap
    unordered_multiset<int> v5, v6;
    v5.insert(1);
    v5.insert(2);
    v6.insert(3);
    v6.insert(4);

    cout<<"\n\nbefore Swap";
    cout<<"\nunordered_multiset<int> v5 = ";
    for(auto i: v5)
    {
        cout<<i<<" ";
    }
    cout<<endl;

    cout<<"\nunordered_multiset<int> v6 = ";
    for(auto i: v6)
    {
        cout<<i<<" ";
    }
    cout<<endl;


    // Swaps v5 and v6
    v5.swap(v6);

    cout<<"\nAfter Swap";
    cout<<"\nunordered_multiset<int> v5 = ";
    for(auto i: v5)
    {
        cout<<i<<" ";
    }
    cout<<endl;


    cout<<"\nunordered_multiset<int> v6 = ";
    for(auto i: v6)
    {
        cout<<i<<" ";
    }
    cout<<endl;

    //output:
    //    unordered_multiset<int> v = 30 20 10 40 50
    //    unordered_multiset<int> v1 = 50 40 10 20 30
    //    unordered_multiset<int> v = 9 8 7 6 5 4 3 2 1
    //    unordered_multiset<int> v = 10 9 8 7 5 4 3 2 1
    //    unordered_multiset<int> v =
    //
    //    after delete all even numbers
    //    unordered_multiset<int> v = 9 7 5 3 1
    //
    //    after clear, size is 0
    //
    //    unordered_multiset<int> v3 = 10 9 8 7 6
    //
    //    unordered_multiset<int> v4 = 10 9 8 7 6
    //    unordered_multiset<int> s1 = 0 3 2 1
    //    unordered_multiset<int> m = 10 60 20 30 40 50
    //    Enter the number of family members :4
    //    Enter the name of each member:
    //    akash
    //    sadab
    //    babar
    //    wasim
    //
    //    Total memnbers in family are:4
    //    Details of family members:
    //
    //    Name
    //     ________________________
    //    wasim
    //     sadab
    //     babar
    //     akash
    //
    //
    //    before Swap
    //    unordered_multiset<int> v5 = 2 1
    //
    //    unordered_multiset<int> v6 = 4 3
    //
    //    After Swap
    //    unordered_multiset<int> v5 = 4 3
    //
    //    unordered_multiset<int> v6 = 2 1
}
