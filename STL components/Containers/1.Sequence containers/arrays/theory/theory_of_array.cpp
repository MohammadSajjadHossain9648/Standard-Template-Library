#include<iostream>
#include<array>
using namespace std;
/*
    to know more: https://www.geeksforgeeks.org/the-c-standard-template-library-stl/
                  https://www.studytonight.com/cpp/stl/
                  https://www.simplilearn.com/tutorials/cpp-tutorial/cpp-standard-template-library#:~:text=C%2B%2B%20STL%20(standard%20template%20library)%20is%20a%20software%20library%20for,%2C%20algorithms%2C%20and%20function%20objects.
*/
/*
    The introduction of array class from C++11 has offered a better alternative for C-style arrays. The advantages
    of array class over C-style array are :-

    1.Array classes knows its own size, whereas C-style arrays lack this property. So when passing to
    functions, we don’t need to pass size of Array as a separate parameter.
    2.With C-style array there is more risk of array being decayed into a pointer. Array classes don’t decay
    into pointers
    3.Array classes are generally more efficient, light-weight and reliable than C-style arrays.



    Iterators:
    1.begin() – Returns an iterator pointing to the first element in the array
    2.end() – Returns an iterator pointing to the theoretical element that follows the last element in the array
    3.rbegin() – Returns a reverse iterator pointing to the last element in the array (reverse beginning).
    It moves from last to first element
    4.rend() – Returns a reverse iterator pointing to the theoretical element preceding the first element in
    the array (considered as reverse end)
    5.cbegin() – Returns a constant iterator pointing to the first element in the array.
    6.cend() – Returns a constant iterator pointing to the theoretical element that follows the last element
    in the array.
    7.crbegin() – Returns a constant reverse iterator pointing to the last element in the array (reverse beginning).
    It moves from last to first element
    8.crend() – Returns a constant reverse iterator pointing to the theoretical element preceding the first element
    in the array (considered as reverse end)
    9.get() :- This function is also used to access the elements of array. This function is not the member of
    array class but overloaded function from class tuple. use header #include<tuple>


    Capacity:
    1.size() – Returns the number of elements in the array.
    2.max_size() – Returns the maximum number of elements that the array can hold.
    3.empty() – Returns whether the array is empty.


    Element access:
    1.reference operator [index_no] – Returns a reference to the element at position ‘index_no’ in the array
    2.at(index_no) – Returns a reference to the element at position ‘index_no’ in the array
    3.front() – Returns a reference to the first element in the array
    4.back() – Returns a reference to the last element in the array
    5.data() – Returns a direct pointer to the memory array used internally by the array to store its owned elements.


    Modifiers:
    1.swap() – It is used to swap the contents of one array with another array of same type. Sizes may differ.
    2.fill() - This function is used to fill the entire array with a particular value.
*/
int main()
{

}
