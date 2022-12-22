#include<iostream>
using namespace std;

template<class T>
T getMax(T a,T b)
{
    T result;
    result = (a>b) ? a : b;
    return result;

    /* can be write in one line
    return (a>b) ? a : b;
    */
}

main()
{
    cout<<"getMax(2, 5): "<<getMax(2,5)<<endl;
    cout<<"getMax(2.6, 7.6): "<<getMax(2.6,7.6)<<endl;
    return 0;

    //output:
    //    getMax(2, 5): 5
    //    getMax(2.6, 7.6): 7.6
}
