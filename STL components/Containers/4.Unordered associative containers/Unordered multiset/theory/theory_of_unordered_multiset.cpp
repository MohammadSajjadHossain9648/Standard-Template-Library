#include<iostream>
#include<unordered_set>
using namespace std;
/*
    to know more: https://www.geeksforgeeks.org/the-c-standard-template-library-stl/
                  https://www.studytonight.com/cpp/stl/
                  https://www.simplilearn.com/tutorials/cpp-tutorial/cpp-standard-template-library#:~:text=C%2B%2B%20STL%20(standard%20template%20library)%20is%20a%20software%20library%20for,%2C%20algorithms%2C%20and%20function%20objects.
                  https://cplusplus.com/reference/unordered_multiset/unordered_multiset/
                  https://www.programiz.com/cpp-programming/unordered-set
*/
/*
    An Unordered Set also stores only the single copy of the elements by removing the duplicates but does not sort
    the elements automatically as in Set.
    An Unordered Set internally uses a Hash Table and hence the ordering is random depending upon the internally
    used Hash function.


    Iterators:
    1.begin() � Returns an iterator pointing to the first element in the unordered_multiset
    2.end() � Returns an iterator pointing to the theoretical element that follows the last element in the unordered_multiset
    3.cbegin() � Returns a constant iterator pointing to the first element in the unordered_multiset.
    4.cend() � Returns a constant iterator pointing to the theoretical element that follows the last element
    in the unordered_multiset.



    Capacity:
    1.size() � Returns the number of elements in the unordered_multiset.
    2.max_size() � Returns the maximum number of elements that the unordered_multiset can hold.
    3.empty() � Returns whether the unordered_multiset is empty.
    4.find() - Returns an iterator to the element �g� in the unordered_multiset if found, else returns the iterator to end.
    5.count() - Returns 1 or 0 based on whether the element �g� is present in the unordered_multiset or not.
    6.equal_range(const g) - The function returns an iterator of pairs. (key_comp). The pair refers to the range
    that includes all the elements in the container which have a key equivalent to k. which indiactes results of both
    the lower_bound and the upper_bound of g.


    Modifiers:
    1.insert() - Insert element in the set.
    2.insert(iterator position, const g) - Adds a new element �g� at the position pointed by the iterator.
    3.erase(const g) - Removes the value �g� from the set.
    4.erase(iterator position) - Removes the element at the position pointed by the iterator.
    5.clear() - Removes all the elements from the set.
    6.emplace() - This function is used to insert a new element into the set container, only if the element
    to be inserted is unique and does not already exist in the set.
    7.emplace_hint() - Returns an iterator pointing to the position where the insertion is done. If the element
    passed in the parameter already exists, then it returns an iterator pointing to the position where the existing
    element is.
    8.swap() - This function is used to exchange the contents of two sets but the sets must be of the same type,
    although sizes may differ.


    Buckets:
    1.Buckets() - Returns the bucket number of a specific element.
    2.Buckets_size() - Returns the total number of elements present in a specific bucket in an unordered_multiset container.
    3.bucket_count() - Returns the total number of buckets present in an unordered_multiset container.
    4.max_bucket_count() - Find the maximum number of buckets that unordered_multiset can have.


    Hash policy::
    1.load_factor() - Returns the current load factor in the unordered_multiset container.
    2.max_load_factor() - Returns(Or sets) the current maximum load factor of the unordered set container.
    3.rehash() - Set the number of buckets in the container of unordered_multiset to given size or more.
    4.reserve() - Used to request capacity change of unordered_multiset.


    Allocator:
    1.get_allocator() - C++ unordered_multiset get_allocator() function is used to return the copy of allocator object which
    helps to construct the unordered_multiset container.
    Time Complexity: O(1).
    2.key_eq() - returns a boolean value according to the comparison.
    3.hash_function() - This hash function is a unary function which takes asingle argument only and returns a unique
    value of type size_t based on it.
*/
int main()
{
    /*
    The time complexities for doing various operations on multimaps are:
        Insertion of Elements � O(log N)
        Deletion of Elements � O(log N)
    */
}
