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
    bool operator <= (const Money& m)
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
    less_equal<> num; //same as less_equal<int> num / less_equal<void> num
    if(num(x,y))
    {
        cout<<"x = "<<x<<" is less equal than "<<"y = "<<y<<endl;
    }
    else
    {
        cout<<"x = "<<x<<" is not less equal than "<<"y = "<<y<<endl;
    }


    //output:
    //    x = 20 is not less equal than y = 10
}


