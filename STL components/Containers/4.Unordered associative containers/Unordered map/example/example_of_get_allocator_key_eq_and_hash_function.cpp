#include<iostream>
#include<unordered_map>
using namespace std;
/*
    to know more: https://www.geeksforgeeks.org/the-c-standard-template-library-stl/
                  https://www.studytonight.com/cpp/stl/
                  https://www.simplilearn.com/tutorials/cpp-tutorial/cpp-standard-template-library#:~:text=C%2B%2B%20STL%20(standard%20template%20library)%20is%20a%20software%20library%20for,%2C%20algorithms%2C%20and%20function%20objects.
                  https://www.mygreatlearning.com/blog/unordered_map-in-cpp/
                  https://www.javatpoint.com/cpp-unordered_map
                  https://www.scaler.com/topics/cpp/unordered_map-in-cpp/
                  https://www.simplilearn.com/tutorials/cpp-tutorial/cpp-standard-template-library#:~:text=C%2B%2B%20STL%20(standard%20template%20library)%20is%20a%20software%20library%20for,%2C%20algorithms%2C%20and%20function%20objects.
                  https://www.studytonight.com/cpp/stl/stl-container-unordered_map
                  https://www.geeksforgeeks.org/unordered_map-get_allocator-in-c-stl/
*/
int main()
{
//Example 1: The program below shows how allocator of a unordered_map can be used to allocate an array of 5 elements.
    unordered_map<int, int> s;
    pair<const int, int>* a;

    a = s.get_allocator().allocate(8);

    cout<<"Allocated size = "<<sizeof(*a) * 8<<endl;

    //another example:
    unordered_map<int, int> s1;

    //'allocator_type' is inherit in 'unordered_map' && 'u' is object of 'allocator_type'
    unordered_map<int, int>::allocator_type u = s1.get_allocator();

    // Comparing the Allocator with Pair<int, int>
    cout<<"Is allocator Pair<int, int> : "<<boolalpha<<(u == allocator<pair<int, int> >())<<endl;




//key_eq
    unordered_map<string, string> mymap;

    bool case_insensitive = mymap.key_eq()("checking","CHECKING"); //give 0(not same means false) or 1 (same means true)
    cout<<"checking and CHECKING: mymap.key_eq() is "<<( case_insensitive ? "case insensitive" : "case sensitive" )<<endl;

    //another example
    unordered_map<int, int> mymap1;

    bool case_insensitive2 = mymap1.key_eq()(10,10); //give 0(not same means false) or 1 (same means true)
    cout<<"10 and 10: mymap.key_eq() is "<<( case_insensitive2 ? "numbers are same" : "numbers are different" )<<endl;



//hash_function
    unordered_map<string, string> samplemap;

    // use of hash_function
    unordered_map<string, string>::hasher fn = samplemap.hash_function();

    cout<<"hash_function of programming is "<<fn("programming")<<endl;

    //output:
    //    Allocated size = 64
    //    Is allocator Pair<int, int> : true
    //    checking and CHECKING: mymap.key_eq() is case sensitive
    //    10 and 10: mymap.key_eq() is numbers are same
    //    hash_function of programming is 16216308845358443341
}
