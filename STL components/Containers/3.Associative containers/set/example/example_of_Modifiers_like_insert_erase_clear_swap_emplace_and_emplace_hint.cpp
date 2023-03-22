#include<iostream>
#include<set>
using namespace std;
/*
    to know more: https://www.geeksforgeeks.org/the-c-standard-template-library-stl/
                  https://www.studytonight.com/cpp/stl/
                  https://www.simplilearn.com/tutorials/cpp-tutorial/cpp-standard-template-library#:~:text=C%2B%2B%20STL%20(standard%20template%20library)%20is%20a%20software%20library%20for,%2C%20algorithms%2C%20and%20function%20objects.
                  https://www.mygreatlearning.com/blog/set-in-cpp/
                  https://www.javatpoint.com/cpp-set
                  https://www.scaler.com/topics/cpp/set-in-cpp/
                  https://www.simplilearn.com/tutorials/cpp-tutorial/cpp-standard-template-library#:~:text=C%2B%2B%20STL%20(standard%20template%20library)%20is%20a%20software%20library%20for,%2C%20algorithms%2C%20and%20function%20objects.
                  https://www.studytonight.com/cpp/stl/stl-container-set
*/
int main()
{
    set<int> v = {10,50,40};

//1.insert()
    // inserts 15 according to its position by ascending order
    v.insert(20);   //-> v = 10 20 40 50
    v.insert(30);   //-> v = 10 20 30 40 50
    /* can be write above two lines in one line
        v.insert({20,30});
    */

    cout<<"set<int> v = ";
    for(auto i: v)
    {
        cout<<i<<" ";
    }
    cout<<endl;


//2.insert(iterator position, const g)
    /* can write same way the above code
    set<int> v;

    // Function to insert elements in the set container
    auto itr = s.insert(s.begin(), 10);

    // the time taken to insertion is very less as the correct position for insertion is given
    itr = s.insert(itr, 40);
    itr = s.insert(itr, 20);
    itr = s.insert(itr, 50);
    itr = s.insert(itr, 30);
    */
    /* same as before
    set<int> s;
    set<int> :: iterator itr = s.begin();
    // Function to insert elements in the set container
    s.insert(itr, 10);

    // the time taken to insertion is very less as the correct position for insertion is given
    s.insert(itr, 40);
    s.insert(itr, 20);
    s.insert(itr, 50);
    s.insert(itr, 30);

    //same as above 5 lines
    itr = s.insert(itr, 10);
    itr = s.insert(itr, 40);
    itr = s.insert(itr, 20);
    itr = s.insert(itr, 50);
    itr = s.insert(itr, 30);

    */

    //another example: copy after a number to end into another set
    set<int> v1;
    v1.insert(v.find(30), v.end()); //-> begin value is 30, if v.find(25), v1 print null.

    cout<<"set<int> v1 = ";
    for(auto i: v1)
    {
        cout<<i<<" ";
    }
    cout<<endl;



//3.erase(const g) and erase(iterator position) -> always use iterator to erase anything
    //example 1: erase first element or last element
    v = {1,2,3,4,5,6,7,8,9,10};

    set<int> :: iterator it;

    it = v.begin();  //delete first element
    //or, it = v.end();   //delete last element

    v.erase(*it);   //same as v.erase(it);

    cout<<"set<int> v = ";
    for(auto i: v)
    {
        cout<<i<<" ";
    }
    cout<<endl;


    //example 2: delete a value
    v = {1,2,3,4,5,6,7,8,9,10};
    v.erase(6);
    /* delete a value by find it first
        set<int> :: iterator it;
        it = v.find(6);
        v.erase(it);
    */
    cout<<"set<int> v = ";
    for(auto i: v)
    {
        cout<<i<<" ";
    }
    cout<<endl;


    //example 3: erase all values except first n and last n value
    v = {1,2,3,4,5,6,7,8,9,10};
    set<int>:: iterator it3, it4;

    it3 = v.begin(); //it3 = 0 (indicates first index no 0)
    it4 = v.end(); //it4 = 9 (indicates last index no 9)

    //it3 increasing n times to point next index value, it4 decreasing n times to point before last index value
    //always it3 increase to start delete point of index number
    //always it4 decrease to end delete point of index number
    it3++;
    it3++;
    it4--;
    it4--;

    v.erase(it3,it4); // range is it3 = 2 no index value to it4 = 7 no index value

    cout<<"set<int> v = ";
    for(auto i: v)
    {
        cout<<i<<" ";  // set<int> v = 1 2 9 10 , here print first 2 values and last 2 values
    }
    cout<<endl;


    //example 4: erase all values
    v = {1,2,3,4,5,6,7,8,9,10};

    v.erase(v.begin(),v.end());

    cout<<"set<int> v = ";
    for(auto i:v)
    {
        cout<<i<<" ";
    }
    cout<<endl;


    //example 5: delete all even numbers from set
    v = {1,2,3,4,5,6,7,8,9,10};

    for(int i: v)
    {
        if(i%2 == 0)
        {
            v.erase(i);
        }
    }

    cout<<"\nafter delete all even numbers \nset<int> v = ";
    for(auto i:v)
    {
        cout<<i<<" ";
    }
    cout<<endl;




//5.clear()
    set<int> s = {1,2,3,4,5};
    s.clear();
    cout<<"\nafter clear, size is "<<s.size()<<endl;




//6.emplace()
    set<int> v3;
    v3.insert(6);
    v3.insert(7);
    v3.insert(8);
    v3.insert(9);
    v3.insert(10);

    cout<<"\nset<int> v3 = ";
    for(auto i: v3)
    {
        cout<<i<<" ";
    }
    cout<<endl;

    //or can be write same as use emplace instead of insert
    set<int> v4;
    v4.emplace(6);
    v4.emplace(7);
    v4.emplace(8);
    v4.emplace(9);
    v4.emplace(10);

    cout<<"\nset<int> v4 = ";
    for(auto i: v4)
    {
        cout<<i<<" ";
    }
    cout<<endl;


    //another example: emplace() vs insert
    set<pair<char, int>> ms;

    // using emplace() to insert pair in-place
    ms.emplace('a', 24);

    // Below line would not compile -> ms.insert('b', 25);

    // using emplace() to insert pair in-place
    ms.insert(make_pair('b', 25));

    // printing the set
    for (auto it = ms.begin(); it != ms.end(); ++it)
        cout<<" "<<(*it).first<<" "<<(*it).second<<endl;




//emplace_hint(iterator position, value)
    set<int> s1;
    auto it6 = s1.emplace_hint(s1.begin(), 1);

    // stores the position of 2's insertion
    it6 = s1.emplace_hint(it6, 2);

    // fast step as it directly starts the search step from position where 3 was last inserted
    s1.emplace_hint(it6, 3);

    // this is a slower step as it starts checking from the position where 3 was inserted
    // but 0 is to be inserted before 1
    s1.emplace_hint(it6, 0);

    // prints the set elements
    for (auto it6 = s1.begin(); it6 != s1.end(); it6++)
        cout<<*it6<<" ";


    //another example:
    set<int> m = {60, 20, 30, 40};

    m.emplace_hint(m.end(), 50);
    m.emplace_hint(m.begin(), 10);

    cout<<"set<int> m = ";
    for (auto it = m.begin(); it != m.end(); ++it)
        cout<<*it<<" ";
    cout<<endl;

    //another example:
    typedef set<string> city;
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




//swap
    // two set to perform swap
    set<int> v5, v6;
    v5.insert(1);
    v5.insert(2);
    v6.insert(3);
    v6.insert(4);

    cout<<"\n\nbefore Swap";
    cout<<"\nset<int> v5 = ";
    for(auto i: v5)
    {
        cout<<i<<" ";
    }
    cout<<endl;

    cout<<"\nset<int> v6 = ";
    for(auto i: v6)
    {
        cout<<i<<" ";
    }
    cout<<endl;


    // Swaps v5 and v6
    v5.swap(v6);

    cout<<"\nAfter Swap";
    cout<<"\nset<int> v5 = ";
    for(auto i: v5)
    {
        cout<<i<<" ";
    }
    cout<<endl;


    cout<<"\nset<int> v6 = ";
    for(auto i: v6)
    {
        cout<<i<<" ";
    }
    cout<<endl;

    //output:
    //    set<int> v = 10 20 30 40 50
    //    set<int> v1 = 30 40 50
    //    set<int> v = 2 3 4 5 6 7 8 9 10
    //    set<int> v = 1 2 3 4 5 7 8 9 10
    //    set<int> v = 1 2 9 10
    //    set<int> v =
    //
    //    after delete all even numbers
    //    set<int> v = 1 3 5 7 9
    //
    //    after clear, size is 0
    //
    //    set<int> v3 = 6 7 8 9 10
    //
    //    set<int> v4 = 6 7 8 9 10
    //     a 24
    //     b 25
    //    set<int> s1 = 0 1 2 3
    //    set<int> m = 10 20 30 40 50 60
    //
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
    //    akash
    //     babar
    //     sadab
    //     wasim
    //
    //    before Swap
    //    set<int> v5 = 1 2
    //
    //    set<int> v6 = 3 4
    //
    //    After Swap
    //    set<int> v5 = 3 4
    //
    //    set<int> v6 = 1 2
}
