#include<iostream>
#include<algorithm>
#include<vector>
#include<functional>
using namespace std;

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
