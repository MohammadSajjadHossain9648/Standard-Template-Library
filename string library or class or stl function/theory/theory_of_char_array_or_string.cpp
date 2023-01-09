#include<iostream>
#include<string>
using namespace std;
/*
    to know more: https://www.geeksforgeeks.org/stdstring-class-in-c/
                  https://www.geeksforgeeks.org/strings-library-in-cpp-stl/
                  https://cplusplus.com/reference/string/string/
                  https://www.scaler.com/topics/cpp/strings-in-cpp/
*/
/*
    string and char array are same. Strings are objects that represent sequences of characters.

    difference between string and char array:
    string:
    1. A string is a class that defines objects that be represented as a stream of characters.
    2. In the case of strings, memory is allocated dynamically. More memory can be allocated at run time
    on demand. As no memory is preallocated, no memory is wasted.
    3. As strings are represented as objects, no array decay occurs.
    4. Strings are slower when compared to implementation than character array.
    5. String class defines a number of functionalities that allow manifold operations on strings.

    char array:
    1. A character array is simply an array of characters that can be terminated by a null character.
    2. The size of the character array has to be allocated statically, more memory cannot be allocated
    at run time if required. Unused allocated memory is also wasted.
    3. There is a threat of array decay in the case of the character array.
    4. Implementation of character array is faster than std:: string.
    5. Character arrays do not offer many inbuilt functions to manipulate strings.




    Iterators:
    1.begin() – Returns an iterator pointing to the first element in the string
    2.end() – Returns an iterator pointing to the theoretical element that follows the last element in the string
    3.rbegin() – Returns a reverse iterator pointing to the last element in the string (reverse beginning).
    It moves from last to first element
    4.rend() – Returns a reverse iterator pointing to the theoretical element preceding the first element in
    the string (considered as reverse end)
    5.cbegin() – Returns a constant iterator pointing to the first element in the string.
    6.cend() – Returns a constant iterator pointing to the theoretical element that follows the last element
    in the string.
    7.crbegin() – Returns a constant reverse iterator pointing to the last element in the string (reverse beginning).
    It moves from last to first element
    8.crend() – Returns a constant reverse iterator pointing to the theoretical element preceding the first element
    in the string (considered as reverse end)


    Capacity:
    1.size()/length() – Returns the number of elements in the string.
    2.max_size() – Returns the maximum number of elements that the string can hold.
    3.capacity() – Returns the size of the storage space currently allocated to the string expressed as number
    of elements.
    4.resize(n) – Resizes the container so that it contains ‘n’ elements.
    5.empty() – Returns whether the container is empty.
    6.find()/ npos - Maximum value for size_t, if found print starting index, else -1
    7.shrink_to_fit() – Reduces the capacity of the container to fit its size and destroys all elements beyond
    the capacity.
    8.reserve() – Requests that the string capacity be at least enough to contain n elements.


    Element access:
    1.reference operator [index_no] – Returns a reference to the element at position ‘index_no’ in the string
    2.at(index_no) – Returns a reference to the element at position ‘index_no’ in the string
    3.front() – Returns a reference to the first element in the string
    4.back() – Returns a reference to the last element in the string
    5.advance() - This function is used to increment the iterator position till the specified number mentioned in
    its arguments.
    6.next() - This function returns the new iterator that the iterator would point after advancing the positions
    mentioned in its arguments.
    7.prev() - This function returns the new iterator that the iterator would point after decrementing the positions
    mentioned in its arguments.
    8.inserter() - This function is used to insert the elements at any position in the container. It accepts 2
    arguments, the container and iterator to position where the elements have to be inserted.


    Modifiers:
    1.assign() – It assigns new value to the string elements by replacing old ones
    2.push_back() – It is used to input a character at the end of the string.
    3.pop_back() – It is used to delete the last character from the string.
    4.insert()/append() – It inserts new elements before the element at the specified position
    5.erase() – It is used to remove elements from a container from the specified position or range.
    6.swap() – It is used to swap the contents of one string with another string of same type. Sizes may differ.
    7.clear() – It is used to remove all the elements of the string container
    8.replace() - It is used to replace portion of string.


    String Operations:
    1.copy() - Copy sequence of characters from string
    2.find() - Find content in string
    3.rfind() - Find last occurrence of content in string
    4.find_first_of() - Find character in string
    5.find_last_of() - Find character in string from the end
    6.find_first_not_of() - Find absence of character in string
    7.find_last_not_of() - Find non-matching character in string from the end
    8.substr() - Generate substring
    9.compare() - It is used to replace portion of string.
    10.data() - Get string data
    11.c_str – Get C string equivalent
    12.get_allocator() – Get allocator


    other function:
    1.stod() - convert string to double
    2.stof() - convert string to float
    3.stoi() - convert string to int
    4.stol() - convert string to long int
    5.stold() - convert string to long double
    6.stoll() - convert string to long long
    7.stoul() - convert string to unsigned integer
    8.stoull() - convert string to unsigned long long
    9.to_string() - convert numerical value to string
    10.to_wstring() - convert numerical value to wide string
*/
int main()
{
    /*
    The time complexity for doing various operations on strings is-

    Random access – constant O(1)
    Insertion or removal of elements at the end – constant O(1)
    Insertion or removal of elements – linear in the distance to the end of the string O(N)
    Knowing the size – constant O(1)
    Resizing the string- Linear O(N)
    */
}
