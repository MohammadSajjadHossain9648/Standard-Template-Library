#include<iostream>
#include<map>
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
    Modifiers:
    1.insert() - Insert element in the multimap.
    2.insert(iterator position, const g) - Adds a new element ‘g’ at the position pointed by the iterator.
    3.erase(const g) - Removes the value ‘g’ from the multimap.
    4.erase(iterator position) - Removes the element at the position pointed by the iterator.
    5.clear() - Removes all the elements from the multimap.
    6.emplace() - This function is used to insert a new element into the multimap container, only if the element
    to be inserted is unique and does not already exist in the multimap.
    7.emplace_hint() - Returns an iterator pointing to the position where the insertion is done. If the element
    passed in the parameter already exists, then it returns an iterator pointing to the position where the existing
    element is.
    8.swap() - This function is used to exchange the contents of two multimaps but the multimaps must be of the same type,
    although sizes may differ.
*/
int main()
{
    multimap <int, string> v = {{2,"sakib"},{1,"asif"},{3,"tamim"}};

//1.insert()
    v.insert(make_pair(5,"liton"));
    v.insert(make_pair(4,"afif"));

    /* same as above two lines
    v.insert(pair <int, string> ({5,"liton"}));
    v.insert(pair <int, string> ({4,"afif"}));
    */

    cout<<"\nmultimap<int, string> v\nid\tname\n";
    for(auto i: v)
    {
        cout<<i.first<<"\t"<<i.second<<endl;
    }
    cout<<endl;


//2.insert(iterator position, const g)
    /* can write same way the above code
    multimap<int, string> v;

    // Function to insert elements in the multimap container
    auto itr = v.insert(v.begin(), {2,"sakib"});

    // the time taken to insertion is very less as the correct position for insertion is given
    itr = v.insert(itr, {1,"asif"});
    itr = v.insert(itr, {3,"tamim"});
    itr = v.insert(itr, {5,"liton"});
    itr = v.insert(itr, {4,"afif"});

    cout<<"\nmultimap<int, string> v\nid\tname\n";
    for(auto i: v)
    {
        cout<<i.first<<"\t"<<i.second<<endl;
    }
    cout<<endl;
    */
    /*
    multimap<int, string> v;
    multimap<int, string> :: iterator itr = v.begin();


    // Function to insert elements in the multimap container
    itr = v.insert(v.begin(), {2,"sakib"});

    // the time taken to insertion is very less as the correct position for insertion is given
    itr = v.insert(itr, {1,"asif"});
    itr = v.insert(itr, {3,"tamim"});
    itr = v.insert(itr, {5,"liton"});
    itr = v.insert(itr, {4,"afif"});

    //or same as above 5 line
    v.insert(v.begin(), {2,"sakib"});
    v.insert(itr, {1,"asif"});
    v.insert(itr, {3,"tamim"});
    v.insert(itr, {5,"liton"});
    v.insert(itr, {4,"afif"});


    cout<<"\nmultimap<int, string> v\nid\tname\n";
    for(auto i: v)
    {
        cout<<i.first<<"\t"<<i.second<<endl;
    }
    cout<<endl;
    */

    //another example: copy after a number to end into another multimap
    multimap<int, string> v1;
    v1.insert(v.find(3), v.end()); //-> begin value is 3, if v.find(unknown id), v1 print null.

    cout<<"multimap<int, string> v1\nid\tname\n";
    for(auto i: v1)
    {
        cout<<i.first<<"\t"<<i.second<<endl;
    }
    cout<<endl;





//3.erase(const g) and erase(iterator position) -> always use iterator to erase anything
    //example 1: erase first element or last element using iterator
    v = {{2,"sakib"},{1,"asif"},{5,"liton"},{3,"tamim"},{4,"afif"}};

    v.erase(v.begin()); //delete first element
    //v.erase(v.end());   //delete last element

    cout<<"\nmultimap<int, string> v\nid\tname\n";
    for(auto i: v)
    {
        cout<<i.first<<"\t"<<i.second<<endl;
    }
    cout<<endl;


    //same as above: erase first element or last element using iterator
    v = {{2,"sakib"},{1,"asif"},{5,"liton"},{3,"tamim"},{4,"afif"}};

    multimap<int, string> :: iterator it;

    it = v.begin();  //delete first element
    //or, it = v.end();   //delete last element

    v.erase(it);

    cout<<"multimap<int, string> v\nid\tname\n";
    for(auto i: v)
    {
        cout<<i.first<<"\t"<<i.second<<endl;
    }
    cout<<endl;



    //example 2: delete whole value of a unique id
    v = {{2,"sakib"},{1,"asif"},{5,"liton"},{3,"tamim"},{4,"afif"}};
    v.erase(3);
    /* delete a value by find it first
        multimap<int, string> :: iterator it;
        it = v.find(3);
        v.erase(it);
    */
    cout<<"multimap<int, string> v\nid\tname\n";
    for(auto i: v)
    {
        cout<<i.first<<"\t"<<i.second<<endl;
    }
    cout<<endl;



    //example 3: erase all values except first n and last n value
    v = {{2,"sakib"},{1,"asif"},{5,"liton"},{3,"tamim"},{4,"afif"},{6,"sohan"}};
    multimap<int, string>:: iterator it3, it4;

    it3 = v.begin(); //it3 = 1 (indicates first id no 1)
    it4 = v.end(); //it4 = 6 (indicates last id no 6)

    //it3 increasing n times to point next index value, it4 decreasing n times to point before last index value
    //always it3 increase to start delete point of index number
    //always it4 decrease to end delete point of index number
    it3++;
    it3++;
    it4--;
    it4--;

    v.erase(it3,it4); // range is it3 = 3 no id value to it4 = 4 no id value

    cout<<"multimap<int, string> v\nid\tname\n";
    for(auto i: v)
    {
        cout<<i.first<<"\t"<<i.second<<endl;  // multimap<int, string> v = 1 2 9 10 , here print first 2 values and last 2 values
    }
    cout<<endl;



    //example 4: erase all values
    v = {{2,"sakib"},{1,"asif"},{5,"liton"},{3,"tamim"},{4,"afif"}};

    v.erase(v.begin(),v.end());

    cout<<"multimap<int, string> v\nid\tname\n";
    for(auto i:v)
    {
        cout<<i.first<<"\t"<<i.second<<endl;
    }
    cout<<endl;


    //example 5: delete all even numbers from multimap
    v = {{2,"sakib"},{1,"asif"},{5,"liton"},{3,"tamim"},{4,"afif"}};

    for(auto i=v.begin(); i!=v.end();)
    {
        if(i->first %2 == 0)
        {
            i = v.erase(i);
        }
        else
        {
            i++;
        }
    }

    cout<<"\nafter delete all even numbers \nmultimap<int, string> v\nid\tname\n";
    for(auto i:v)
    {
        cout<<i.first<<"\t"<<i.second<<endl;
    }
    cout<<endl;




//5.clear()
    multimap<int, string> s = {{2,"sakib"},{1,"asif"},{5,"liton"},{3,"tamim"},{4,"afif"}};
    s.clear();
    cout<<"\nafter clear, size is "<<s.size()<<endl;




//6.emplace()
    multimap<int, string> v3;
    v3.insert(make_pair(5,"liton"));
    v3.insert(make_pair(4,"afif"));
    v3.insert(make_pair(1,"asif"));
    v3.insert(make_pair(2,"sakib"));
    v3.insert(make_pair(3,"tamim"));


    cout<<"\nmultimap<int, string> v3\nid\tname\n";
    for(auto i: v3)
    {
        cout<<i.first<<"\t"<<i.second<<endl;
    }
    cout<<endl;

    //or can be write same as use emplace instead of insert
    multimap<int, string> v4;
    v4.emplace(make_pair(5,"liton"));
    v4.emplace(make_pair(4,"afif"));
    v4.emplace(make_pair(1,"asif"));
    v4.emplace(make_pair(2,"sakib"));
    v4.emplace(make_pair(3,"tamim"));

    cout<<"\nmultimap<int, string> v4\nid\tname\n";
    for(auto i: v4)
    {
        cout<<i.first<<"\t"<<i.second<<endl;
    }
    cout<<endl;


    //another example: emplace() vs insert
    multimap<char, int> ms;

    // using emplace() to insert pair in-place
    ms.emplace('a', 24);

    // Below line would not compile -> ms.insert('b', 25);

    // using emplace() to insert pair in-place
    ms.insert(make_pair('b', 25));

    for (auto it = ms.begin(); it != ms.end(); ++it)
        cout<<" "<<(*it).first<<"\t"<<(*it).second<<endl;




//7.emplace_hint(iterator position, value)
    multimap<int, string> s1;
    auto it6 = s1.emplace_hint(s1.begin(), 2, "sakib");

    // stores the position of 2's insertion
    it6 = s1.emplace_hint(it6, 3, "asif");

    // fast step as it directly starts the search step from position where 3 was last inserted
    s1.emplace_hint(it6, 4, "tamim");

    // this is a slower step as it starts checking from the position where 3 was inserted
    // but 0 is to be inserted before 1
    s1.emplace_hint(it6, 1, "liton");

    // prints the multimap elements
    cout<<"\nmultimap<int, string> s1\nid\tname\n";
    for (it6 = s1.begin(); it6 != s1.end(); it6++)
        cout<<it6->first<<"\t"<<it6->second<<endl;
    cout<<endl;


    //same as before example
    multimap<int, string> m = {{2,"sakib"},{1,"asif"},{5,"liton"}};

    m.emplace_hint(m.end(), 3,"tamim");
    m.emplace_hint(m.begin(), 4,"afif");

    cout<<"multimap<int, string> m\nid\tname\n";
    for (auto i: m)
        cout<<i.first<<"\t"<<i.second<<endl;
    cout<<endl;




//8.swap
    // two multimap to perform swap
    multimap<int, string> v5, v6;
    v5.insert(make_pair(1,"asif"));
    v5.insert(make_pair(2,"sakib"));
    v6.insert(make_pair(3,"tamim"));
    v6.insert(make_pair(4,"afif"));


    cout<<"\n\nbefore Swap";
    cout<<"\nmultimap<int, string> v5\nid\tname\n";
    for(auto i: v5)
    {
        cout<<i.first<<"\t"<<i.second<<endl;
    }
    cout<<endl;

    cout<<"\nmultimap<int, string> v6\nid\tname\n";
    for(auto i: v6)
    {
        cout<<i.first<<"\t"<<i.second<<endl;
    }
    cout<<endl;


    // Swaps v5 and v6
    v5.swap(v6);

    cout<<"\nAfter Swap";
    cout<<"\nmultimap<int, string> v5\nid\tname\n";
    for(auto i: v5)
    {
        cout<<i.first<<"\t"<<i.second<<endl;
    }
    cout<<endl;


    cout<<"\nmultimap<int, string> v6\nid\tname\n";
    for(auto i: v6)
    {
        cout<<i.first<<"\t"<<i.second<<endl;
    }
    cout<<endl;

    //output:
    //    multimap<int, string> v
    //    id      name
    //    1       asif
    //    2       sakib
    //    3       tamim
    //    4       afif
    //    5       liton
    //
    //    multimap<int, string> v1
    //    id      name
    //    3       tamim
    //    4       afif
    //    5       liton
    //
    //    multimap<int, string> v
    //    id      name
    //    2       sakib
    //    3       tamim
    //    4       afif
    //    5       liton
    //
    //    multimap<int, string> v
    //    id      name
    //    1       asif
    //    2       sakib
    //    4       afif
    //    5       liton
    //
    //    multimap<int, string> v
    //    id      name
    //    1       asif
    //    2       sakib
    //    5       liton
    //    6       sohan
    //
    //    multimap<int, string> v
    //    id      name
    //
    //
    //    after delete all even numbers
    //    multimap<int, string> v
    //    id      name
    //    1       asif
    //    3       tamim
    //    5       liton
    //
    //
    //    after clear, size is 0
    //
    //    multimap<int, string> v3
    //    id      name
    //    1       asif
    //    2       sakib
    //    3       tamim
    //    4       afif
    //    5       liton
    //
    //
    //    multimap<int, string> v4
    //    id      name
    //    1       asif
    //    2       sakib
    //    3       tamim
    //    4       afif
    //    5       liton
    //
    //     a      24
    //     b      25
    //
    //    multimap<int, string> s1
    //    id      name
    //    1       liton
    //    2       sakib
    //    3       asif
    //    4       tamim
    //
    //    multimap<int, string> m
    //    id      name
    //    1       asif
    //    2       sakib
    //    3       tamim
    //    4       afif
    //    5       liton
    //
    //
    //
    //    before Swap
    //    multimap<int, string> v5
    //    id      name
    //    1       asif
    //    2       sakib
    //
    //
    //    multimap<int, string> v6
    //    id      name
    //    3       tamim
    //    4       afif
    //
    //
    //    After Swap
    //    multimap<int, string> v5
    //    id      name
    //    3       tamim
    //    4       afif
    //
    //
    //    multimap<int, string> v6
    //    id      name
    //    1       asif
    //    2       sakib
}
