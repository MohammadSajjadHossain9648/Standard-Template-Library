#include<iostream>
#include<unordered_map>
using namespace std;
/*
    to know more: https://www.geeksforgeeks.org/the-c-standard-template-library-stl/
                  https://www.studytonight.com/cpp/stl/
                  https://www.simplilearn.com/tutorials/cpp-tutorial/cpp-standard-template-library#:~:text=C%2B%2B%20STL%20(standard%20template%20library)%20is%20a%20software%20library%20for,%2C%20algorithms%2C%20and%20function%20objects.
                  https://www.mygreatlearning.com/blog/unordered_multimap-in-cpp/
                  https://www.javatpoint.com/cpp-unordered_multimap
                  https://www.scaler.com/topics/cpp/unordered_multimap-in-cpp/
                  https://www.simplilearn.com/tutorials/cpp-tutorial/cpp-standard-template-library#:~:text=C%2B%2B%20STL%20(standard%20template%20library)%20is%20a%20software%20library%20for,%2C%20algorithms%2C%20and%20function%20objects.
                  https://www.studytonight.com/cpp/stl/stl-container-unordered_multimap
*/
/*
    Buckets:
    1.Buckets() - Returns the bucket number of a specific element.
    2.Buckets_size() - Returns the total number of elements present in a specific bucket in an unordered_multimap container.
    3.bucket_count() - Returns the total number of buckets present in an unordered_multimap container.
    4.max_bucket_count() - Find the maximum number of buckets that unordered_multimap can have.
*/
int main()
{
    unordered_multimap<int, string> v = {{2,"sakib"},{1,"asif"},{5,"liton"},{3,"tamim"},{4,"afif"}};

//bucket_count
    cout<<"The samplemap container has "<<v.bucket_count()<<" number of buckets\n\n";

//bucket
    for(auto i: v)
    {
        cout<<"The Element "<<i.first<<" is present in the bucket: "<<v.bucket(i.first)<<endl;
    }

//max_bucket_count
    cout<<"max_size = "<<v.max_size()<<endl;
    cout<<"max_bucket_count = "<<v.max_bucket_count()<<endl;
    cout<<"max_load_factor = "<<v.max_load_factor()<<endl;

//bucket_size
    unsigned nbuckets = v.bucket_count();

    cout<<"samplemap has "<<nbuckets<<" buckets:\n";

    for (unsigned i=0; i<nbuckets; ++i)
    {
        cout<<"bucket #"<<i<<" has "<<v.bucket_size(i)<<" elements.\n";
    }


//another example:
    unordered_multimap<int, string> mymap = {{2,"sakib"},{1,"asif"},{5,"liton"},{3,"tamim"},{4,"afif"}};

    unsigned n = mymap.bucket_count();

    cout<<"mymap has "<<n<<" buckets.\n";

    for (unsigned i=0; i<n; ++i)
    {
        cout<<"bucket #"<<i<<" contains:";
        for (auto it = mymap.begin(i); it!=mymap.end(i); ++it)
            cout<<it->first<<"\t"<<it->second<<endl;
        cout<<"\n";
    }




//another example:
    // Declaration
    unordered_multimap<string, string> m = { { "Australia", "Canberra" },{ "U.S.", "Washington" },{ "France", "Paris" } };

    // prints the bucket number of the beginning element
    auto it = m.begin();

    // stores the bucket number of the key k
    int number = m.bucket(it->first);
    cout<<"The bucket number of key "<<it->first<<" is "<<number;

    //output:
    //    The samplemap container has 5 number of buckets
    //
    //    The Element 4 is present in the bucket: 4
    //    The Element 3 is present in the bucket: 3
    //    The Element 5 is present in the bucket: 0
    //    The Element 1 is present in the bucket: 1
    //    The Element 2 is present in the bucket: 2
    //    max_size = 192153584101141162
    //    max_bucket_count = 192153584101141162
    //    max_load_factor = 1
    //    samplemap has 5 buckets:
    //    bucket #0 has 1 elements.
    //    bucket #1 has 1 elements.
    //    bucket #2 has 1 elements.
    //    bucket #3 has 1 elements.
    //    bucket #4 has 1 elements.
    //    mymap has 5 buckets.
    //    bucket #0 contains:5    liton
    //
    //    bucket #1 contains:1    asif
    //
    //    bucket #2 contains:2    sakib
    //
    //    bucket #3 contains:3    tamim
    //
    //    bucket #4 contains:4    afif
    //
    //    The bucket number of key France is 2
}
