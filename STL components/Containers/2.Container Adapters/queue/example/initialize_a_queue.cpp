#include<iostream>
#include<queue>
using namespace std;

int main()
{

//for taking user input in queue
    queue<int> v;
    int x, len;
    cout<<"enter the length of queue: ";
    cin>>len;

    cout<<"queue<int> v : \n";
    for(int i=0; i<len; i++)
    {
        cin>>x;
        v.push(x);
    }
    cout<<endl;

    cout<<"queue<int> v = ";
    while(!v.empty()) // can be write same as, while(v.empty() == false)
    {
        cout<<v.front()<<" ";
        v.pop();
    }
    cout<<endl;


// initialize in queue
    // can not initialize by this -> queue <int> v = {10,20,30,40,50};
    queue<int> v1;
    for(auto i:{1,2,3,4,5})
    {
        v1.push(i);
    }
    cout<<endl;

    cout<<"queue<int> v1 = ";
    while(!v1.empty())
    {
        cout<<v1.front()<<" ";
        v1.pop();
    }

    //or
    queue<int> v2;
    v2.push(6);
    v2.push(7);
    v2.push(8);
    v2.push(9);
    v2.push(10);

    cout<<"\nqueue<int> v2 = ";
    while(!v2.empty())
    {
        cout<<v2.front()<<" ";
        v2.pop();
    }

    //or can be write same as use emplace instead of push
    queue<int> v3;
    v3.emplace(6);
    v3.emplace(7);
    v3.emplace(8);
    v3.emplace(9);
    v3.emplace(10);

    cout<<"\nqueue<int> v3 = ";
    while(!v3.empty())
    {
        cout<<v3.front()<<" ";
        v3.pop();
    }



    //output:
    //    enter the length of queue: 5
    //    queue<int> v :
    //    10
    //    20
    //    30
    //    40
    //    50
    //
    //    queue<int> v = 10 20 30 40 50
    //
    //    queue<int> v1 = 1 2 3 4 5
    //    queue<int> v2 = 6 7 8 9 10
    //    queue<int> v3 = 6 7 8 9 10
}
