#include<iostream>
#include<deque>
using namespace std;
/*
    to know more: https://www.geeksforgeeks.org/the-c-standard-template-library-stl/
                  https://www.studytonight.com/cpp/stl/
                  https://www.simplilearn.com/tutorials/cpp-tutorial/cpp-standard-template-library#:~:text=C%2B%2B%20STL%20(standard%20template%20library)%20is%20a%20software%20library%20for,%2C%20algorithms%2C%20and%20function%20objects.
                  https://www.studytonight.com/cpp/stl/stl-container-deque
                  https://www.geeksforgeeks.org/deque-cpp-stl/
                  https://iq.opengenus.org/initialize-deque-in-cpp-stl/
*/
int main()
{

//for taking user input in deque
    deque<int> v;
    int x, len;
    cout<<"enter the length of deque: ";
    cin>>len;

    cout<<"deque<int> v : \n";
    for(int i=0; i<len; i++)
    {
        cin>>x;
        v.push_back(x);
    }
    cout<<endl;

    cout<<"deque<int> v = ";
    for(int i: v)
    {
        cout<<i<<" ";
    }
    cout<<endl;


// initialize in deque
    deque<int> v1 = {1,2,3,4,5,6,7,8,9,10}; //same as, deque<int, 10> v1 {1,2,3,4,5,6,7,8,9,10};

    cout<<"deque<int> v1 = ";
    for(auto i: v1)
    {
        cout<<i<<" ";
    }
    cout<<endl;



    //output:
    //    enter the length of deque: 5
    //    deque<int> v :
    //    10
    //    20
    //    30
    //    40
    //    50
    //
    //    deque<int> v = 10 20 30 40 50
    //
    //    deque<int> v1 = 1 2 3 4 5 6 7 8 9 10
}
