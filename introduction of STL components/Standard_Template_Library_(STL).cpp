#include<iostream>
using namespace std;
/*
    to know more: https://www.geeksforgeeks.org/the-c-standard-template-library-stl/
                  https://www.geeksforgeeks.org/templates-cpp/
                  https://cplusplus.com/reference/stl/
                  https://www.studytonight.com/cpp/stl/
                  https://www.simplilearn.com/tutorials/cpp-tutorial/cpp-standard-template-library#:~:text=C%2B%2B%20STL%20(standard%20template%20library)%20is%20a%20software%20library%20for,%2C%20algorithms%2C%20and%20function%20objects.
                  https://www.javatpoint.com/cpp-stl-components
                  https://www.programiz.com/cpp-programming/stl-containers
                  https://learn.microsoft.com/en-us/cpp/standard-library/cpp-standard-library-reference?view=msvc-170
                  https://www.softwaretestinghelp.com/algorithms-in-stl/
                  https://www.scaler.com/topics/cpp/containers-in-cpp/ -> see how containers work?
*/
/*
    The Standard Template Library (STL) is a set of C++ template classes to provide common programming data structures
    and functions such as lists, stacks, arrays, etc. It is a library of container classes, algorithms, and iterators.
    It is a generalized library and so, its components are parameterized. Working knowledge of template classes is a
    prerequisite for working with STL.

    STL has 4 components:

    1. Algorithms
    2. Containers
    3. Functions
    4. Iterators
*/
/*
    A template is a simple yet very powerful tool in C++. The simple idea is to pass data type as a parameter
    so that we don’t need to write the same code for different data types. For example, a software company may
    need to sort() for different data types. Rather than writing and maintaining multiple codes, we can write
    one sort() and pass data type as a parameter.
    C++ adds two new keywords to support templates: ‘template’ and ‘typename’. The second keyword can always
    be replaced by the keyword ‘class’.
*/
/*
               |->  Algorithms
               |        |-> Sorting
               |        |-> Searching
               |        |-> Important STL Algorithms
               |        |-> Useful Array algorithms
               |        |-> Partition Operations
               |    Numeric
               |        |-> valarray class
    c++ STL ---|
               |
               |->  Functions
               |
               |->  Iterators
               |
               |->  Containers
                        |-> Sequence Containers
                        |        |-> vector
                        |        |-> list
                        |        |-> deque
                        |        |-> arrays
                        |        |-> forward_list
                        |
                        |-> Container Adaptors
                        |        |-> queue
                        |        |-> priority_queue
                        |        |-> stack
                        |
                        |-> Associative Containers
                        |        |-> set
                        |        |-> multiset
                        |        |-> map
                        |        |-> multimap
                        |
                        |-> Unordered Associative Containers
                                 |-> Unordered set
                                 |-> Unordered multiset
                                 |-> Unordered map
                                 |-> Unordered multimap
*/
/*
    what is Algorithms?
    Algorithms can be defined as functions applied to the containers and provide operation for the content
    of the container. for example : sort(), swap(), min(), max() etc.

    Types of algorithms:
    1. Sorting algorithms
    2. Searching algorithms
    3. Important STL Algorithms
    4. Useful Array algorithms
    5. Partition Operations
    6. Numeric algorithms like valarray class
*/

/*
    what is Functions?
    The STL includes classes that overload the function call operator. Instances of such classes are called function
    objects or functors. Functors allow the working of the associated function to be customized with the help of parameters
    to be passed.
*/

/*
    what is Iterators?
    Iterators are used to access data in the containers, and it helps in traversing through elements of containers using its
    functions. They can be incremented and decremented as per choice and help in the manipulation of data in the container.
*/

/*
    what is containers?
    A container is an object that stores a collection of objects of a specific type. For example, if we
    need to store a list of names, we can use a vector. C++ STL provides different types of containers
    based on our requirements.

    Containers or container classes store objects and data. There are in total seven standards “first-class”
    container classes and three container adaptor classes and only seven header files that provide access to
    these containers or container adaptors.

    Classification of Containers in STL:
    Containers are classified into four categories :
    1. Sequence containers : Used to implement data structures that are sequential in nature like
       arrays(array) and linked list(list).
    2. Associative containers : Used to implement sorted data structures such as map, set etc.
    3. Unordered associative containers : Used to implement unsorted data structures.
    4. Containers adaptors : Used to provide different interface to the sequence containers.
*/
/*
    Sequence Container:
    In C++, sequential containers allow us to store elements that can be accessed in sequential order.
    Internally, sequential containers are implemented as arrays or linked lists data structures.
    implement data structures that can be accessed in a sequential manner.

    Types of Sequential Containers:
    Vectors: Vectors can be defined as a dynamic array or an array with some additional features.
             Syntax: vector<int> v;

    Deque: Deque is also known as a double-ended queue that allows inserting and deleting from both ends;
           they are more efficient than vectors in case of insertion and deletion.
           Syntax: deque<int> d;

    List: List is also the sequential container and allows non-contiguous allocation.
          It allows insertion and deletion anywhere in the sequence.
          Syntax: list<int> l;

    Array: An array is a data structure that stores an element of the same data type sequentially.
           Syntax: array<int, len> arr;

    Forward List: Forward list in STL implements singly linked list.
                  Syntax: forward_list<int> fl;
*/
/*
    Container Adapters:
    In C++, Container Adapters take an existing STL container and provide a restricted interface to make them
    behave differently. For example, A stack is a container adapter that uses the sequential container
    deque and provides a restricted interface to support push() and pop() operations only.
    provide a different interface for sequential containers.

    Types of Container Adapters:
    Stack: Stack follows the last-in, first-out(LIFO) approach that means new elements are added at the end
           and removed from that end only.
           Syntax: stack<int> s;

    Queue: Queue follows the first-in, first-out(FIFO) approach, which means new elements are added from the end
           and removed from the front.
           Syntax: queue<int> q;

    Priority Queue: Priority queues are a type of container adapters, specifically designed such that the first
                    element of the queue is either the greatest or the smallest of all elements in the queue and
                    elements are in nonincreasing order
                    Syntax: priority_queue<int> pq;
*/
/*
    Associative Containers:
    In C++, associative containers allow us to store elements in sorted order. The order doesn't depend upon
    when the element is inserted. Internally, they are implemented as binary tree data structures.
    implement sorted data structures that can be quickly searched (O(log n) complexity).

    Types of Associative Containers:
    Set: It is an associative container that is used to store elements that are unique.
         Syntax: set<int> s;

    Multiset: This container is similar to that of the set container; the only difference is that
              it stores non-unique elements.
              Syntax: multiset<int> ms;

    Map: Map container contains sets of key-value pairs where each key is associated with one value.
         Syntax: map<int> m;

    Multimap: These containers also store key-value pairs, but unlike maps, they can have duplicate elements.
              Syntax: multimap<int> m1;
*/
/*
    Unordered Associative Containers:
    In C++, STL Unordered Associative Containers provide the unsorted versions of the associative container.
    Internally, unordered associative containers are implemented as hash table data structures.
    implement unordered data structures that can be quickly searched

    Types of Unordered Associative Containers:
    Unordered Set:
           Syntax: unordered_set <string> stringSet;
    Unordered Map:
           Syntax: unordered_map<string, int> umap;
    Unordered Multiset:
           Syntax: unordered_multiset<int> ums1;
    Unordered Multimap:
           Syntax: unordered_multimap<string, int> umm1;
*/

/*
    Utility Library(Extra)
    Defined in header <utility>.
    -> pair:
            Syntax: pair<int, char> PAIR1;
*/
int main()
{
}
