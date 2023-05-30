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
    unordered_set<int> v = {5,10,15,20,25};

//bucket_count
    cout<<"The sampleSet container has "<<v.bucket_count()<<" number of buckets\n\n";

//bucket
    for (auto i: v)
    {
        cout<<"The Element "<<i<<" is present in the bucket: "<<v.bucket(i)<<endl;
    }

//max_bucket_count
    cout<<"max_size = "<<v.max_size()<<endl;
    cout<<"max_bucket_count = "<<v.max_bucket_count()<<endl;
    cout<<"max_load_factor = "<<v.max_load_factor()<<endl;

//bucket_size
    unsigned nbuckets = v.bucket_count();

    cout<<"sampleSet has "<<nbuckets<<" buckets:\n";

    for (unsigned i=0; i<nbuckets; ++i)
    {
        cout<<"bucket #"<<i<<" has "<<v.bucket_size(i)<<" elements.\n";
    }


//another example:
    unordered_set<string> myset = {"Mercury","Venus","Earth","Mars","Jupiter","Saturn","Uranus","Neptune"};

    unsigned n = myset.bucket_count();

    cout<<"myset has "<<n<<" buckets.\n";

    for (unsigned i=0; i<n; ++i)
    {
        cout<<"bucket #"<<i<<" contains:";
        for (auto it = myset.begin(i); it!=myset.end(i); ++it)
            cout<<" "<<*it;
        cout<<"\n";
    }




//another example:
    // Declaration
    unordered_set<string> s = {"Mercury","Venus","Earth","Mars","Jupiter","Saturn","Uranus","Neptune"};

    // prints the bucket number of the beginning element
    auto it = s.begin();

    // stores the bucket number of the key k
    int number = s.bucket(*it);
    cout<<"The bucket number of key "<<*it<<" is "<<number;

    //output:
    //    The sampleSet container has 13 number of buckets
    //
    //    The Element 25 is present in the bucket: 12
    //    The Element 20 is present in the bucket: 7
    //    The Element 15 is present in the bucket: 2
    //    The Element 10 is present in the bucket: 10
    //    The Element 5 is present in the bucket: 5
    //
    //    max_size = 576460752303423487
    //    max_bucket_count = 576460752303423487
    //    max_load_factor = 1
    //
    //    sampleSet has 13 buckets:
    //    bucket #0 has 0 elements.
    //    bucket #1 has 0 elements.
    //    bucket #2 has 1 elements.
    //    bucket #3 has 0 elements.
    //    bucket #4 has 0 elements.
    //    bucket #5 has 1 elements.
    //    bucket #6 has 0 elements.
    //    bucket #7 has 1 elements.
    //    bucket #8 has 0 elements.
    //    bucket #9 has 0 elements.
    //    bucket #10 has 1 elements.
    //    bucket #11 has 0 elements.
    //    bucket #12 has 1 elements.
    //
    //    myset has 13 buckets.
    //    bucket #0 contains:
    //    bucket #1 contains:
    //    bucket #2 contains: Neptune Earth
    //    bucket #3 contains:
    //    bucket #4 contains:
    //    bucket #5 contains:
    //    bucket #6 contains: Uranus
    //    bucket #7 contains: Saturn
    //    bucket #8 contains:
    //    bucket #9 contains: Mars
    //    bucket #10 contains: Venus
    //    bucket #11 contains: Jupiter
    //    bucket #12 contains: Mercury
    //    The bucket number of key Uranus is 6
}
