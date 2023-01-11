#include<iostream>
#include<string>
#include<cstring>
#include<vector>
#include<algorithm>
using namespace std;
/*
    to know more: https://www.geeksforgeeks.org/stdstring-class-in-c/
                  https://www.geeksforgeeks.org/strings-library-in-cpp-stl/
                  https://cplusplus.com/reference/string/string/
                  https://www.scaler.com/topics/cpp/strings-in-cpp/
*/
/*
    String Operations:
    1.copy() - Copy sequence of characters from string
    2.find() - Find content in string
    3.rfind() - Find last occurrence of content in string
    4.find_first_of() - Find character in string
    5.find_last_of() - Find character in string from the end
    6.find_first_not_of() - Find absence of character in string
    7.find_last_not_of() - Find non-matching character in string from the end
    8.substr() - Generate substring
    9.compare() - It is used to replace portion of string.
    10.data() - Get string data
    11.c_str – Get C string equivalent
    12.get_allocator() – Get allocator
*/
int main()
{
//8.substr
    //example 1:
    string s1 = "geeks";
    // Copy two characters of s1 (starting from position 3)
    string s11 = s1.substr(3, 2);
    cout<<"string s1 = "<<s1<<" and string s11 = "<<s11;


    //example 2: How to get a sub-string after a character?
    string s2 = "dog:cat";
    // Find position of ':' using find()
    int pos1 = s2.find(":");
    // Copy substring after pos1
    string s22 = s2.substr(pos1+1);
    cout<<"\nstring s2 = "<<s2<<" and string s22 = "<<s22;


    //example 3: How to get a sub-string before a character?
    string s3 = "dog:cat";
    // Find position of ':' using find()
    int pos2 = s3.find(":");
    // Copy substring before pos2
    string s33 = s3.substr(0, pos2);
    cout<<"\nstring s3 = "<<s3<<" and string str3 = "<<s33;


    //example 4: Print all substrings of a given string
    string s4 = "abcd";

    cout<<"\nstring s4 = "<<s4<<" and string s44:";
    for(int i=0; i<s4.length(); i++)
    {
        for(int j=0; j<=s4.length()-i; j++)
        {
            cout<<s4.substr(i, j)<<endl;
        }
    }


    //example 5: Maximum and minimum value of all substrings of a string representing a number.
    string s5 = "825";
    vector<int> v;

    cout<<"\nstring s5 = "<<s5<<" and string s55: \n";
    for (int i = 0; i < s5.length(); i++)
    {
        for (int j = 1; j <= s5.length() - i; j++)
        {
            string sub =(s5.substr(i, j));
            int x=stoi(sub); //stoi means convert string to int
            v.push_back(x);
            cout<<x<<endl;
        }
    }

    cout<<"\nmaximum number of all substring is "<<*max_element(v.begin(), v.end());
    cout<<"\nminimum number of all substring is "<<*min_element(v.begin(), v.end());


    //example 6: want to print "think live in details."
    string s6 = "We think in generalities, but we live in details.";

    int pos6 = s6.find("think");
    string s66 = s6.substr(pos6, 5);
    /*
    char s66[6]; //"think" is 5 characters word and one character is for null
    s6.copy(s66, 5, pos6);
    */

    int pos7 = s6.find("live");
    string s77 = s6.substr(pos7, s6.length());

    cout<<endl<<s66<<" "<<s77;






//9.compare
    string str1 = "forGeeks", str2 = "Geeks";
    cout<<"\n\nstring str1 = "<<str1<<" and string str2 = "<<str2;

    //example 1: compare str1 length with another str2
    if( (str1.compare(str2)) == 0)  //can write -> if( (str1.compare("Geeks")) == 0)
        cout<<"\nboth string are equal.";

    else if( (str1.compare(str2)) > 0) //can write -> else if( (str1.compare("Geeks")) > 0)
        cout<<"\nstring str1 is bigger than string str2.";

    else
        cout<<"\nstring str1 is smaller than string str2.";


    //example 2: Compares 5 characters from index number 3 of str1 with str2
    if( (str1.compare(3, 5, str2)) == 0 ) //can write -> str1.compare(3, 5, "Geeks") or str1.compare(str1.length()-5, 5, "Geeks")
        cout<<endl<<str2<<" is in "<<str1;

    else
        cout<<endl<<str2<<" is not in "<<str1;


    //example 3: Compares 5 characters from index number 3 of str1 with 5 characters from index 0 of str2
    if( (str1.compare(3, 5, str2, 0, 5)) == 0 )
        cout<<"\nWelcome to "<<str2<<str1<<" World";

    else
        cout<<"\nStrings didn't match ";

    //note: if you compare full word with another string like str1(after index 3) with full str2 just use example 2
    /* if condition can write in another way:
    1.   str1.compare(3, 5, str2, 0, 5) -> same as note -> str1.compare(3, 5, str2, 5) or str1.compare(3, 5, str2)
    1.1. str1.compare(3, 5, "Geeks", 0, 5) -> same as note -> str1.compare(3, 5, "Geeks", 5) or str1.compare(3, 5, "Geeks")
    2.   str2.compare(0, 5, str1, 3, 5) -> same as note -> str2.compare(5, str1, 3, 5)
    2.1. str2.compare(0, 5, "forGeeks", 3, 5) -> same as note -> str2.compare(5, "forGeeks", 3, 5)
    */


    //another example :
    string str3 ("green apple");
    string str4 ("red apple");

    if(str3.compare(str4) != 0)
        cout<<str3<<" is not "<<str4<<'\n';

    if(str3.compare(6,5,"apple") == 0)
        cout<<"still, "<<str3<<" is an apple\n";

    if(str4.compare(str4.size()-5,5,"apple") == 0) //compare with last 5 characters
        cout<<"and "<<str4<<" is also an apple\n";

    if(str3.compare(6,5,str4,4,5) == 0)
        cout<<"therefore, both are apples\n";





//10.data
    string str5 = "Test string";
    char* cstr1 = "Test string";

    if( str5.length() == strlen(cstr1) )
    {
        cout<<"\nstr5 and cstr1 have the same length.\n";
        if( memcmp (cstr1, str5.data(), str5.length() ) == 0 )
            cout<<"\nstr5 and cstr1 have the same content.\n";
    }




//11.c_str
    string str6 ("Please split this sentence into tokens");

    char * cstr2 = new char [str6.length()+1];
    strcpy (cstr2, str6.c_str());

    // cstr now contains a c-string copy of str6

    char * p = strtok (cstr2," ");
    while (p!=0)
    {
        cout<<p<<'\n';
        p = strtok(NULL," ");
    }

    delete[] cstr2;




//12.get_allocator
    // allocator for string values
    allocator<string> myAllocator;

    // allocate space for three strings
    string* str7 = myAllocator.allocate(3);

    // construct these 3 strings
    myAllocator.construct(str7, "Geeks");
    myAllocator.construct(str7 + 1, "for");
    myAllocator.construct(str7 + 2, "Geeks");

    cout<<endl<<str7[0]<<str7[1]<<str7[2];

    // destroy these 3 strings
    myAllocator.destroy(str7);
    myAllocator.destroy(str7 + 1);
    myAllocator.destroy(str7 + 2);

    // deallocate space for 3 strings
    myAllocator.deallocate(str7, 3);




    //output:
    //    string s1 = geeks and string s11 = ks
    //    string s2 = dog:cat and string s22 = cat
    //    string s3 = dog:cat and string str3 = dog
    //    string s4 = abcd and string s44:
    //    a
    //    ab
    //    abc
    //    abcd
    //
    //    b
    //    bc
    //    bcd
    //
    //    c
    //    cd
    //
    //    d
    //
    //    string s5 = 825 and string s55:
    //    8
    //    82
    //    825
    //    2
    //    25
    //    5
    //
    //    maximum number of all substring is 825
    //    minimum number of all substring is 2
    //    think live in details.
    //
    //    string str1 = forGeeks and string str2 = Geeks
    //    string str1 is bigger than string str2.
    //    Geeks is in forGeeks
    //    Welcome to GeeksforGeeks Worldgreen apple is not red apple
    //    still, green apple is an apple
    //    and red apple is also an apple
    //    therefore, both are apples
    //
    //    str5 and cstr1 have the same length.
    //
    //    str5 and cstr1 have the same content.
    //    Please
    //    split
    //    this
    //    sentence
    //    into
    //    tokens
    //
    //    GeeksforGeeks
}
