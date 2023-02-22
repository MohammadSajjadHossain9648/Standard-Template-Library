#include<iostream>
#include<list>
using namespace std;
/*
    to know more: https://www.geeksforgeeks.org/the-c-standard-template-library-stl/
                  https://www.studytonight.com/cpp/stl/
                  https://www.simplilearn.com/tutorials/cpp-tutorial/cpp-standard-template-library#:~:text=C%2B%2B%20STL%20(standard%20template%20library)%20is%20a%20software%20library%20for,%2C%20algorithms%2C%20and%20function%20objects.
                  https://www.studytonight.com/cpp/stl/stl-container-list
*/
/*
    Modifiers:
    1.assign() – It assigns new value to the list elements by replacing old ones
    & fill() -  fill constructor will give us the ability to construct and initialize a list with n number
    of elements and assign a value to each element.
    2.push_front() - This function is used to insert the element at the first position on forward_list. The value
    from this function is copied to the space before first element in the container. The size of forward_list
    increases by 1.
    3.push_back() – It push the elements into a list from the back
    4.pop_front() - This function is used to delete the first element of the list.
    5.pop_back() – It is used to pop or remove elements from a list from the back.
    6.insert() – It inserts new elements before the element at the specified position
    7.unique() - It remove all duplicates in the list
    8.erase() – It is used to remove elements from a container from the specified position or range.
    9.swap() – It is used to swap the contents of one list with another list of same type. Sizes may differ.
    10.reverse() - It is used to swap the contents of one list
    11.clear() – It is used to remove all the elements of the list container
    12.remove() - Removes all the elements from the list, which are equal to given element.
    13.remove_if() - Used to remove all the values from the list that correspond true to the predicate or condition
    given as parameter to the function.
    14.emplace() – It extends the container by inserting new element at position
    15.emplace_front() – It is used to insert a new element into the list container, the new element is added
    to the begining of the list
    16.emplace_back() – It is used to insert a new element into the list container, the new element is added
    to the end of the list
    17.splice() - It transfers the elements from one list to another.
*/

// Predicate implemented as a function
bool even(const int& value)
{
    return (value % 2) == 0;
}

int main()
{
    // Assign list
    list<int> v;

    // fill the list with 10 five times
    v.assign(5, 10); // same as fill constructor, list<int> v(5, 10); -> here 5 is size, 10 is value

    cout<<"The list elements are: ";
    for (auto i = v.begin(); i != v.end(); i++)
        cout<<*i<<" ";

    // inserts 15 to the last position
    v = {20,30,40};
    v.push_front(10);
    cout<<"\nThe first element is: "<<v.front();
    v.push_back(50);
    int n = v.size();
    cout<<"\nThe last element is: "<<v.back();


    // removes first element
    v.pop_front();
    // removes last element
    v.pop_back();

    // prints the list
    cout<<"\nThe list elements are: ";
    for (auto i = v.begin(); i != v.end(); i++)
        cout<<*i<<" ";

    // inserts 5 at the beginning
    v.insert(v.begin(), 5);

    cout<<"\nThe first element is: "<<v.front();

    // removes the first element
    v.erase(v.begin());

    cout<<"\nThe first element is: "<<v.front();

    // inserts at the beginning or can be insert any place
    v.emplace(v.begin(), 5);
    cout<<"\nThe first element is: "<<v.front();

    // inserts 15 at the beginning
    v.emplace_front(15);
    cout<<"\nThe first element is: "<<v.front();

    // Inserts 20 at the end
    v.emplace_back(20);
    n = v.size();
    cout<<"\nThe last element is: "<<v.back();

    // erases the list
    v.clear();
    cout<<"\nlist size after erase(): "<<v.size();


    v = {10,20,30,40,20,50};
    //remove the list
    v.remove(20);

    cout<<"\nAfter remove 20, The list elements are: ";
    for (auto i = v.begin(); i != v.end(); i++)
        cout<<*i<<" ";


    v = {1,2,3,4,5,6,7,8,9};
    //remove all even number in the list
    v.remove_if([](int x) { return x % 2 == 0; });
    /* same as before line
       v.remove_if(even);  -> calling function
    */
    cout<<"\nAfter remove all even number, The list elements are: ";
    for (auto i = v.begin(); i != v.end(); i++)
        cout<<*i<<" ";



    v = {1,1,2,2,1,2,3,3,4,5,6,6,5,4};
    v.sort();
    // always do sort before unique the list, otherwise print 1 2 1 2 3 4 5 6 5 4
    v.unique();

    cout<<"\nAfter unique the list, The list elements are: ";
    for (auto i = v.begin(); i != v.end(); i++)
        cout<<*i<<" ";



    // two list to perform swap and splice
    list<int> v1, v2;
    v1.push_back(1);
    v1.push_back(2);
    v2.push_back(3);
    v2.push_back(4);

    cout<<"\n\nlist 1: ";
    for (auto i = v1.begin(); i != v1.end(); i++)
        cout<<*i<<" ";

    cout<<"\nlist 2: ";
    for (auto i = v2.begin(); i != v2.end(); i++)
        cout<<*i<<" ";

    // Swaps v1 and v2
    v1.swap(v2);

    cout<<"\nAfter Swap \nlist 1: ";
    for (auto i = v1.begin(); i != v1.end(); i++)
        cout<<*i<<" ";

    cout<<"\nlist 2: ";
    for (auto i = v2.begin(); i != v2.end(); i++)
        cout<<*i<<" ";


    list<int>::iterator it;

    it = v1.begin();
    ++it;   //pointing to second position

    v1.splice(it, v2);

    cout<<"\nAfter Splice with list2 to list1\nlist 1: ";
    for (auto i = v1.begin(); i != v1.end(); i++)
        cout<<*i<<" ";

    cout<<"\nlist 2: ";
    for (auto i = v2.begin(); i != v2.end(); i++)
        cout<<*i<<" ";






    //output:
    //    The list elements are: 10 10 10 10 10
    //    The first element is: 10
    //    The last element is: 50
    //    The list elements are: 20 30 40
    //    The first element is: 5
    //    The first element is: 20
    //    The first element is: 5
    //    The first element is: 15
    //    The last element is: 20
    //    list size after erase(): 0
    //    After remove 20, The list elements are: 10 30 40 50
    //    After remove all even number, The list elements are: 1 3 5 7 9
    //    After unique the list, The list elements are: 1 2 3 4 5 6
    //
    //    list 1: 1 2
    //    list 2: 3 4
    //    After Swap
    //    list 1: 3 4
    //    list 2: 1 2
    //    After Splice with list2 to list1
    //    list 1: 3 1 2 4
    //    list 2:
}
