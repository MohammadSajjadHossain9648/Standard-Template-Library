#include<iostream>
#include<stack>
using namespace std;

int main()
{

//for taking user input in stack
    stack<int> v;
    int x, len;
    cout<<"enter the length of stack: ";
    cin>>len;

    cout<<"stack<int> v : \n";
    for(int i=0; i<len; i++)
    {
        cin>>x;
        v.push(x);
    }
    cout<<endl;

    cout<<"stack<int> v : \n";
    while(!v.empty()) // can be write same as, while(v.empty() == false)
    {
        cout<<v.top()<<"\n";
        v.pop();
    }
    cout<<endl;


// initialize in stack
    // can not initialize by this -> stack <int> v = {10,20,30,40,50};
    stack<int> v1;
    for(auto i:{1,2,5,4,3})
    {
        v1.push(i);
    }
    cout<<endl;

    cout<<"stack<int> v1 : \n";
    while(!v1.empty())
    {
        cout<<v1.top()<<"\n";
        v1.pop();
    }

    //or
    stack<int> v2;
    v2.push(6);
    v2.push(7);
    v2.push(8);
    v2.push(9);
    v2.push(10);

    cout<<"\nstack<int> v2 : \n";
    while(!v2.empty())
    {
        cout<<v2.top()<<"\n";
        v2.pop();
    }

    //or can be write same as use emplace instead of push
    stack<int> v3;
    v3.emplace(6);
    v3.emplace(7);
    v3.emplace(8);
    v3.emplace(9);
    v3.emplace(10);

    cout<<"\nstack<int> v3 : \n";
    while(!v3.empty())
    {
        cout<<v3.top()<<"\n";
        v3.pop();
    }

    //output:
    //    enter the length of stack: 5
    //    stack<int> v :
    //    10
    //    20
    //    30
    //    40
    //    50
    //
    //    stack<int> v :
    //    50
    //    40
    //    30
    //    20
    //    10
    //
    //
    //    stack<int> v1 :
    //    3
    //    4
    //    5
    //    2
    //    1
    //
    //    stack<int> v2 :
    //    10
    //    9
    //    8
    //    7
    //    6
    //
    //    stack<int> v3 :
    //    10
    //    9
    //    8
    //    7
    //    6
}
