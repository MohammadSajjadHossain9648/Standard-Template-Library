#include<iostream>
#include<unordered_set>
using namespace std;
/*
    to know more: https://www.geeksforgeeks.org/the-c-standard-template-library-stl/
                  https://www.studytonight.com/cpp/stl/
                  https://www.simplilearn.com/tutorials/cpp-tutorial/cpp-standard-template-library#:~:text=C%2B%2B%20STL%20(standard%20template%20library)%20is%20a%20software%20library%20for,%2C%20algorithms%2C%20and%20function%20objects.
                  https://www.mygreatlearning.com/blog/unordered_set-in-cpp/
                  https://www.javatpoint.com/cpp-unordered_set
                  https://www.scaler.com/topics/cpp/unordered_set-in-cpp/
                  https://www.simplilearn.com/tutorials/cpp-tutorial/cpp-standard-template-library#:~:text=C%2B%2B%20STL%20(standard%20template%20library)%20is%20a%20software%20library%20for,%2C%20algorithms%2C%20and%20function%20objects.
                  https://www.studytonight.com/cpp/stl/stl-container-unordered_set
*/
int main()
{
//rehash & reserve
    unordered_set<int> v;
    v.reserve(0);  // same as v.rehash(5);

    v.insert(10);
    v.insert(9);
    v.insert(6);
    v.insert(7);
    v.insert(8);
    v.insert(1);

    cout<<"unordered_set<int> v = ";
    for (auto i: v)
    {
        cout<<i<<" ";
    }

    cout<<"\nThe sampleSet container has "<<v.bucket_count()<<" number of buckets\n";


//load_factor and max_load_factor
    unordered_set<int> sample = {1,11,111,12,13};

    cout<<"\nThe size is: "<<sample.size();
    cout<<"\nThe bucket_count is: "<<sample.bucket_count();
    cout<<"\nThe load_factor is: "<<sample.load_factor();
    cout<<"\nThe max_load_factor is: "<<sample.max_load_factor();

    sample.insert(2);
    sample.insert(22);

    cout<<"\n\nThe size is: "<<sample.size();
    cout<<"\nThe bucket_count is: "<<sample.bucket_count();
    cout<<"\nThe load_factor is: "<<sample.load_factor();
    cout<<"\nThe max_load_factor is: "<<sample.max_load_factor();

    sample.insert(33);

    cout<<"\n\nThe size is: "<<sample.size();
    cout<<"\nThe bucket_count is: "<<sample.bucket_count();
    cout<<"\nThe load_factor is: "<<sample.load_factor();
    cout<<"\nThe max_load_factor is: "<<sample.max_load_factor();


    //output:
    //    unordered_set<int> v = 1 9 10 6 7 8
    //    The sampleSet container has 11 number of buckets
    //
    //    The size is: 5
    //    The bucket_count is: 13
    //    The load_factor is: 0.384615
    //    The max_load_factor is: 1
    //
    //    The size is: 7
    //    The bucket_count is: 13
    //    The load_factor is: 0.538462
    //    The max_load_factor is: 1
    //
    //    The size is: 8
    //    The bucket_count is: 13
    //    The load_factor is: 0.615385
    //    The max_load_factor is: 1
}
