#include<iostream>
#include<set>
using namespace std;
/*
    Element access/Observers:
    (Returns the object that determines how the elements in the multiset are ordered (‘<‘ by default).)
    1.key_comp() - Return a copy of key comparison object.
    2.value_comp() - Return a copy of value comparison object.

    **always remember that key_comp and value_comp both are same in use.

    rules:
    1.compare two values in ascending order:
    compare(x1,x2) -> if(x1<x2), print 1 which is true. otherwise, print 0 which is false
    2.compare two values in descending order:
    compare(x1,x2) -> if(x1>x2), print 1 which is true. otherwise, print 0 which is false
    and also never forget to use greater<int>
*/
int main()
{
    // compare two values in ascending order
    // compare(x1,x2) -> if(x1<x2), print 1 which is true. otherwise, print 0 which is false
    cout<<"compare two values in ascending order(x1<x2) by using key_comp and value_comp."<<endl;
    multiset<int> m1;
    multiset<int> :: key_compare compare1 = m1.key_comp();

    cout<<"Compare keys (1 is true and 0 is false), compare1(2,3): "<<compare1(2,3)<<endl;
    cout<<"Compare keys (1 is true and 0 is false), compare1(3,2): "<<compare1(3,2)<<endl;

    multiset<int> m2;
    multiset<int> :: value_compare compare2 = m2.value_comp();

    cout<<"Compare values (1 is true and 0 is false), compare2(2,3): "<<compare2(2,3)<<endl;
    cout<<"Compare values (1 is true and 0 is false), compare2(3,2): "<<compare2(3,2)<<endl<<endl;


    // compare two values in descending order
    // compare(x1,x2) -> if(x1>x2), print 1 which is true. otherwise, print 0 which is false
    // and never forget to use greater<int>
    cout<<"compare two values in descending order(x1>x2) by using key_comp and value_comp."<<endl;
    multiset<int, greater<int>> m3;
    multiset<int, greater<int>> :: key_compare compare3 = m3.key_comp();

    cout<<"Compare keys (1 is true and 0 is false), compare3(2,3): "<<compare3(2,3)<<endl;
    cout<<"Compare keys (1 is true and 0 is false), compare3(3,2): "<<compare3(3,2)<<endl;

    multiset<int, greater<int>> m4;
    multiset<int, greater<int>> :: value_compare compare4 = m4.value_comp();

    cout<<"Compare values (1 is true and 0 is false), compare4(2,3): "<<compare4(2,3)<<endl;
    cout<<"Compare values (1 is true and 0 is false), compare4(3,2): "<<compare4(3,2)<<endl<<endl;


//another example: can be write above code same way like we take first multiset m1 and m4
    //same code as multiset m1
    cout<<"compare two values in ascending order(x1<x2) by using key_comp and value_comp."<<endl;
    multiset<int> m5;
    multiset<int> :: key_compare compare5 = m5.key_comp();

    bool result1 = compare5(2,3);
    bool result2 = compare5(3,2);

    if(result1 == true)
    {
        cout<<"Compare keys (1 is true and 0 is false), compare5(2,3): "<<result1<<endl;
    }
    else
    {
        cout<<"Compare keys (1 is true and 0 is false), compare5(2,3): "<<result1<<endl;
    }

    if(result2 == true)
    {
        cout<<"Compare keys (1 is true and 0 is false), compare5(3,2): "<<result2<<endl;
    }
    else
    {
        cout<<"Compare keys (1 is true and 0 is false), compare5(3,2): "<<result2<<endl;
    }


    //same code as multiset m4
    cout<<"compare two values in ascending order(x1>x2) by using key_comp and value_comp."<<endl;
    multiset<int, greater<int>> m6;
    multiset<int, greater<int>> :: value_compare compare6 = m6.value_comp();

    bool result3 = compare6(2,3);
    bool result4 = compare6(3,2);

    if(result3 == true)
    {
        cout<<"Compare keys (1 is true and 0 is false), compare6(2,3): "<<result3<<endl;
    }
    else
    {
        cout<<"Compare keys (1 is true and 0 is false), compare6(2,3): "<<result3<<endl;
    }

    if(result4 == true)
    {
        cout<<"Compare values (1 is true and 0 is false), compare6(3,2): "<<result4<<endl;
    }
    else
    {
        cout<<"Compare values (1 is true and 0 is false), compare6(3,2): "<<result4<<endl;
    }




// another example: check that is multiset in sorted order?
    multiset<int> v = {10,20,30,20,40};
    multiset<int>:: key_compare compare7 = v.key_comp();

    int high = *v.rbegin(); //take last value which is highest value

    cout<<"\nmultiset<int> v = ";
    for(auto i: v)
    {
        if(i<high)
        {
            cout<<i<<" ";
        }
        else
        {
            break;
        }
    }
    cout<<endl;

    return 0;

    //output:
    //    compare two values in ascending order(x1<x2) by usiing key_comp and value_comp.
    //    Compare keys (1 is true and 0 is false), compare1(2,3): 1
    //    Compare keys (1 is true and 0 is false), compare1(3,2): 0
    //    Compare values (1 is true and 0 is false), compare2(2,3): 1
    //    Compare values (1 is true and 0 is false), compare2(3,2): 0
    //
    //    compare two values in descending order(x1>x2) by usiing key_comp and value_comp.
    //    Compare keys (1 is true and 0 is false), compare3(2,3): 0
    //    Compare keys (1 is true and 0 is false), compare3(3,2): 1
    //    Compare values (1 is true and 0 is false), compare4(2,3): 0
    //    Compare values (1 is true and 0 is false), compare4(3,2): 1
    //
    //    compare two values in ascending order(x1<x2) by using key_comp and value_comp.
    //    Compare keys (1 is true and 0 is false), compare5(2,3): 1
    //    Compare keys (1 is true and 0 is false), compare5(3,2): 0
    //    compare two values in ascending order(x1>x2) by using key_comp and value_comp.
    //    Compare keys (1 is true and 0 is false), compare6(2,3): 0
    //    Compare values (1 is true and 0 is false), compare6(3,2): 1
    //
    //    multiset<int> v = 10 20 20 30
}
