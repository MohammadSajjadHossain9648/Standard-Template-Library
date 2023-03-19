#include<iostream>
#include<set>
using namespace std;
/*
    to know more: https://www.geeksforgeeks.org/the-c-standard-template-library-stl/
                  https://www.studytonight.com/cpp/stl/
                  https://www.simplilearn.com/tutorials/cpp-tutorial/cpp-standard-template-library#:~:text=C%2B%2B%20STL%20(standard%20template%20library)%20is%20a%20software%20library%20for,%2C%20algorithms%2C%20and%20function%20objects.
                  https://www.mygreatlearning.com/blog/set-in-cpp/
                  https://www.javatpoint.com/cpp-set
                  https://www.scaler.com/topics/cpp/set-in-cpp/
                  https://cplusplus.com/reference/set/set/
*/
/*
    Sets are a type of associative container in which each element has to be unique because the value of the
    element identifies it. The values are stored in a specific sorted order i.e. either ascending or descending.

    A set in c++ is an associative(STL) container used to store unique elements that are stored in a specific sorted
    order(increasing or decreasing).

    Elements of the set are unique, i.e., no duplicate values can be stored in the set because each value in the
    set is a key, and the set doesn't support indexing. So, the elements/values(keys) are the indexes themselves,
    and there cannot be more than one index. Also, the values in the set need to be accessed using the keys/values only.

    The Set also has elements stored in sorted order. We can specify whether the elements will be sorted in
    ascending or descending order by changing the syntax during the set declaration.

    The element in the set can be inserted, removed, and searched in logarithmic time complexity. Once the element
    is inserted in the set, they become constants and cannot be modified(the value can't be changed). Internally
    the set STL in C++ is implemented by the binary search tree(Red-Black Tree).



    Iterators:
    1.begin() – Returns an iterator pointing to the first element in the set
    2.end() – Returns an iterator pointing to the theoretical element that follows the last element in the set
    3.rbegin() – Returns a reverse iterator pointing to the last element in the set (reverse beginning).
    It moves from last to first element
    4.rend() – Returns a reverse iterator pointing to the theoretical element preceding the first element in
    the set (considered as reverse end)
    5.cbegin() – Returns a constant iterator pointing to the first element in the set.
    6.cend() – Returns a constant iterator pointing to the theoretical element that follows the last element
    in the set.
    7.crbegin() – Returns a constant reverse iterator pointing to the last element in the set (reverse beginning).
    It moves from last to first element
    8.crend() – Returns a constant reverse iterator pointing to the theoretical element preceding the first element
    in the set (considered as reverse end)



    Capacity:
    1.size() – Returns the number of elements in the set.
    2.max_size() – Returns the maximum number of elements that the set can hold.
    3.empty() – Returns whether the set is empty.
    4.find() - Returns an iterator to the element ‘g’ in the set if found, else returns the iterator to end.
    5.count() - Returns 1 or 0 based on whether the element ‘g’ is present in the set or not.
    6.lower_bound(const g) - Returns an iterator to the first element that is equivalent to ‘g’ or definitely
    will not go before the element ‘g’ in the set.
    7.upper_bound(const g) - Returns an iterator to the first element that will go after the element ‘g’ in the set.
    8.equal_range(const g) - The function returns an iterator of pairs. (key_comp). The pair refers to the range
    that includes all the elements in the container which have a key equivalent to k. which indiactes results of both
    the lower_bound and the upper_bound of g.


    Element access/Observers:
    (Returns the object that determines how the elements in the set are ordered (‘<‘ by default).)
    1.key_comp() - Return a copy of key comparison object.
    2.value_comp() - Return a copy of value comparison object.



    Modifiers:
    1.insert() - Insert element in the set.
    2.insert(iterator position, const g) - Adds a new element ‘g’ at the position pointed by the iterator.
    3.erase(const g) - Removes the value ‘g’ from the set.
    4.erase(iterator position) - Removes the element at the position pointed by the iterator.
    5.clear() - Removes all the elements from the set.
    6.emplace() - This function is used to insert a new element into the set container, only if the element
    to be inserted is unique and does not already exist in the set.
    7.emplace_hint() - Returns an iterator pointing to the position where the insertion is done. If the element
    passed in the parameter already exists, then it returns an iterator pointing to the position where the existing
    element is.
    8.swap() - This function is used to exchange the contents of two sets but the sets must be of the same type,
    although sizes may differ.



    Allocator:
    1.get_allocator() - C++ set get_allocator() function is used to return the copy of allocator object which
    helps to construct the set container.

*/
/*
    Difference between Set, Multiset, and Unordered_set:
    Set in C++ is an associative (STL) container that is used to store unique elements, and also they are stored
    in a specific sorted order(increasing or decreasing). Elements in the set are immutable, i.e., the elements can
    only be inserted or deleted but cannot be modified. Sets are implemented as a Binary Search Tree.

    set<datatype> name_of_set;

    Multiset is an associative container that stores elements in sorted order. It has properties similar to the set.
    The only difference is that Multiset can store multiple similar valued elements(duplicates allowed).

    multiset<datatype> name_of_multiset;

    unordered_set is an associative container used to store unique elements. There is no order in which the elements
    are stored (unordered). Hash-table is used to store elements here. Rest all other properties are similar to the
    set.

    unordered_set<datatype> name_of_unorderedset;
*/
int main()
{

}
