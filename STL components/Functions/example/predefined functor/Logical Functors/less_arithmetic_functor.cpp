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
    bool operator < (const Money& m)
    {
        if (Dollar > m.Dollar)
            return true;
        if (Dollar==m.Dollar)
            if (Cent > m.Cent)
                return true;
        return false;
    }
};
int main()
{
    int x = 10, y = 20;
    less<> num; //same as less<int> num / less<void> num
    if(num(x,y))
    {
        cout<<"x = "<<x<<" is less than "<<"y = "<<y<<endl;
    }
    else
    {
        cout<<"x = "<<x<<" is not less than "<<"y = "<<y<<endl;
    }


    //another example
    Money m1{ 5, 40 };
    Money m2{ 4, 50 };
    less<> g;
    //less<void> g; //Same as above
    //less<Money> g // Same as above
    if(g(m1,m2))
    {
        cout<<m1.Dollar<<" Dollar "<<m1.Cent<<" Cent is less than "<< m2.Dollar<<" Dollar "<<m2.Cent<<" Cent"<<endl;
    }
    else
    {
        cout<<m1.Dollar<<" Dollar "<<m1.Cent<<" Cent is not less than "<<m2.Dollar<<" Dollar "<<m2.Cent<<" Cent"<<endl;
    }


    //output:
    //    x = 10 is less than y = 20
    //    5 Dollar 40 Cent is less than 4 Dollar 50 Cent
}


