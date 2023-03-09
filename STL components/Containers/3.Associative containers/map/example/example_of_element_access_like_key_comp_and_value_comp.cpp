#include<iostream>
#include<map>
#include<iterator>
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
    Element access/Observers:
    (Returns the object that determines how the elements in the map are ordered (‘<‘ by default).)
    1.key_comp() - Return a copy of key comparison object.
    2.value_comp() - Return a copy of value comparison object.

    **always remember that key_comp and value_comp both are same in use.
*/
int main()
{
// example: check that is map in sorted order? by using value_comp
    map <int, string> v = {{2,"sakib"},{1,"asif"},{5,"liton"},{3,"tamim"},{4,"afif"}};
    map <int, string> :: value_compare compare = v.value_comp();

    auto high = *v.rbegin(); //take last/highest id which is highest value

    cout<<"\nmap<int, string> v\nid\tname\n";
    for(auto i: v)
    {
        if(compare(i, high))
            cout<<i.first<<"\t"<<i.second<<endl;
    }
    cout<<endl;

    /* can write like this line 29 & 36 by changing star
    auto high = v.rbegin(); //take last/highest id which is highest value

    if(compare(i, *high))
    */

    /* same as before
        map <int, string> v = {{2,"sakib"},{1,"asif"},{5,"liton"},{3,"tamim"},{4,"afif"}};

        auto high = *v.rbegin(); //take last/highest id which is highest value

        cout<<"\nmap<int, string> v\nid\tname\n";
        for(auto i: v)
        {
            if(v.value_comp()(i, high))
                cout<<i.first<<"\t"<<i.second<<endl;
        }
        cout<<endl;
    */


    /*same as before
        //method 2:
        map <int, string> v = {{2,"sakib"},{1,"asif"},{5,"liton"},{3,"tamim"},{4,"afif"}};

        auto high = *v.rbegin(); //take last/highest id which is highest value
        map <int, string> :: iterator i;

        cout<<"\nmap<int, string> v\nid\tname\n";
        for(i= v.begin(); i!= v.end(); i++)
        {
            if(v.value_comp()(*i, high))
                cout<<i->first<<"\t"<<i->second<<endl;
        }
        cout<<endl;



        //method 3:
        map <int, string> v = {{2,"sakib"},{1,"asif"},{5,"liton"},{3,"tamim"},{4,"afif"}};

        auto high = *v.rbegin(); //take last/highest id which is highest value
        map <int, string> :: iterator i = v.begin();

        cout<<"\nmap<int, string> v\nid\tname\n";
        do
        {
            cout<<i->first<<"\t"<<i->second<<endl;
        }while(v.value_comp()(*i++, high));
        cout<<endl;


        //using map <int, string> :: value_compare

        //method 4: same as method 2
        map <int, string> v = {{2,"sakib"},{1,"asif"},{5,"liton"},{3,"tamim"},{4,"afif"}};
        map <int, string> :: value_compare compare = v.value_comp();

        auto high = *v.rbegin(); //take last/highest id which is highest value
        map <int, string> :: iterator i;

        cout<<"\nmap<int, string> v\nid\tname\n";
        for(i= v.begin(); i!= v.end(); i++)
        {
            if(compare(*i, high))
                cout<<i->first<<"\t"<<i->second<<endl;
        }
        cout<<endl;


        //method 5: same as method 3
        map <int, string> v = {{2,"sakib"},{1,"asif"},{5,"liton"},{3,"tamim"},{4,"afif"}};
        map <int, string> :: value_compare compare = v.value_comp();

        auto high = *v.rbegin(); //take last/highest id which is highest value
        map <int, string> :: iterator i = v.begin();

        cout<<"\nmap<int, string> v\nid\tname\n";
        do
        {
            cout<<i->first<<"\t"<<i->second<<endl;
        }
        while(compare(*i++, high));
        cout<<endl;

    */





// example: check that is map in sorted order? by using key_comp. note: always indicate key thing.
    map <int, string> v1 = {{2,"sakib"},{1,"asif"},{5,"liton"},{3,"tamim"},{4,"afif"}};
    map <int, string> :: key_compare compare2 = v1.key_comp();

    auto high2 = v1.rbegin()->first; //take last/highest id which is highest key and indicates id as key

    cout<<"\nmap<int, string> v\nid\tname\n";
    for(auto i: v1)
    {
        if(compare2(i.first, high2))
            cout<<i.first<<"\t"<<i.second<<endl;
    }
    cout<<endl;

    /* same as before
        map <int, string> v1 = {{2,"sakib"},{1,"asif"},{5,"liton"},{3,"tamim"},{4,"afif"}};

        auto high2 = v1.rbegin()->first; //take last/highest id which is highest key and indicates id as key

        cout<<"\nmap<int, string> v\nid\tname\n";
        for(auto i: v1)
        {
            if(v1.key_comp()(i.first, high2))
                cout<<i.first<<"\t"<<i.second<<endl;
        }
        cout<<endl;
    */


    /*same as before
        //method 2:
        map <int, string> v1 = {{2,"sakib"},{1,"asif"},{5,"liton"},{3,"tamim"},{4,"afif"}};

        auto high2 = v1.rbegin()->first; //take last/highest id which is highest key and indicates id as key
        map <int, string> :: iterator i;

        cout<<"\nmap<int, string> v\nid\tname\n";
        for(i= v1.begin(); i!= v1.end(); i++)
        {
            if(v1.key_comp()(i->first, high2))
                cout<<i->first<<"\t"<<i->second<<endl;
        }
        cout<<endl;



        //method 3:
        map <int, string> v1 = {{2,"sakib"},{1,"asif"},{5,"liton"},{3,"tamim"},{4,"afif"}};

        auto high2 = v1.rbegin()->first; //take last/highest id which is highest key and indicates id as key
        map <int, string> :: iterator i = v1.begin();

        cout<<"\nmap<int, string> v\nid\tname\n";
        do
        {
            cout<<i->first<<"\t"<<i->second<<endl;
        }while(v1.key_comp()(i++->first, high2));
        cout<<endl;


        //using map <int, string> :: value_compare

        //method 4: same as method 2
        map <int, string> v1 = {{2,"sakib"},{1,"asif"},{5,"liton"},{3,"tamim"},{4,"afif"}};
        map <int, string> :: key_compare compare2 = v1.key_comp();

        auto high = v1.rbegin()->first; //take last/highest id which is highest key and indicates id as key
        map <int, string> :: iterator i;

        cout<<"\nmap<int, string> v1\nid\tname\n";
        for(i= v1.begin(); i!= v1.end(); i++)
        {
            if(compare2(i->first, high))
                cout<<i->first<<"\t"<<i->second<<endl;
        }
        cout<<endl;


        //method 5: same as method 3
        map <int, string> v1 = {{2,"sakib"},{1,"asif"},{5,"liton"},{3,"tamim"},{4,"afif"}};
        map <int, string> :: key_compare compare2 = v1.key_comp();

        auto high = v1.rbegin()->first; //take last/highest id which is highest key
        map <int, string> :: iterator i = v1.begin();

        cout<<"\nmap<int, string> v1\nid\tname\n";
        do
        {
            cout<<i->first<<"\t"<<i->second<<endl;
        }
        while(compare2(i++->first, high));
        cout<<endl;

    */

    return 0;

    //output:
    //    map<int, string> v
    //    id      name
    //    1       asif
    //    2       sakib
    //    3       tamim
    //    4       afif
    //
    //
    //    map<int, string> v
    //    id      name
    //    1       asif
    //    2       sakib
    //    3       tamim
    //    4       afif
}
