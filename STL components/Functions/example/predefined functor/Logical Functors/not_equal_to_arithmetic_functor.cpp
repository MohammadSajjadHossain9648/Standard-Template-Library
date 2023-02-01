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
    int Dollar;
    int Cent;
    bool operator != (const Money& m)
    {
        if (Dollar!=m.Dollar || Cent != m.Cent)
            return true;
        return false;
    }
};
int main()
{
    int x = 20, y = 10;
    not_equal_to<> num; //same as not_equal_to<int> num / not_equal_to<void> num
    if(num(x,y))
    {
        cout<<"x = "<<x<<" is not equal to "<<"y = "<<y<<endl;
    }
    else
    {
        cout<<"x = "<<x<<" is equal to "<<"y = "<<y<<endl;
    }


//another example
    Money m1{ 5,40 };
    Money m2{ 5, 40 };
    not_equal_to<> ne;
    //not_equal_to<void> ne; //Same as above
    //not_equal_to<Money> ne // Same as above
    if (ne(m1,m2))
    {
        cout<<m1.Dollar<<" Dollar "<<m1.Cent<<" Cent is not equal to "<< m2.Dollar<<" Dollar "<<m2.Cent<<" Cent"<<endl;
    }
    else
    {
        cout<<m1.Dollar<<" Dollar "<<m1.Cent<<" Cent is equal to "<<m2.Dollar<<" Dollar "<<m2.Cent<<" Cent"<<endl;
    }


    //output:
    //    x = 20 is not equal to y = 10
    //    5 Dollar 40 Cent is equal to 5 Dollar 40 Cent
}


