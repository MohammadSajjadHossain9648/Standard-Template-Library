#include<iostream>
#include<forward_list>
using namespace std;

int main()
{

//for taking user input in forward_list
    forward_list<int> v;
    int x, len;
    cout<<"enter the length of forward_list: ";
    cin>>len;

    cout<<"forward_list<int> v : \n";
    for(int i=0; i<len; i++)
    {
        cin>>x;
        v.push_front(x);
    }
    cout<<endl;

    cout<<"forward_list<int> v = ";
    for(int i: v)
    {
        cout<<i<<" ";
    }
    cout<<endl;


// initialize in forward_list
    forward_list<int> v1 = {1,2,3,4,5};
    cout<<endl;

    cout<<"forward_list<int> v1 = ";
    for(int i: v1)
    {
        cout<<i<<" ";
    }
    cout<<endl;


    //output:
    //    enter the length of forward_list: 5
    //    forward_list<int> v :
    //    10
    //    20
    //    30
    //    40
    //    50
    //
    //    forward_list<int> v = 50 40 30 20 10
    //
    //    forward_list<int> v1 = 1 2 3 4 5
}
