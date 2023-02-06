#include<iostream>
#include<utility>
using namespace std;

int main()
{
    pair < pair < int, int >, int > p1;
    p1 = make_pair(make_pair(1, 2), 3);

    cout<<"Printing elements of nested pair: ";
    cout<<p1.first.first<<" "<<p1.first.second<<" "<<p1.second<<endl;
    return 0;

    //output:
    //  Printing elements of nested pair: 1 2 3
}
