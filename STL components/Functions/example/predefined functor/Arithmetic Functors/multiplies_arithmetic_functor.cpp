#include<iostream>
#include<functional>
using namespace std;
/*
    to know more: https://www.geeksforgeeks.org/functors-in-cpp/
                  https://www.programiz.com/cpp-programming/functors
                  https://www.go4expert.com/articles/cpp-stl-functors-t34696/
                  https://www.technical-recipes.com/2011/using-function-objects-functors-c/
                  https://www.quantstart.com/articles/Function-Objects-Functors-in-C-Part-1/
                  https://learn.microsoft.com/en-us/cpp/standard-library/function-objects-in-the-stl?view=msvc-170
*/
struct Money
{
    int Doller;
    int Cent;
    Money& operator*(int m)
    {
        int d = (Cent*m) / 100;
        Cent = (Cent*m) % 100;
        Doller *= m;
        Doller += d;
        return *this;

    }

};
int main()
{
    int x = 20, y = 10;
    multiplies<int> mul1; // Adds two int objects
    multiplies<> mul2;// default type is void, so template specialization used
    multiplies<void> mul3; // template specialization used

    cout<<mul1(x, y)<<endl;
    cout<<mul2(x+10, y+10)<<endl;
    cout<<mul3(x*2, y*2)<<endl; // same as multiplies<void> ()(x*2, y*2)

    cout<<multiplies<int>()(5,10)<<endl; // Explicit type as the template argument
    cout<<multiplies<void>()(5, 100)<<endl; // template specialization used, type is auto deduced from the arguments

    Money m{ 3,40 };
    m=multiplies<>()(m, 4);
    cout<<m.Doller <<" Doller "<<m.Cent<<" Cent"<<endl; // Default template argument is void

    //output:
    //    200
    //    600
    //    800
    //    50
    //    500
    //    13 Doller 60 Cent
}


