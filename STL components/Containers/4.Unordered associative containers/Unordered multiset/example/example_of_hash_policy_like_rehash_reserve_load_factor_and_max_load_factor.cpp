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
/*
    Hash policy:
    1.load_factor() - Returns the current load factor in the unordered_multiset container. The load factor is the ratio
    between the number of elements in the container (its size) and the number of buckets (bucket_count):
        load_factor = size / bucket_count

    2.max_load_factor() - Returns(Or sets) the current maximum load factor of the unordered set container. The load
    factor is the ratio between number of elements in the container and number of buckets(bucket_count). By default
    the maximum load factor of an unordered set container is set to 1.0 .

    3.rehash() - Set the number of buckets in the container of unordered_multiset to given size or more. rehash which is
    used to set the number of buckets in the container of unordered_multiset to given size or more. If size is greater than
    the current size of the container, then rehash is called. If it is lower than the current size, then the function
    has no effect on bucket count of hash.

    4.reserve() - Used to request capacity change of unordered_multiset. reserve which is used to request capacity change of
    unordered_multiset. It sets the number of buckets in the container to contain at least n elements. If n is greater than
    the current bucket_count multiplied by the max_load_factor, the container’s bucket_count is increased and a rehash
    is forced. If n is lower than the bucket_count, then the function has no effect on it.
*/
int main()
{
//rehash & reserve
    unordered_multiset<int> v;
    v.reserve(0);  // same as v.rehash(5);

    v.insert(10);
    v.insert(9);
    v.insert(6);
    v.insert(7);
    v.insert(8);
    v.insert(1);

    cout<<"unordered_multiset<int> v = ";
    for (auto i: v)
    {
        cout<<i<<" ";
    }

    cout<<"\nThe sampleSet container has "<<v.bucket_count()<<" number of buckets\n";


//load_factor and max_load_factor
    unordered_multiset<int> sample = {1,11,111,12,13};

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
    //    unordered_multiset<int> v = 1 9 10 6 7 8
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
