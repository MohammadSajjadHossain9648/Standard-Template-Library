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
    Money& operator-()
    {
        Doller = -Doller;
        Cent = -Cent;
        return *this;
    }
};
int main()
{
    int x = 20;
    negate<int> neg1; // Adds two int objects
    negate<> neg2;// default type is void, so template specialization used
    negate<void> neg3; // template specialization used

    cout<<neg1(x)<<endl;
    cout<<neg2(x+10)<<endl;
    cout<<neg3(x*2)<<endl; // same as negate<void> ()(x*2)

    cout<<negate<double>()(15.225)<<endl; // Explicit type as the template argument
    cout<<negate<void>()(500.75)<<endl; // template specialization used, type is auto deduced from the arguments

    Money m{ 5,40 };
    m=-m;
    cout<<m.Doller <<" Doller "<<m.Cent<<" Cent"<<endl; // Default template argument is void

    //output:
    //    -20
    //    -30
    //    -40
    //    -15.225
    //    -500.75
    //    -5 Doller -40 Cent
}


