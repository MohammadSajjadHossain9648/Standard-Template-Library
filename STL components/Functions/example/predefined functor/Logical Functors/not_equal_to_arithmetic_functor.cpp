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



    //output:
    //    x = 20 is not equal to y = 10
}


