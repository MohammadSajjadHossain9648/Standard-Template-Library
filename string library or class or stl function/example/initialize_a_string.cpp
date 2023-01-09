#include<iostream>
#include<string>
using namespace std;
/*
    to know more: https://github.com/MohammadSajjadHossain9648/Basic-of-Cplusplus/blob/main/cin(input)%20in%20c%2B%2B/cin_vs_cin.get_vs_cin.getline.cpp
                  https://github.com/MohammadSajjadHossain9648/Basic-of-Cplusplus/tree/main/string%20in%20c%2B%2B/string%20basic
                  https://github.com/MohammadSajjadHossain9648/Basic-of-Cplusplus/tree/main/cin(input)%20in%20c%2B%2B
                  https://github.com/MohammadSajjadHossain9648/Basic-of-Cplusplus/tree/main/array%20of%20int%2C%20char%2C%20string/basic/introduction
                  https://github.com/MohammadSajjadHossain9648/Basic-of-Cplusplus/blob/main/string%20in%20c%2B%2B/overview_code_for_string.cpp
*/
/*
    string and char array are same. Strings are objects that represent sequences of characters.
*/
int main()
{
//for taking user input in string or char array
    string s;
    cout<<"enter the string: ";
    getline(cin,s);
    cout<<"string s = "<<s<<endl; //take whole sentence

    /*
    string s;
    cout<<"enter the string: ";
    cin>>s;
    cout<<"string s = "<<s<<endl; //only take single word
    */

    cin.ignore();

    char ch[100];
    int len;
    cout<<"\nenter the character length: ";
    cin>>len;
    ch[len];

    //it is efficient for single char input
    //cin>>ch; //it take space -> len = 5, input =  tige r, output = tige
    cout<<"\nenter the string: ";
    for(int i=0; i<len; i++)
    {
        cin>>ch[i]; //it take space -> len = 5, input =  tige r, output = tiger
    }

    //print the char array
    cout<<"\nchar ch[] = "<<ch<<endl;

    //or can be print
    cout<<"\nchar ch[] = ";
    for(int i=0; i<len; i++)
    {
        cout<<ch[i]<<" ";
    }
    cout<<endl;


// initialize in string or char array
    string s1 = "i am new"; // same as next one -> char ch1[] = "i am new";
    //or, write same as -> string s1 ("i am new");

    char ch1[] = "i am new";
    //or, write same as -> char ch1[]/char ch1[9] = {'i',' ','a','m',' ','n','e','w','\0'};


    cout<<"\nstring s1 = "<<s1;
    cout<<"\nchar ch1[] = "<<s1;


// another example
    string s2, s3;

    // s2.push_back("hello"); -> give error cause push back only take character
    s2.push_back('h');
    s2.push_back('e');
    s2.push_back('l');
    s2.push_back('l');
    s2.push_back('o');
    cout<<"\nstring s2 = "<<s2<<endl;


    //output:
    //    enter the string: i am new
    //    string s = i am new
    //
    //
    //    enter the character length: 5
    //
    //    enter the string: hello
    //
    //    char ch[] = hello☺
    //
    //    char ch[] = h e l l o
    //
    //    string s1 = i am new
    //    char ch1[] = i am new
    //    string s2 = hello

}
