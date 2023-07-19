#include<iostream>
#include<map>
using namespace std;
/*
    to know more: https://www.geeksforgeeks.org/the-c-standard-template-library-stl/
                  https://www.studytonight.com/cpp/stl/
                  https://www.simplilearn.com/tutorials/cpp-tutorial/cpp-standard-template-library#:~:text=C%2B%2B%20STL%20(standard%20template%20library)%20is%20a%20software%20library%20for,%2C%20algorithms%2C%20and%20function%20objects.
                  https://www.mygreatlearning.com/blog/multimap-in-cpp/
                  https://www.javatpoint.com/post/cpp-multimap
                  https://www.scaler.com/topics/cpp/multimap-in-cpp/
                  https://cplusplus.com/reference/map/multimap/
*/
/*
    multimaps are associative containers that store elements in a multimapped fashion. Each element has a key value and a
    multimapped value. No two multimapped values can have the same key values.

    **Always remember: multimaps are the associative containers that store sorted key-value pair, in which each key
    is unique and it can be inserted or deleted but cannot be altered. Values associated with keys can be changed.
    and also, all functions same as set.


    Iterators:
    1.begin() – Returns an iterator pointing to the first element in the multimap
    2.end() – Returns an iterator pointing to the theoretical element that follows the last element in the multimap
    3.rbegin() – Returns a reverse iterator pointing to the last element in the multimap (reverse beginning).
    It moves from last to first element
    4.rend() – Returns a reverse iterator pointing to the theoretical element preceding the first element in
    the multimap (considered as reverse end)
    5.cbegin() – Returns a constant iterator pointing to the first element in the multimap.
    6.cend() – Returns a constant iterator pointing to the theoretical element that follows the last element
    in the multimap.
    7.crbegin() – Returns a constant reverse iterator pointing to the last element in the multimap (reverse beginning).
    It moves from last to first element
    8.crend() – Returns a constant reverse iterator pointing to the theoretical element preceding the first element
    in the multimap (considered as reverse end)



    Capacity:
    1.size() – Returns the number of elements in the multimap.
    2.max_size() – Returns the maximum number of elements that the multimap can hold.
    3.empty() – Returns whether the multimap is empty.
    4.find() - Returns an iterator to the element ‘g’ in the multimap if found, else returns the iterator to end.
    5.count() - Returns 1 or 0 based on whether the element ‘g’ is present in the multimap or not.
    6.lower_bound(const g) - Returns an iterator to the first element that is equivalent to ‘g’ or definitely
    will not go before the element ‘g’ in the multimap.
    7.upper_bound(const g) - Returns an iterator to the first element that will go after the element ‘g’ in the multimap.
    8.equal_range(const g) - The function returns an iterator of pairs. (key_comp). The pair refers to the range
    that includes all the elements in the container which have a key equivalent to k. which indiactes results of both
    the lower_bound and the upper_bound of g.


    Element access/Observers:
    (Returns the object that determines how the elements in the multimap are ordered (‘<‘ by default).)
    1.key_comp() - Return a copy of key comparison object.
    2.value_comp() - Return a copy of value comparison object.



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


    Allocator:
    1.get_allocator() - C++ multimap get_allocator() function is used to return the copy of allocator object which
    helps to construct the multimap container.

*/
/*
    Difference between multimap, multimap, and Unordered_multimap:
    multimap in C++ is an associative (STL) container that is used to store unique elements, and also they are stored
    in a specific sorted order(increasing or decreasing). Elements in the multimap are immutable, i.e., the elements can
    only be inserted or deleted but cannot be modified. multimaps are implemented as a Binary Search Tree.

    multimap<datatype> name_of_multimap;

    multimap is an associative container that stores elements in sorted order. It has properties similar to the multimap.
    The only difference is that multimap can store multiple similar valued elements(duplicates allowed).

    multimap<datatype> name_of_multimap;

    unordered_multimap is an associative container used to store unique elements. There is no order in which the elements
    are stored (unordered). Hash-table is used to store elements here. Rest all other properties are similar to the
    multimap.

    unordered_multimap<datatype> name_of_unorderedmultimap;
*/
int main()
{
    /*
    The time complexities for doing various operations on multimaps are:
        Insertion of Elements – O(log N)
        Deletion of Elements – O(log N)
        Searching of Elements – O(log N)
    */
}
