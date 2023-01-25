#include<iostream>
#include<algorithm>
#include<vector>
#include<functional>
using namespace std;
/*
    to know more: https://www.geeksforgeeks.org/functors-in-cpp/
                  https://www.programiz.com/cpp-programming/functors
                  https://www.go4expert.com/articles/cpp-stl-functors-t34696/
                  https://www.technical-recipes.com/2011/using-function-objects-functors-c/
                  https://www.quantstart.com/articles/Function-Objects-Functors-in-C-Part-1/
                  https://learn.microsoft.com/en-us/cpp/standard-library/function-objects-in-the-stl?view=msvc-170
*/
int main()
{
    // initialize vector of int
    vector <int> v = {1,3,5,7,9};

    // sort the vector in descending order
    sort(v.begin(), v.end(), greater<int>()); // greater<int>() is a predefined functors.

    for(int num: v)
    {
        cout<<num<<" ";
    }
    cout<<endl;
}
