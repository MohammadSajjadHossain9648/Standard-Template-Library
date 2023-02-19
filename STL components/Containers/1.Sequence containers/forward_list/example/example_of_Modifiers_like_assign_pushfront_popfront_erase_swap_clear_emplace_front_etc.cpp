#include<iostream>
#include<forward_list>
using namespace std;
/*
    to know more: https://www.geeksforgeeks.org/the-c-standard-template-library-stl/
                  https://www.studytonight.com/cpp/stl/
                  https://www.simplilearn.com/tutorials/cpp-tutorial/cpp-standard-template-library#:~:text=C%2B%2B%20STL%20(standard%20template%20library)%20is%20a%20software%20library%20for,%2C%20algorithms%2C%20and%20function%20objects.
                  https://www.studytonight.com/cpp/stl/stl-container-forward_list
*/
/*
    Modifiers:
    1.assign() – It assigns new value to the forward_list elements by replacing old ones
    & fill() -  fill constructor will give us the ability to construct and initialize a forward_list with n number
    of elements and assign a value to each element.
    2.push_front() - This function is used to insert the element at the first position on forward_list. The value
    from this function is copied to the space before first element in the container. The size of forward_list
    increases by 1.
    3.emplace_front() - This function is similar to the previous function but in this no copying operation occurs,
    the element is created directly at the memory before the first element of the forward_list.
    4.pop_front() - This function is used to delete the first element of the list.
    5.insert_after() - This function gives us a choice to insert elements at any position in forward_list. The
    arguments in this function are copied at the desired position.
    6.emplace_after() - This function also does the same operation as the above function but the elements are
    directly made without any copy operation.
    7.erase_after() - This function is used to erase elements from a particular position in the forward_list. There
    are two variants of ‘erase after’ function.
    8.before_begin() - Returns an iterator that points to the position before the first element of the forward_list.
    9.cbefore_begin() - Returns a constant random access iterator which points to the position before the first element
    of the forward_list.
    10.reverse() - It is used to swap the contents of one list
    11.unique() - It remove all duplicates in the list
    12.clear() – It is used to remove all the elements of the forward_list container
    13.remove() - Removes all the elements from the list, which are equal to given element.
    14.remove_if() - Used to remove all the values from the list that correspond true to the predicate or condition
    given as parameter to the function.
    15.splice_after() - This function transfers elements from one forward_list to other.
*/
int main()
{
    // Assign forward_list
    forward_list<int> v;

    // fill the forward_list with 10 five times
    v.assign(5, 10); // same as fill constructor, forward_list<int> v(5, 10); -> here 5 is size, 10 is value

    cout<<"The forward_list elements are: ";
    for (int i: v)
        cout<<i<<" ";

    // erases the forward_list
    v.clear();
    cout<<"\nforward_list size after erase(): ";
    for (int i: v)
        cout<<i<<" ";


// add single value in first position
    v = {30,40,50};
    // Inserting value using push_front() Inserts 20 at front
    v.push_front(20);

    // inserts 1 at the beginning
    v.emplace_front(1);
    cout<<"\nThe first element is: "<<v.front()<<endl;

    //insert 10 after first value
    v.emplace_after(v.begin(),10); // not possible: v.emplace_after(v.begin(),{2,3} / v.begin()+3,2);

    cout<<"\nThe forward_list elements are: ";
    for (int i: v)
        cout<<i<<" ";

// delete first value
    v.pop_front();
    cout<<"\nAfter delete first position, The first element is: "<<v.front()<<endl;


// add mulitple values after first position
    v = {1,6,7,8,9};

    v.insert_after(v.begin(), {2,3,4,5});
    cout<<"\nafter insert_after(v.begin(),{2,3,4,5}), The forward_list elements are: ";
    for (int i: v)
        cout<<i<<" ";
    cout<<endl;


// delete second value
    v.erase_after(v.begin()); //notpossible:v.erase_after(v.begin(),{2,3,4,5});
    cout<<"\nafter erase_after(v.begin()), The forward_list elements are: ";
    for (int i: v)
        cout<<i<<" ";
    cout<<endl;

// delete all values except first value
    v.erase_after(v.begin(), v.end()); //notpossible:v.erase_after(v.begin(),{2,3,4,5});
    cout<<"\nafter erase_after(v.begin(), v.end()), The forward_list elements are: ";
    for (int i: v)
        cout<<i<<" ";
    cout<<endl;



// inserting element before the first element by using before_begin() and cbefore_begin(). both are same in code
    forward_list<int> v3 = {20,30,40,50};
    cout<<"\nThe forward_list elements are: ";
    for (int i: v)
        cout<<i<<" ";

    // performing before_begin function
    auto it = v3.before_begin();  // auto it = v3.cbefore_begin();

    // inserting element before the first element
    v3.insert_after(it, 10);

    cout<<"\nAfter inserting 10 before the first element, The forward_list elements are: ";
    for (int i: v3)
        cout<<i<<" ";



//reverse the forward_list
    v = {1,2,3,4,5};

    v.reverse();
    cout<<"\nreverse the forward_list: ";
    for (int i: v)
        cout<<i<<" ";
    cout<<endl;


//unique the forward_list
    v = {1,1,2,1,2,2,3,4,5};

    v.sort(); //always do sort first
    v.unique();
    cout<<"\nunique the forward_list: ";
    for (int i: v)
        cout<<i<<" ";
    cout<<endl;


// remove
    v = {10,20,30,40,20,50};
    //remove the list
    v.remove(20);

    cout<<"\nAfter remove 20, The list elements are: ";
    for (auto i = v.begin(); i != v.end(); i++)
        cout<<*i<<" ";


// remove_if
    v = {1,2,3,4,5,6,7,8,9};
    //remove all even number in the list
    v.remove_if([](int x)
    {
        return x % 2 == 0;
    });
    /* same as before line
       v.remove_if(even);  -> calling function
    */
    cout<<"\nAfter remove all even number, The list elements are: ";
    for (auto i = v.begin(); i != v.end(); i++)
        cout<<*i<<" ";


// splice_after
    // two list to perform splice
    forward_list<int> v1 = {1,2,3}, v2 = {4,5,6};

    cout<<"\nBefore Splice with list2 to list1\nlist 1: ";
    for (auto i = v1.begin(); i != v1.end(); i++)
        cout<<*i<<" ";

    cout<<"\nlist 2: ";
    for (auto i = v2.begin(); i != v2.end(); i++)
        cout<<*i<<" ";


    v1.splice_after(v1.begin(), v2);


    cout<<"\nAfter Splice with list2 to list1\nlist 1: ";
    for (auto i = v1.begin(); i != v1.end(); i++)
        cout<<*i<<" ";

    cout<<"\nlist 2: ";
    for (auto i = v2.begin(); i != v2.end(); i++)
        cout<<*i<<" ";


    //output:
    //    The forward_list elements are: 10 10 10 10 10
    //    forward_list size after erase():
    //    The first element is: 1
    //
    //    The forward_list elements are: 1 10 20 30 40 50
    //    After delete first position, The first element is: 10
    //
    //    after insert_after(v.begin(),{2,3,4,5}), The forward_list elements are: 1 2 3 4 5 6 7 8 9
    //
    //    after erase_after(v.begin()), The forward_list elements are: 1 3 4 5 6 7 8 9
    //
    //    after erase_after(v.begin(), v.end()), The forward_list elements are: 1
    //
    //    The forward_list elements are: 1
    //    After inserting 10 before the first element, The forward_list elements are: 10 20 30 40 50
    //    reverse the forward_list: 5 4 3 2 1
    //
    //    unique the forward_list: 1 2 3 4 5
    //
    //    After remove 20, The list elements are: 10 30 40 50
    //    After remove all even number, The list elements are: 1 3 5 7 9
    //    Before Splice with list2 to list1
    //    list 1: 1 2 3
    //    list 2: 4 5 6
    //    After Splice with list2 to list1
    //    list 1: 1 4 5 6 2 3
    //    list 2:
}
