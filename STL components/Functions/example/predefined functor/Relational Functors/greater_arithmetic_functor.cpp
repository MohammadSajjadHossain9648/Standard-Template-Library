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
    bool operator > (const Money& m)
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
    int x = 20, y = 10;
    greater<> num; //same as greater<int> num / greater<void> num
    if(num(x,y))
    {
        cout<<"x = "<<x<<" is greater than "<<"y = "<<y<<endl;
    }
    else
    {
        cout<<"x = "<<x<<" is not greater than "<<"y = "<<y<<endl;
    }

    
//another example
    Money m1{ 5, 40 };
    Money m2{ 4, 50 };
    greater<> g;
    //greater<void> g; //Same as above
    //greater<Money> g // Same as above
    if(g(m1,m2))
    {
        cout<<m1.Dollar<<" Dollar "<<m1.Cent<<" Cent is greater than "<< m2.Dollar<<" Dollar "<<m2.Cent<<" Cent"<<endl;
    }
    else
    {
        cout<<m1.Dollar<<" Dollar "<<m1.Cent<<" Cent is not greater than "<<m2.Dollar<<" Dollar "<<m2.Cent<<" Cent"<<endl;
    }

    //output:
    //    x = 20 is greater than y = 10
    //    5 Dollar 40 Cent is greater than 4 Dollar 50 Cent
}


