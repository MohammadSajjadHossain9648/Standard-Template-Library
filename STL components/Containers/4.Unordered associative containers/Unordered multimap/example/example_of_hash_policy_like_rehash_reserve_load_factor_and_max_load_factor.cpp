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
int main()
{
//rehash & reserve
    unordered_multimap<int, string> v;
    v.reserve(0);  // same as v.rehash(5);

    v.insert(make_pair(5,"liton"));
    v.insert(make_pair(4,"afif"));
    v.insert(make_pair(1,"asif"));
    v.insert(make_pair(2,"sakib"));
    v.insert(make_pair(3,"tamim"));

    cout<<"\nmultimap<int, string> v\nid\tname\n";
    for(auto i: v)
    {
        cout<<i.first<<"\t"<<i.second<<endl;
    }
    cout<<endl;

    cout<<"\nThe samplemap container has "<<v.bucket_count()<<" number of buckets\n";


//load_factor and max_load_factor
    unordered_multimap<int, string> sample = {{2,"sakib"},{1,"asif"}};

    cout<<"\nThe size is: "<<sample.size();
    cout<<"\nThe bucket_count is: "<<sample.bucket_count();
    cout<<"\nThe load_factor is: "<<sample.load_factor();
    cout<<"\nThe max_load_factor is: "<<sample.max_load_factor();

    sample.insert(make_pair(3,"tamim"));
    sample.insert(make_pair(4,"afif"));

    cout<<"\n\nThe size is: "<<sample.size();
    cout<<"\nThe bucket_count is: "<<sample.bucket_count();
    cout<<"\nThe load_factor is: "<<sample.load_factor();
    cout<<"\nThe max_load_factor is: "<<sample.max_load_factor();

    sample.insert(make_pair(5,"liton"));

    cout<<"\n\nThe size is: "<<sample.size();
    cout<<"\nThe bucket_count is: "<<sample.bucket_count();
    cout<<"\nThe load_factor is: "<<sample.load_factor();
    cout<<"\nThe max_load_factor is: "<<sample.max_load_factor();


    //output:
    //
    //    multimap<int, string> v
    //    id      name
    //    3       tamim
    //    2       sakib
    //    1       asif
    //    5       liton
    //    4       afif
    //
    //
    //    The samplemap container has 5 number of buckets
    //
    //    The size is: 2
    //    The bucket_count is: 2
    //    The load_factor is: 1
    //    The max_load_factor is: 1
    //
    //    The size is: 4
    //    The bucket_count is: 5
    //    The load_factor is: 0.8
    //    The max_load_factor is: 1
    //
    //    The size is: 5
    //    The bucket_count is: 5
    //    The load_factor is: 1
    //    The max_load_factor is: 1
}
