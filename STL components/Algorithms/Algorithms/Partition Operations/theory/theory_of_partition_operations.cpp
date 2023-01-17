#include<iostream>
using namespace std;
/*
    to know more: https://www.geeksforgeeks.org/the-c-standard-template-library-stl/
                  https://www.geeksforgeeks.org/stdpartition-in-c-stl/
*/
/*
    C++ has a class in its STL algorithms library which allows us easy partition algorithms using certain
    inbuilt functions. Partition refers to act of dividing elements of containers depending upon a given condition.

    Partition operations :
    1. partition(beg, end, condition) :- This function is used to partition the elements on basis of
    condition mentioned in its arguments.
    2. is_partitioned(beg, end, condition) :- This function returns boolean true if container is partitioned
    else returns false.
    3. stable_partition(beg, end, condition) :- This function is used to partition the elements on basis of
    condition mentioned in its arguments in such a way that the relative order of the elements is preserved.
    4. partition_point(beg, end, condition) :- This function returns an iterator pointing to the partition
    point of container i.e. the first element in the partitioned range [beg,end) for which condition is not
    true. The container should already be partitioned for this function to work.
    5. partition_copy(beg, end, beg1, beg2, condition) :- This function copies the partitioned elements
    in the different containers mentioned in its arguments. It takes 5 arguments. Beginning and ending
    position of container, beginning position of new container where elements have to be copied (elements
    returning true for condition), beginning position of new container where other elements have to be copied
    (elements returning false for condition) and the condition. Resizing new containers is necessary
    for this function.
*/
int main()
{
}

