#include<iostream>
using namespace std;
/*
    to know more: https://www.geeksforgeeks.org/the-c-standard-template-library-stl/
                  https://www.javatpoint.com/cpp-iterators
                  https://www.geeksforgeeks.org/introduction-iterators-c/
                  https://www.geeksforgeeks.org/iterators-c-stl/
                  https://learn.microsoft.com/en-us/cpp/standard-library/iterators?view=msvc-170
                  https://www.studytonight.com/cpp/stl/
                  https://www.softwaretestinghelp.com/iterators-in-stl/
*/
/*
    what is Iterators?
    Iterators are just like pointers used to access the container elements or array elements.
    Iterators are used to point at the memory addresses of STL containers.
*/
/*
    Important Points:
    1.Iterators are used to traverse from one element to another element, a process is known as
    iterating through the container.
    2.The main advantage of an iterator is to provide a common interface for all the containers type.
    3.Iterators make the algorithm independent of the type of the container used.
    4.Iterators provide a generic approach to navigate through the elements of a container.
*/
/*
    Types of Iterators :
    1.Input Iterators -> They are the weakest of all the iterators and have very limited functionality.
    They can only be used in a single-pass algorithms, i.e., those algorithms which process the container
    sequentially, such that no element is accessed more than once.

    2.Output Iterators -> Just like input iterators, they are also very limited in their functionality and
    can only be used in single-pass algorithm, but not for accessing elements, but for being assigned elements.

    3.Forward Iterator -> They are higher in the hierarchy than input and output iterators, and contain all the
    features present in these two iterators. But, as the name suggests, they also can only move in a forward
    direction and that too one step at a time.

    4.Bidirectional Iterators -> They have all the features of forward iterators along with the fact that they
    overcome the drawback of forward iterators, as they can move in both the directions, that is why their name
    is bidirectional.

    5.Random-Access Iterators -> They are the most powerful iterators. They are not limited to moving sequentially,
    as their name suggests, they can randomly access any element inside the container. They are the ones whose
    functionality are same as pointers.
*/
/*
    1.Input Iterator: An input iterator is an iterator used to access the elements from the container,
    but it does not modify the value of a container.

    Operators used for an Input iterator are:
        Increment operator(++)
        Equal operator(==)
        Not equal operator(!=)
        Dereference operator(*)

    2.Output Iterator: An output iterator is an iterator used to modify the value of a container,
    but it does not read the value from a container. Therefore, we can say that an output iterator
    is a write-only iterator.

    Operators used for an Output iterator are:
        Increment operator(++)
        Assignment operator(=)

    3.Forward Iterator: A forward iterator is an iterator used to read and write to a container.
    It is a multi-pass iterator.

    Operators used for a Forward iterator are:
        Increment operator(++)
        Assignment operator(=)
        Equal operator(=)
        Not equal operator(!=)

    4.Bidirectional iterator: A bidirectional iterator is an iterator supports all the features of a
    forward iterator plus it adds one more feature, i.e., decrement operator(--). We can move backward
    by decrementing an iterator.

    Operators used for a Bidirectional iterator are:
        Increment operator(++)
        Assignment operator(=)
        Equal operator(=)
        Not equal operator(!=)
        Decrement operator(--)

    5.Random Access Iterator: A Random Access iterator is an iterator provides random access of an element
    at an arbitrary location.

    Operators used for a Random access iterator are:
        It has all the features of a bidirectional iterator plus it adds one more feature,
        i.e., pointer addition and pointer subtraction to provide random access to an element.
*/
/*
    providers of iterations:
    Bidirectional iterator ->	List, set, multiset, map, multimap
    Random access iterator ->	Vector, deque, array
*/
/*
    Difference b/w Random Access Iterator and Other Iterators
    The most important difference between the Random access iterator and other iterators is that random
    access iterator requires '1' step to access an element while other iterators require 'n' steps.

    Input iterator -> read only and moves forward ---------------------------------------|
    Output iterator -> write only and moves forward                                      |-- o(n)
    Forward iterator -> read and write, moves forward                                    |
    Bidirectional iterator -> read and write, moves forward or backward -----------------|
    Random access iterator -> read and write, random access  -------------------------------- o(1)
*/
/*
    All iterators can be assigned or copied. They're assumed to be lightweight objects and are often
    passed and returned by value, not by reference. Note also that none of the operations previously
    described can throw an exception when performed on a valid iterator.

    The hierarchy of iterator categories can be summarized by showing three sequences. For write-only access
    to a sequence, you can use any of:

    output iterator
    -> forward iterator
    -> bidirectional iterator
    -> random-access iterator

    The right arrow means "can be replaced by." Any algorithm that calls for an output iterator should work
    nicely with a forward iterator, for example, but not the other way around.

    For read-only access to a sequence, you can use any of:

    input iterator
    -> forward iterator
    -> bidirectional iterator
    -> random-access iterator

    An input iterator is the weakest of all categories, in this case.

    Finally, for read/write access to a sequence, you can use any of:

    forward iterator
    -> bidirectional iterator
    -> random-access iterator

    An object pointer can always serve as a random-access iterator, so it can serve as any category
    of iterator if it supports the proper read/write access to the sequence it designates.
*/
/*
    advantages and disadvantages:

    Advantages of iterator:
    1.Ease in programming: It is convenient to use iterators rather than using a subscript operator[]
    to access the elements of a container. If we use subscript operator[] to access the elements,
    then we need to keep the track of the number of elements added at the runtime, but this would not
    happen in the case of an iterator.
    2.Code Reusability: A code can be reused if we use iterators. In the above example, if we replace
    vector with the list, and then the subscript operator[] would not work to access the elements as
    the list does not support the random access. However, we use iterators to access the elements,
    then we can also access the list elements.
    3.Dynamic Processing: C++ iterators provide the facility to add or delete the data dynamically.

    Disadvantages of iterator:
    1.If we want to move from one data structure to another at the same time, iterators won't work.
    2.If we want to update the structure which is being iterated, an iterator won?t allow us to do
    because of the way it stores the position.
    3.If we want to backtrack while processing through a list, the iterator will not work in this case.
*/
int main()
{
}


