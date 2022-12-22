#include<iostream>
using namespace std;

template<class T>
void show(T a,T b)
{
    cout<<"a = "<<a<<" & b = "<<b<<endl;
}

main()
{
    show(2,5);
    show(2.6,7.6);
    return 0;


    //output:
    //    a = 2 & b = 5
    //    a = 2.6 & b = 7.6
}

/* it is a short form of this code and remove function overloading

    // Eg: Let us recall the concept of function overloading
    #include<iostream>
    using namespace std;

    void show(int a,int b)
    {
        cout<<"a="<<a<<endl;
        cout<<"b="<<b<<endl;
    }

    void show(double a,double b)
    {
        cout<<"a="<<a<<endl;
        cout<<"b="<<b<<endl;
    }

    main()
    {
        show(2,5);
        show(2.6,7.6);
        return 0;
    }
*/
