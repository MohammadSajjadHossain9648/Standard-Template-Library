#include<iostream>
#include<array>
using namespace std;

int main()
{

//for taking user input in array
    array<int, 5> v;

    cout<<"array<int, 5> v : \n";
    for(int i=0; i<5; i++)
    {
        cin>>v[i];
    }
    cout<<endl;

    cout<<"array<int, 5> v = ";
    for(int i: v)
    {
        cout<<i<<" ";
    }
    cout<<endl;


// initialize in array
    array<int, 10> v1 = {1,2,3,4,5,6,7,8,9,10}; //same as, array<int, 10> v1 {1,2,3,4,5,6,7,8,9,10};

    cout<<"array<int, 10> v1 = ";
    for(auto i: v1)
    {
        cout<<i<<" ";
    }
    cout<<endl;



    //output:
    //    array<int, 5> v :
    //    10
    //    20
    //    30
    //    40
    //    50
    //
    //    array<int, 5> v = 10 20 30 40 50
    //    array<int, 10> v1 = 1 2 3 4 5 6 7 8 9 10
}
