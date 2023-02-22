#include<iostream>
#include<list>
using namespace std;

int main()
{

//for taking user input in list
    list<int> v;
    int x, len;
    cout<<"enter the length of list: ";
    cin>>len;

    cout<<"list<int> v : \n";
    for(int i=0; i<len; i++)
    {
        cin>>x;
        v.push_back(x);
    }
    cout<<endl;

    cout<<"list<int> v = ";
    for(int i: v)
    {
        cout<<i<<" ";
    }
    cout<<endl;


// initialize in list
    list<int> v1 = {1,2,3,4,5};
    cout<<endl;

    cout<<"list<int> v1 = ";
    for(int i: v1)
    {
        cout<<i<<" ";
    }
    cout<<endl;

    //another example: initialize with all 0's
    list<int> v2(5,0);
    cout<<endl;

    cout<<"\nlist<int> v2 = ";
    for(auto i: v2)
    {
        cout<<i<<" ";
    }
    cout<<endl;



//copy one list to another
    list<int> v3 = {1,2,3,4,5};
    list<int> v4(v3);

    cout<<"\nlist<int> v4 = ";
    for(auto i: v4)
    {
        cout<<i<<" ";
    }
    cout<<endl;



    //output:
    //    enter the length of list: 5
    //    list<int> v :
    //    10
    //    20
    //    30
    //    40
    //    50
    //
    //    list<int> v = 10 20 30 40 50
    //
    //    list<int> v1 = 1 2 3 4 5
    //
    //    list<int> v2 = 0 0 0 0 0
    //
    //    list<int> v4 = 1 2 3 4 5
}
