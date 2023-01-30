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
int main()
{
    string s1 = "Hello ";
    const char* s2 = "World";
    plus<string> stringAdder3; // Adds two string objects
    plus<> stringAdder1;// default type is void, so template specialization used
    plus<void> stringAdder2; // template specialization used

    cout<<stringAdder1(s1,s2)<<endl; //same as cout<<stringAdder1(s1,s2).c_str()<<endl;
    cout<<stringAdder2(s1, s2).c_str()<<endl;
    cout<<stringAdder3(s1, s2).c_str()<<endl;


    int x = 10, y = 20;
    plus<int> sum1; // Adds two int objects
    plus<> sum2;// default type is void, so template specialization used
    plus<void> sum3; // template specialization used

    cout<<sum1(x, y)<<endl;
    cout<<sum2(x+10, y+10)<<endl;
    cout<<sum3(x*2, y*2)<<endl; // same as plus<void> ()(x*2, y*2)

    cout<<plus<int>()(15,10)<<endl; // Explicit type as the template argument
    cout<<plus<void>()(500, 100)<<endl; // template specialization used, type is auto deduced from the arguments


    //output:
    //    Hello World
    //    Hello World
    //    Hello World
    //    30
    //    50
    //    60
    //    25
    //    600
}


