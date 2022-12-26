#include<iostream>
using namespace std;

template<class T>
void swapNumber(T &a,T &b)
{
    T temp;
    temp=a;
    a=b;
    b=temp;
}

main()
{
    int a=10,b=20;
    double x=20.3,y=55.3;

    cout<<"Before Swap"<<endl;
    cout<<endl<<"A="<<a<<"\t"<<"B="<<b;
    cout<<endl<<"X="<<x<<"\t"<<"B="<<y;

    swapNumber(a,b);
    swapNumber(x,y);

    cout<<endl<<endl<<"After Swap"<<endl;
    cout<<endl<<"A="<<a<<"\t"<<"B="<<b;
    cout<<endl<<"X="<<x<<"\t"<<"B="<<y;

    return 0;

    //output:
    //    Before Swap
    //
    //    A=10    B=20
    //    X=20.3  B=55.3
    //
    //    After Swap
    //
    //    A=20    B=10
    //    X=55.3  B=20.3
}
