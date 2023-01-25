#include<iostream>
using namespace std;
/*
    to know more: https://www.geeksforgeeks.org/functors-in-cpp/
                  https://www.programiz.com/cpp-programming/functors
                  https://www.go4expert.com/articles/cpp-stl-functors-t34696/
                  https://www.technical-recipes.com/2011/using-function-objects-functors-c/
                  https://www.quantstart.com/articles/Function-Objects-Functors-in-C-Part-1/
                  https://learn.microsoft.com/en-us/cpp/standard-library/function-objects-in-the-stl?view=msvc-170
*/

class Addition
{
private:
    int number1;
public:

    // constructor to initialize member variable
    Addition(int num)
    {
        number1 = num;
    }

    // overload function call operator
    // and accept two integer arguments, return their sum
    int operator()(int number2)
    {
        return number1 + number2;
    }
};
int main()
{
    // create an object of Addition class
    // initialize member variable(number1) of object with value 100
    Addition add = Addition(100);

    // call the add object
    int sum = add(50);
    cout<<"sum of 100 and 50 is "<<sum<<endl;

    //output: sum of 100 and 50 is 150
}
