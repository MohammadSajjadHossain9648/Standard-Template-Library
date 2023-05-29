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
/*
    Allocator:
    1.get_allocator() - C++ unordered_set get_allocator() function is used to return the copy of allocator object which
    helps to construct the unordered_set container.
    Time Complexity: O(1).
    2.key_eq() - returns a boolean value according to the comparison. It returns the key equivalence comparison
    predicate used by the unordered_set. The key equivalence comparison is a predicate that takes two arguments and
    returns a bool value indicating whether they are equal.
    3.hash_function() - hash_function() is a built-in function in C++ STL which is used to get hash function.
    This hash function is a unary function which takes asingle argument only and returns a unique value of type
    size_t based on it.
*/
int main()
{
//Example 1: The program below shows how allocator of a unordered_set can be used to allocate an array of 5 elements.
    unordered_set<int> s;
    int len=5;

    //allocate an array of 5 elements using s's allocator:
    int *arr;

    arr = s.get_allocator().allocate(len);

    //size of int is 4
    cout<<"size of unordered_set<int> s is "<< sizeof(*arr) * 5<<endl;

    //still unordered_set s is empty cause we just allocate the length of unordered_set
    cout<<"unordered_set<int> s = ";
    for(auto i: s)
    {
        cout<<i<<" ";
    }
    cout<<endl;


    //now assign len number of values in array arr
    cout<<"arr[] = ";
    for(int i=0; i<len; i++)
    {
        arr[i] = (i+1)*10;
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    //still unordered_set s is empty cause we just need to deallocate the array value in unordered_set
    cout<<"unordered_set<int> s = ";
    for(auto i: s)
    {
        cout<<i<<" ";
    }
    cout<<endl;

    // deallocate the memory allotted previously
    s.get_allocator().deallocate(arr, len);


//key_eq
    unordered_set<string> myset;

    bool case_insensitive = myset.key_eq()("checking","CHECKING"); //give 0(not same means false) or 1 (same means true)
    cout<<"checking and CHECKING: myset.key_eq() is "<<( case_insensitive ? "case insensitive" : "case sensitive" )<<endl;


//hash_function
    unordered_set<string> sampleSet;

    // use of hash_function
    unordered_set<string>::hasher fn = sampleSet.hash_function();

    cout<<"hash_function of programming is "<<fn("programming")<<endl;

    //output:
    //    size of unordered_set<int> s is 20
    //    unordered_set<int> s =
    //    arr[] = 10 20 30 40 50
    //    unordered_set<int> s =
    //    checking and CHECKING: myset.key_eq() is case sensitive
    //    hash_function of programming is 16216308845358443341
}
