#include<iostream>
#include<queue>
using namespace std;
/*
    always remember: whatever you input in priority_queue, it always stay in descending order.
*/
int main()
{

//for taking user input in priority_queue
    priority_queue<int> v;
    int x, len;
    cout<<"enter the length of priority_queue: ";
    cin>>len;

    cout<<"priority_queue<int> v : \n";
    for(int i=0; i<len; i++)
    {
        cin>>x;
        v.push(x);
    }
    cout<<endl;

    cout<<"priority_queue<int> v = ";
    while(!v.empty()) // can be write same as, while(v.empty() == false)
    {
        cout<<v.top()<<" ";
        v.pop();
    }
    cout<<endl;


// initialize in priority_queue
    // can not initialize by this -> priority_queue <int> v = {10,20,30,40,50};
    priority_queue<int> v1;
    for(auto i:{1,2,5,4,3})
    {
        v1.push(i);
    }
    cout<<endl;

    cout<<"priority_queue<int> v1 = ";
    while(!v1.empty())
    {
        cout<<v1.top()<<" ";
        v1.pop();
    }

    //or
    priority_queue<int> v2;
    v2.push(6);
    v2.push(7);
    v2.push(8);
    v2.push(9);
    v2.push(10);

    cout<<"\npriority_queue<int> v2 = ";
    while(!v2.empty())
    {
        cout<<v2.top()<<" ";
        v2.pop();
    }

    //or can be write same as use emplace instead of push
    priority_queue<int> v3;
    v3.emplace(6);
    v3.emplace(7);
    v3.emplace(8);
    v3.emplace(9);
    v3.emplace(10);

    cout<<"\npriority_queue<int> v3 = ";
    while(!v3.empty())
    {
        cout<<v3.top()<<" ";
        v3.pop();
    }



//queue can initialize in ascending order
// for int
    // Initialising the priority queue in ascending order
    priority_queue<int, vector<int>, greater<int> > pq;

    // Inserting values in priority queue
    pq.push(10);
    pq.push(30);
    pq.push(20);
    pq.push(15);
    pq.push(25);


    cout<<"priority_queue<int, vector<int>, greater<int> > pq = {30, 25, 20, 15, 10}"<<endl;

    cout<<"The priority queue in reverse order is : ";

    // Printing all elements in priority queue
    while(!pq.empty())
    {
        cout<<pq.top()<<" ";
        pq.pop();
    }

//for string
    // Initialising the priority queue in ascending order
    priority_queue<string, vector<string>, greater<string> > pq1;

    // Inserting values in priority queue
    pq1.push("physics");
    pq1.push("chemistry");
    pq1.push("maths");
    pq1.push("socialstudies");
    pq1.push("biology");

    cout<<"\nThe priority queue in reverse order is : ";

    // Printing all elements in priority queue
    while(!pq1.empty())
    {
        cout<<pq1.top()<<" ";
        pq1.pop();
    }

    //output:
    //    enter the length of priority_queue: 5
    //    priority_queue<int> v :
    //    10
    //    20
    //    30
    //    40
    //    50
    //
    //    priority_queue<int> v = 50 40 30 20 10
    //
    //    priority_queue<int> v1 = 5 4 3 2 1
    //    priority_queue<int> v2 = 10 9 8 7 6
    //    priority_queue<int> v3 = 10 9 8 7 6
    //    priority_queue<int, vector<int>, greater<int> > pq = {30, 25, 20, 15, 10}
    //    The priority queue in reverse order is : 10 15 20 25 30
    //    The priority queue in reverse order is : biology chemistry maths physics socialstudies
}
