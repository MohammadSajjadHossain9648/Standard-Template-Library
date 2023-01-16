#include<iostream>
using namespace std;
/*
    to know more: https://www.geeksforgeeks.org/the-c-standard-template-library-stl/
                  https://www.geeksforgeeks.org/c-magicians-stl-algorithms/
                  https://www.studytonight.com/cpp/stl/stl-min-max-operations-cont
*/
/*
    For all those who aspire to excel in competitive programming, only having a knowledge about containers of STL
    is of less use till one is not aware what all STL has to offer.
    STL has an ocean of algorithms, for all < algorithm > library functions : Refer here.
    Some of the most used algorithms on vectors and most useful one’s in Competitive Programming are mentioned
    as follows :

    Non-Manipulating Algorithms:
    1.sort(first_iterator, last_iterator) – To sort the given vector.
    2.sort(first_iterator, last_iterator, greater<int>()) – To sort the given container/vector in descending order
    3.reverse(first_iterator, last_iterator) – To reverse a vector. (ascending -> descending /descending -> ascending)
    4.*max_element (first_iterator, last_iterator) – To find the maximum element of a vector.
    5.*min_element (first_iterator, last_iterator) – To find the minimum element of a vector.
    6.accumulate(first_iterator, last_iterator, initial value of sum) – Does the summation of vector elements
    7.count(first_iterator, last_iterator,x) – To count the occurrences of x in vector.
    8.find(first_iterator, last_iterator, x) – Returns an iterator to the first occurrence of x in vector and
    points to last address of vector ((name_of_vector).end()) if element is not present in vector.
    9.binary_search(first_iterator, last_iterator, x) – Tests whether x exists in sorted vector or not.
    10. lower_bound(first_iterator, last_iterator, x) – returns an iterator pointing to the first element
    in the range [first,last) which has a value not less than ‘x’.
    11. upper_bound(first_iterator, last_iterator, x) – returns an iterator pointing to the first element
    in the range [first,last) which has a value greater than ‘x’.


    Some Manipulating Algorithms:
    1.arr.erase(position to be deleted) – This erases selected element in vector and shifts and resizes the
    vector elements accordingly.
    2.arr.erase(unique(arr.begin(),arr.end()),arr.end()) – This erases the duplicate occurrences in sorted vector
    in a single line.
    3.next_permutation(first_iterator, last_iterator) – This modified the vector to its next permutation.
    4.prev_permutation(first_iterator, last_iterator) – This modified the vector to its previous permutation.
    5.distance(first_iterator,desired_position) – It returns the distance of desired position from the first
    iterator.This function is very useful while finding the index.
*/
int main()
{
}

