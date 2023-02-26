#include<iostream>
#include<vector>
using namespace std;

int main()
{
//for taking user input in vector
    vector<int> v;
    int x, len;
    cout<<"enter the length of vector: ";
    cin>>len;

    cout<<"\nvector<int> v : \n";
    for(int i=0; i<len; i++)
    {
        cin>>x;
        v.push_back(x);
    }
    cout<<endl;

    cout<<"\nvector<int> v = ";
    for(auto i: v) //same as for(int i: v)
    {
        cout<<i<<" ";
    }
    cout<<endl;


// initialize in vector
    vector<int> v1 = {1,2,3,4,5};

    cout<<"\nvector<int> v1 = ";
    for(auto i: v1)
    {
        cout<<i<<" ";
    }
    cout<<endl;


    //another example: initialize with all 0's
    vector<int> v2(5,0);
    cout<<endl;

    cout<<"\nvector<int> v2 = ";
    for(auto i: v2)
    {
        cout<<i<<" ";
    }
    cout<<endl;


//copy one vector to another
    vector<int> v3 = {1,2,3,4,5};
    vector<int> v4(v3);

    cout<<"\nvector<int> v4 = ";
    for(auto i: v4)
    {
        cout<<i<<" ";
    }
    cout<<endl;

    //output:
    //    enter the length of vector: 5
    //    vector<int> v :
    //    10
    //    20
    //    30
    //    40
    //    50
    //
    //    vector<int> v = 10 20 30 40 50
    //
    //    vector<int> v1 = 1 2 3 4 5
    //
    //    vector<int> v2 = 0 0 0 0 0
    //
    //    vector<int> v4 = 1 2 3 4 5
}
