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
    Money& operator/(int m)
    {
        int d = Doller%m;
        Doller = Doller / m;
        Cent += d * 100;
        Cent = Cent / m;
        return *this;
    }

};
int main()
{
    int x = 20, y = 10;
    divides<int> div1; // Adds two int objects
    divides<> div2;// default type is void, so template specialization used
    divides<void> div3; // template specialization used

    cout<<div1(x, y)<<endl;
    cout<<div2(x+10, y+10)<<endl;
    cout<<div3(x*2, y*2)<<endl; // same as divides<void> ()(x*2, y*2)

    cout<<divides<int>()(15,10)<<endl; // Explicit type as the template argument
    cout<<divides<void>()(500, 100)<<endl; // template specialization used, type is auto deduced from the arguments

    Money m{ 5,40 };
    m=divides<>()(m, 4);
    cout<<m.Doller <<" Doller "<<m.Cent<<" Cent"<<endl; // Default template argument is void
    

    //output:
    //    2
    //    1
    //    2
    //    1
    //    5
    //    1 Doller 35 Cent
}


