#include<iostream>
#include<unordered_map>
using namespace std;
/*
    to know more: https://www.geeksforgeeks.org/the-c-standard-template-library-stl/
                  https://www.studytonight.com/cpp/stl/
                  https://www.simplilearn.com/tutorials/cpp-tutorial/cpp-standard-template-library#:~:text=C%2B%2B%20STL%20(standard%20template%20library)%20is%20a%20software%20library%20for,%2C%20algorithms%2C%20and%20function%20objects.
                  https://cplusplus.com/reference/unordered_map/unordered_map/
                  https://www.programiz.com/cpp-programming/unordered-map
                  https://www.scaler.com/topics/unordered_map-cpp/
*/
/*
    An Unordered map also stores only the single copy of the elements by removing the duplicates but does not sort
    the elements automatically as in map.
    An Unordered map internally uses a Hash Table and hence the ordering is random depending upon the internally
    used Hash function.


    Iterators:
    1.begin() – Returns an iterator pointing to the first element in the unordered_map
    2.end() – Returns an iterator pointing to the theoretical element that follows the last element in the unordered_map
    3.cbegin() – Returns a constant iterator pointing to the first element in the unordered_map.
    4.cend() – Returns a constant iterator pointing to the theoretical element that follows the last element
    in the unordered_map.



    Capacity:
    1.size() – Returns the number of elements in the unordered_map.
    2.max_size() – Returns the maximum number of elements that the unordered_map can hold.
    3.empty() – Returns whether the unordered_map is empty.
    4.find() - Returns an iterator to the element ‘g’ in the unordered_map if found, else returns the iterator to end.
    5.count() - Returns 1 or 0 based on whether the element ‘g’ is present in the unordered_map or not.
    6.equal_range(const g) - The function returns an iterator of pairs. (key_comp). The pair refers to the range
    that includes all the elements in the container which have a key equivalent to k. which indiactes results of both
    the lower_bound and the upper_bound of g.


    Modifiers:
    1.insert() - Insert element in the unordered_map.
    2.insert(iterator position, const g) - Adds a new element ‘g’ at the position pointed by the iterator.
    3.insert_or_assign() - it works exactly as insert() except that if the given key is already present in the
    unordered_map then its value is modified.
    4. at() - return the reference to the element associated with the key k.
    5.erase(const g) - Removes the value ‘g’ from the unordered_map.
    6.erase(iterator position) - Removes the element at the position pointed by the iterator.
    7.clear() - Removes all the elements from the unordered_map.
    8.emplace() - This function is used to insert a new element into the unordered_map container, only if the element
    to be inserted is unique and does not already exist in the unordered_map.
    9.emplace_hint() - Returns an iterator pointing to the position where the insertion is done. If the element
    passed in the parameter already exists, then it returns an iterator pointing to the position where the existing
    element is.
    10.swap() - This function is used to exchange the contents of two unordered_maps but the unordered_maps must be
    of the same type, although sizes may differ.


    Buckets:
    1.Buckets() - Returns the bucket number of a specific element.
    2.Buckets_size() - Returns the total number of elements present in a specific bucket in an unordered_map container.
    3.bucket_count() - Returns the total number of buckets present in an unordered_map container.
    4.max_bucket_count() - Find the maximum number of buckets that unordered_map can have.


    Hash policy::
    1.load_factor() - Returns the current load factor in the unordered_map container.
    2.max_load_factor() - Returns(Or maps) the current maximum load factor of the unordered map container.
    3.rehash() - map the number of buckets in the container of unordered_map to given size or more.
    4.reserve() - Used to request capacity change of unordered_map.


    Allocator:
    1.get_allocator() - C++ unordered_map get_allocator() function is used to return the copy of allocator object which
    helps to construct the unordered_map container.
    Time Complexity: O(1).
    2.key_eq() - returns a boolean value according to the comparison.
    3.hash_function() - This hash function is a unary function which takes asingle argument only and returns a unique
    value of type size_t based on it.
*/
int main()
{
    /*
    The time complexities for doing various operations on multimaps are:
        Insertion of Elements – O(1)
        Deletion of Elements – O(1)
        Searching of Elements – O(1)
    */
}
