#include<iostream>
#include<queue>
using namespace std;
/*
    to know more: https://www.geeksforgeeks.org/the-c-standard-template-library-stl/
                  https://www.studytonight.com/cpp/stl/
                  https://www.simplilearn.com/tutorials/cpp-tutorial/cpp-standard-template-library#:~:text=C%2B%2B%20STL%20(standard%20template%20library)%20is%20a%20software%20library%20for,%2C%20algorithms%2C%20and%20function%20objects.
                  https://www.studytonight.com/cpp/stl/stl-container-queue
*/
int main()
{
    queue <int> v;
    for(auto i:{10,20,30,40,50})
    {
        v.push(i);
    }
    cout<<endl;

    cout<<"Size : "<<v.size();

    // checks if the queue is empty or not
    if (v.empty() == false)
        cout<<"\nqueue is not empty";
    else
        cout<<"\nqueue is empty";


    return 0;

    //output:
    //    Size : 5
    //    queue is not empty
}
