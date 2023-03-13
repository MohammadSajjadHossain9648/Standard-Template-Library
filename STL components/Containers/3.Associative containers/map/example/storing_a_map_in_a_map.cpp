#include<iostream>
#include<map>
using namespace std;
/*
    to know more: https://www.geeksforgeeks.org/the-c-standard-template-library-stl/
                  https://www.studytonight.com/cpp/stl/
                  https://www.simplilearn.com/tutorials/cpp-tutorial/cpp-standard-template-library#:~:text=C%2B%2B%20STL%20(standard%20template%20library)%20is%20a%20software%20library%20for,%2C%20algorithms%2C%20and%20function%20objects.
                  https://www.mygreatlearning.com/blog/map-in-cpp/
                  https://www.javatpoint.com/cpp-map
                  https://www.scaler.com/topics/cpp/map-in-cpp/
                  https://cplusplus.com/reference/map/map/
*/
/*
    Storing a Map in a Map in C++?
    You can store a map inside a map. Usually, when we have both the key and value as integers we declare a map as
        map<int,int>mp;

    If we want the value to be another map, we can declare it as
        map<int,map<int,int>>mp;

    This means that now we have a map where the key is an integer while the value elements will be another map
    that can store integer key-value pairs. You can modify the map according to your program needs and even have
    a vector or map inside a map.

    For example, we can have something like:
        map<vector<int>,map<int,int>> mp;
    or something like
        map<set<int>,string>> mp;
*/
int main()
{
    //create map inside a map
    map<int, map<int, int>>mp;

    //assign values to the map elements
    for (int i = 1; i <= 4; i++)
    {
        for (int j = 1; j <= 4; j++)
        {
            //mp[i][j] refers to the key for the first map being i and the second key being j
            mp[i][j] = i * j;
        }
    }

    //access values just like in ordinary map using the [] operator twice
    cout << mp[1][2] << endl;
    cout << mp[2][3] << endl;

    //you can also access the map corresponding to a given first key
    for (auto it : mp[1])
    {
        cout << it.second << " ";
    }
}
