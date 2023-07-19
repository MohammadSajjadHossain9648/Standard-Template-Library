#include<iostream>
#include<set>
using namespace std;
/*
    to know more: https://www.geeksforgeeks.org/the-c-standard-template-library-stl/
                  https://www.studytonight.com/cpp/stl/
                  https://www.simplilearn.com/tutorials/cpp-tutorial/cpp-standard-template-library#:~:text=C%2B%2B%20STL%20(standard%20template%20library)%20is%20a%20software%20library%20for,%2C%20algorithms%2C%20and%20function%20objects.
                  https://www.mygreatlearning.com/blog/multiset-in-cpp/
                  https://www.javatpoint.com/cpp-multiset
                  https://www.scaler.com/topics/cpp/multiset-in-cpp/
                  https://cplusplus.com/reference/set/multiset/
*/
/*
    **always remember: Multisets are a type of associative containers similar to the set, with the exception that
    multiple elements can have the same values.

    A Multiset in C++ is a container storing elements in a predefined order and allowing multiple elements to have
    the same value. The value of an element also identifies it in a multiset (the value is the key of type T).
    Multisets allow you to store elements in a specified sequence, with more than two items or many elements
    having comparable values. These values in the multiset identify the elements with their key value and pair
    value, and they cannot be changed once they have been placed into the multiset. However, one requirement
    can be met: more items can be inserted and retrieved at any time.

    Note and always remember:
    1.multiset stores elements in a sorted order like set.
    2.multiset<datatype, greater<datatype>> multisetname; is used for storing values in a multiset in descending order.
    3.Once the element is inserted in the multiset, they become constants and cannot be modified(the value
    can't be changed).



    Iterators:
    1.begin() – Returns an iterator pointing to the first element in the multiset
    2.end() – Returns an iterator pointing to the theoretical element that follows the last element in the multiset
    3.rbegin() – Returns a reverse iterator pointing to the last element in the multiset (reverse beginning).
    It moves from last to first element
    4.rend() – Returns a reverse iterator pointing to the theoretical element preceding the first element in
    the multiset (considered as reverse end)
    5.cbegin() – Returns a constant iterator pointing to the first element in the multiset.
    6.cend() – Returns a constant iterator pointing to the theoretical element that follows the last element
    in the multiset.
    7.crbegin() – Returns a constant reverse iterator pointing to the last element in the multiset (reverse beginning).
    It moves from last to first element
    8.crend() – Returns a constant reverse iterator pointing to the theoretical element preceding the first element
    in the multiset (considered as reverse end)



    Capacity:
    1.size() – Returns the number of elements in the multiset.
    2.max_size() – Returns the maximum number of elements that the multiset can hold.
    3.empty() – Returns whether the multiset is empty.
    4.find() - Returns an iterator to the element ‘g’ in the multiset if found, else returns the iterator to end.
    5.count() - Returns 1 or 0 based on whether the element ‘g’ is present in the multiset or not.
    6.lower_bound(const g) - Returns an iterator to the first element that is equivalent to ‘g’ or definitely
    will not go before the element ‘g’ in the multiset.
    7.upper_bound(const g) - Returns an iterator to the first element that will go after the element ‘g’ in the multiset.
    8.equal_range(const g) - The function returns an iterator of pairs. (key_comp). The pair refers to the range
    that includes all the elements in the container which have a key equivalent to k. which indiactes results of both
    the lower_bound and the upper_bound of g.


    Element access/Observers:
    (Returns the object that determines how the elements in the multiset are ordered (‘<‘ by default).)
    1.key_comp() - Return a copy of key comparison object.
    2.value_comp() - Return a copy of value comparison object.



    Modifiers:
    1.insert() - Insert element in the multiset.
    2.insert(iterator position, const g) - Adds a new element ‘g’ at the position pointed by the iterator.
    3.erase(const g) - Removes the value ‘g’ from the multiset.
    4.erase(iterator position) - Removes the element at the position pointed by the iterator.
    5.clear() - Removes all the elements from the multiset.
    6.emplace() - This function is used to insert a new element into the multiset container, only if the element
    to be inserted is unique and does not already exist in the multiset.
    7.emplace_hint() - Returns an iterator pointing to the position where the insertion is done. If the element
    passed in the parameter already exists, then it returns an iterator pointing to the position where the existing
    element is.
    8.swap() - This function is used to exchange the contents of two multisets but the multisets must be of the same type,
    although sizes may differ.



    Allocator:
    1.get_allocator() - C++ multiset get_allocator() function is used to return the copy of allocator object which
    helps to construct the multiset container.

*/

/*
    Difference between multiset, multiset, and Unordered_multiset:
    multiset in C++ is an associative (STL) container that is used to store unique elements, and also they are stored
    in a specific sorted order(increasing or decreasing). Elements in the multiset are immutable, i.e., the elements can
    only be inserted or deleted but cannot be modified. multisets are implemented as a Binary Search Tree.

    multiset<datatype> name_of_multiset;

    multiset is an associative container that stores elements in sorted order. It has properties similar to the multiset.
    The only difference is that multiset can store multiple similar valued elements(duplicates allowed).

    multiset<datatype> name_of_multiset;

    unordered_multiset is an associative container used to store unique elements. There is no order in which the elements
    are stored (unordered). Hash-table is used to store elements here. Rest all other properties are similar to the
    multiset.

    unordered_multiset<datatype> name_of_unorderedmultiset;
*/
int main()
{
    /*
    The time complexities for doing various operations on multisets are:
        Insertion of Elements – O(log N)
        Deletion of Elements – O(log N)
        Searching of Elements – O(log N)
    */
}
