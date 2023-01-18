#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
/*
    to know more: https://levelup.gitconnected.com/learning-c-sorting-algorithms-of-the-stl-3c473a1e3143
                  https://www.softwaretestinghelp.com/algorithms-in-stl/
                  https://www.studytonight.com/cpp/stl/stl-sorting-algorithms
                  https://www.geeksforgeeks.org/sort-algorithms-the-c-standard-template-library-stl/
*/
/*
    Equal Range Algorithm in STL equal_range:
    equal_range() returns a pair of iterators where the iterators represent the sub range of elements in the
    given range which are equal to the given value or satisfy the compare_function. The given range should be
    already sorted.

    There are two variation of equal_range :
    1.equal_range(first, last, value) : returns a pair of iterators representing the sub range of (first,last)
    which have elements equal to value.
    2.equal_range(first, last, value, compare_function) : returns a pair of iterators representing the sub range
    of (first,last) which have elements satisfying compare_function with value.
*/
bool compare_function (int i,int j)
{
    return (i <= j);
}

int main ()
{
    int input[] = {1,1,1,2,2,2,3,3,6,7,7,7,7,7,8,9};
    vector v(input, input+16);

    pair< vector<int>::iterator, vector<int>::iterator > sub_range;
    /* defining the pair of two iterators to an integer vector */


    sub_range = equal_range (v.begin(), v.end(), 2);
    /* now sub_range.first points to 4th element in the vector v and
     sub_range.second points to 7th element ,
     note that sub_range.secong points to the element
     which is next to the element in the subrange  */

    sub_range = equal_range (v.begin(), v.end(), 20, compare_function);
    /* sub_range.first points to first element in the vector v ,
    as it satisfy the condition exerted by compare_function , <= ,
     sub_range.second points to 7th element in the vector . */
}
