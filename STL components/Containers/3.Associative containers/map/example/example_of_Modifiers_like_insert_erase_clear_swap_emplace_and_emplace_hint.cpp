#include<iostream>
#include<map>
using namespace std;
/*
    to know more: https://www.geeksforgeeks.org/the-c-standard-template-library-stl/
                  https://www.studytonight.com/cpp/stl/
                  https://www.simplilearn.com/tutorials/cpp-tutorial/cpp-standard-template-library#:~:text=C%2B%2B%20STL%20(standard%20template%20library)%20is%20a%20software%20library%20for,%2C%20algorithms%2C%20and%20function%20objects.
                  https://www.mygreatlearning.com/blog/map-in-cpp/
                  https://www.javatpoint.com/cpp-map
                  https://www.scaler.com/topics/cpp/map-in-cpp/
                  https://www.simplilearn.com/tutorials/cpp-tutorial/cpp-standard-template-library#:~:text=C%2B%2B%20STL%20(standard%20template%20library)%20is%20a%20software%20library%20for,%2C%20algorithms%2C%20and%20function%20objects.
                  https://www.studytonight.com/cpp/stl/stl-container-map
*/
/*
    Modifiers:
    1.insert() - Insert element in the map.
    2.insert(iterator position, const g) - Adds a new element ‘g’ at the position pointed by the iterator.
    3.insert_or_assign() - it works exactly as insert() except that if the given key is already present in the
    map then its value is modified.
    4. at() - return the reference to the element associated with the key k.
    5.erase(const g) - Removes the value ‘g’ from the map.
    6.erase(iterator position) - Removes the element at the position pointed by the iterator.
    7.clear() - Removes all the elements from the map.
    8.emplace() - This function is used to insert a new element into the map container, only if the element
    to be inserted is unique and does not already exist in the map.
    9.emplace_hint() - Returns an iterator pointing to the position where the insertion is done. If the element
    passed in the parameter already exists, then it returns an iterator pointing to the position where the existing
    element is.
    10.swap() - This function is used to exchange the contents of two maps but the maps must be of the same type,
    although sizes may differ.
*/
int main()
{
    map <int, string> v = {{2,"sakib"},{1,"asif"},{3,"tamim"}};

//1.insert()
    v.insert(make_pair(5,"liton"));
    v.insert(make_pair(4,"afif"));

    /* same as above two lines
    v.insert(pair <int, string> ({5,"liton"}));
    v.insert(pair <int, string> ({4,"afif"}));
    */

    cout<<"\nmap<int, string> v\nid\tname\n";
    for(auto i: v)
    {
        cout<<i.first<<"\t"<<i.second<<endl;
    }
    cout<<endl;


//2.insert(iterator position, const g)
    /* can write same way the above code
    map<int, string> v;

    // Function to insert elements in the map container
    auto itr = v.insert(v.begin(), {2,"sakib"});

    // the time taken to insertion is very less as the correct position for insertion is given
    itr = v.insert(itr, {1,"asif"});
    itr = v.insert(itr, {3,"tamim"});
    itr = v.insert(itr, {5,"liton"});
    itr = v.insert(itr, {4,"afif"});

    cout<<"\nmap<int, string> v\nid\tname\n";
    for(auto i: v)
    {
        cout<<i.first<<"\t"<<i.second<<endl;
    }
    cout<<endl;
    */
    /*
    map<int, string> v;
    map<int, string> :: iterator itr = v.begin();


    // Function to insert elements in the map container
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


    cout<<"\nmap<int, string> v\nid\tname\n";
    for(auto i: v)
    {
        cout<<i.first<<"\t"<<i.second<<endl;
    }
    cout<<endl;
    */

    //another example: copy after a number to end into another map
    map<int, string> v1;
    v1.insert(v.find(3), v.end()); //-> begin value is 3, if v.find(unknown id), v1 print null.

    cout<<"map<int, string> v1\nid\tname\n";
    for(auto i: v1)
    {
        cout<<i.first<<"\t"<<i.second<<endl;
    }
    cout<<endl;




//3.insert_or_assing -> change the value in a unique id
    v = {{2,"sakib"},{1,"asif"},{5,"liton"},{3,"tamim"},{4,"afif"}};

    cout<<"map<int, string> v\nid\tname\n";
    for(auto i: v)
    {
        cout<<i.first<<"\t"<<i.second<<endl;
    }
    cout<<endl;

    //now change id 4 name
    v.insert_or_assign(4,"sajjad");
    cout<<"\nafter changing name of id 4\nmap<int, string> v\nid\tname\n";
    for(auto i: v)
    {
        cout<<i.first<<"\t"<<i.second<<endl;
    }
    cout<<endl;



//4.at
    //can print individually using operator []
    cout<<"v[id] = name -> v[1] = "<<v[1]<<endl;
    cout<<"v[id] = name -> v[3] = "<<v[3]<<endl;

    //can print individually using at which is same as above
    cout<<"v[id] = name -> v[2] = "<<v.at(2)<<endl;
    cout<<"v[id] = name -> v[4] = "<<v.at(4)<<endl;



//5.erase(const g) and erase(iterator position) -> always use iterator to erase anything
    //example 1: erase first element or last element using iterator
    v = {{2,"sakib"},{1,"asif"},{5,"liton"},{3,"tamim"},{4,"afif"}};

    v.erase(v.begin()); //delete first element
    //v.erase(v.end());   //delete last element

    cout<<"\nmap<int, string> v\nid\tname\n";
    for(auto i: v)
    {
        cout<<i.first<<"\t"<<i.second<<endl;
    }
    cout<<endl;


    //same as above: erase first element or last element using iterator
    v = {{2,"sakib"},{1,"asif"},{5,"liton"},{3,"tamim"},{4,"afif"}};

    map<int, string> :: iterator it;

    it = v.begin();  //delete first element
    //or, it = v.end();   //delete last element

    v.erase(it);

    cout<<"map<int, string> v\nid\tname\n";
    for(auto i: v)
    {
        cout<<i.first<<"\t"<<i.second<<endl;
    }
    cout<<endl;



    //example 2: delete whole value of a unique id
    v = {{2,"sakib"},{1,"asif"},{5,"liton"},{3,"tamim"},{4,"afif"}};
    v.erase(3);
    /* delete a value by find it first
        map<int, string> :: iterator it;
        it = v.find(3);
        v.erase(it);
    */
    cout<<"map<int, string> v\nid\tname\n";
    for(auto i: v)
    {
        cout<<i.first<<"\t"<<i.second<<endl;
    }
    cout<<endl;



    //example 3: erase all values except first n and last n value
    v = {{2,"sakib"},{1,"asif"},{5,"liton"},{3,"tamim"},{4,"afif"},{6,"sohan"}};
    map<int, string>:: iterator it3, it4;

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

    cout<<"map<int, string> v\nid\tname\n";
    for(auto i: v)
    {
        cout<<i.first<<"\t"<<i.second<<endl;  // map<int, string> v = 1 2 9 10 , here print first 2 values and last 2 values
    }
    cout<<endl;



    //example 4: erase all values
    v = {{2,"sakib"},{1,"asif"},{5,"liton"},{3,"tamim"},{4,"afif"}};

    v.erase(v.begin(),v.end());

    cout<<"map<int, string> v\nid\tname\n";
    for(auto i:v)
    {
        cout<<i.first<<"\t"<<i.second<<endl;
    }
    cout<<endl;


    //example 5: delete all even numbers from map
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

    cout<<"\nafter delete all even numbers \nmap<int, string> v\nid\tname\n";
    for(auto i:v)
    {
        cout<<i.first<<"\t"<<i.second<<endl;
    }
    cout<<endl;




//7.clear()
    map<int, string> s = {{2,"sakib"},{1,"asif"},{5,"liton"},{3,"tamim"},{4,"afif"}};
    s.clear();
    cout<<"\nafter clear, size is "<<s.size()<<endl;




//8.emplace()
    map<int, string> v3;
    v3.insert(make_pair(5,"liton"));
    v3.insert(make_pair(4,"afif"));
    v3.insert(make_pair(1,"asif"));
    v3.insert(make_pair(2,"sakib"));
    v3.insert(make_pair(3,"tamim"));


    cout<<"\nmap<int, string> v3\nid\tname\n";
    for(auto i: v3)
    {
        cout<<i.first<<"\t"<<i.second<<endl;
    }
    cout<<endl;

    //or can be write same as use emplace instead of insert
    map<int, string> v4;
    v4.emplace(make_pair(5,"liton"));
    v4.emplace(make_pair(4,"afif"));
    v4.emplace(make_pair(1,"asif"));
    v4.emplace(make_pair(2,"sakib"));
    v4.emplace(make_pair(3,"tamim"));

    cout<<"\nmap<int, string> v4\nid\tname\n";
    for(auto i: v4)
    {
        cout<<i.first<<"\t"<<i.second<<endl;
    }
    cout<<endl;


    //another example: emplace() vs insert
    map<char, int> ms;

    // using emplace() to insert pair in-place
    ms.emplace('a', 24);

    // Below line would not compile -> ms.insert('b', 25);

    // using emplace() to insert pair in-place
    ms.insert(make_pair('b', 25));

    for (auto it = ms.begin(); it != ms.end(); ++it)
        cout<<" "<<(*it).first<<"\t"<<(*it).second<<endl;




//9.emplace_hint(iterator position, value)
    map<int, string> s1;
    auto it6 = s1.emplace_hint(s1.begin(), 2, "sakib");

    // stores the position of 2's insertion
    it6 = s1.emplace_hint(it6, 3, "asif");

    // fast step as it directly starts the search step from position where 3 was last inserted
    s1.emplace_hint(it6, 4, "tamim");

    // this is a slower step as it starts checking from the position where 3 was inserted
    // but 0 is to be inserted before 1
    s1.emplace_hint(it6, 1, "liton");

    // prints the map elements
    cout<<"\nmap<int, string> s1\nid\tname\n";
    for (it6 = s1.begin(); it6 != s1.end(); it6++)
        cout<<it6->first<<"\t"<<it6->second<<endl;
    cout<<endl;


    //same as before example
    map<int, string> m = {{2,"sakib"},{1,"asif"},{5,"liton"}};

    m.emplace_hint(m.end(), 3,"tamim");
    m.emplace_hint(m.begin(), 4,"afif");

    cout<<"map<int, string> m\nid\tname\n";
    for (auto i: m)
        cout<<i.first<<"\t"<<i.second<<endl;
    cout<<endl;




//10.swap
    // two map to perform swap
    map<int, string> v5, v6;
    v5.insert(make_pair(1,"asif"));
    v5.insert(make_pair(2,"sakib"));
    v6.insert(make_pair(3,"tamim"));
    v6.insert(make_pair(4,"afif"));


    cout<<"\n\nbefore Swap";
    cout<<"\nmap<int, string> v5\nid\tname\n";
    for(auto i: v5)
    {
        cout<<i.first<<"\t"<<i.second<<endl;
    }
    cout<<endl;

    cout<<"\nmap<int, string> v6\nid\tname\n";
    for(auto i: v6)
    {
        cout<<i.first<<"\t"<<i.second<<endl;
    }
    cout<<endl;


    // Swaps v5 and v6
    v5.swap(v6);

    cout<<"\nAfter Swap";
    cout<<"\nmap<int, string> v5\nid\tname\n";
    for(auto i: v5)
    {
        cout<<i.first<<"\t"<<i.second<<endl;
    }
    cout<<endl;


    cout<<"\nmap<int, string> v6\nid\tname\n";
    for(auto i: v6)
    {
        cout<<i.first<<"\t"<<i.second<<endl;
    }
    cout<<endl;

    //output:
    //    map<int, string> v
    //    id      name
    //    1       asif
    //    2       sakib
    //    3       tamim
    //    4       afif
    //    5       liton
    //
    //    map<int, string> v1
    //    id      name
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
    //    4       afif
    //    5       liton
    //
    //
    //    after changing name of id 4
    //    map<int, string> v
    //    id      name
    //    1       asif
    //    2       sakib
    //    3       tamim
    //    4       sajjad
    //    5       liton
    //
    //
    //    v[id] = name -> v[1] = asif
    //    v[id] = name -> v[3] = tamim
    //    v[id] = name -> v[2] = sakib
    //    v[id] = name -> v[4] = afif
    //    map<int, string> v
    //    id      name
    //    2       sakib
    //    3       tamim
    //    4       afif
    //    5       liton
    //
    //    map<int, string> v
    //    id      name
    //    1       asif
    //    2       sakib
    //    4       afif
    //    5       liton
    //
    //    map<int, string> v
    //    id      name
    //    1       asif
    //    2       sakib
    //    5       liton
    //    6       sohan
    //
    //    map<int, string> v
    //    id      name
    //
    //
    //    after delete all even numbers
    //    map<int, string> v
    //    id      name
    //    1       asif
    //    3       tamim
    //    5       liton
    //
    //
    //    after clear, size is 0
    //
    //    map<int, string> v3
    //    id      name
    //    1       asif
    //    2       sakib
    //    3       tamim
    //    4       afif
    //    5       liton
    //
    //
    //    map<int, string> v4
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
    //    map<int, string> s1
    //    id      name
    //    1       liton
    //    2       sakib
    //    3       asif
    //    4       tamim
    //
    //    map<int, string> m
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
    //    map<int, string> v5
    //    id      name
    //    1       asif
    //    2       sakib
    //
    //
    //    map<int, string> v6
    //    id      name
    //    3       tamim
    //    4       afif
    //
    //
    //    After Swap
    //    map<int, string> v5
    //    id      name
    //    3       tamim
    //    4       afif
    //
    //
    //    map<int, string> v6
    //    id      name
    //    1       asif
    //    2       sakib
}
