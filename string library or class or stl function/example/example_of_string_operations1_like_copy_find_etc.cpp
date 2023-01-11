#include<iostream>
#include<string>
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
//copy
    string s = "test string....";
    char ch[100];

    size_t len = s.copy(ch, 6, 5); //s.copy(ch, total_no_of_character, starting_index);

    cout<<"string s = "<<s<<endl;
    cout<<"char ch[] = "<<ch<<endl;




//find
    string str1 = "There are two needles in this haystack with needles.";
    string key1 = "needle";

    cout<<"\n\nstring str1 = "<<str1;

    int found1 = str1.find(key1); //same as -> size_t found = str1.find(key);
    if (found1!=string::npos)
        cout<<"\nfirst 'needle' found at: "<<found1;


    found1=str1.find("needle"); //same as above one
    if (found1!=string::npos)
        cout<<"\n'needle' also found at: "<<found1;


    found1=str1.find("needles are small",found1+1,6);
    if (found1!=string::npos)
        cout<<"\nsecond 'needle' found at: "<<found1;


    found1=str1.find('.');
    if (found1!=string::npos)
        cout<<"\nPeriod(.) found at: "<<found1;

    // let's replace the first needle:
    str1.replace(str1.find(key1), key1.length(), "preposition");
    cout<<"\nafter replace, string str1 = "<<str1;





//rfind
    string str2 = "The sixth sick sheik's sixth sheep's sick.";
    string key2 = "sixth";

    cout<<"\n\nstring str2 = "<<str2;

    int found2 = str2.rfind(key2); //same as -> size_t found2 = str2.find(key2);
    if (found2!=string::npos)
        cout<<"\nlast 'sixth' found at: "<<found2;

    found2=str2.rfind("sixth"); //same as above one
    if (found2!=string::npos)
        cout<<"\n'sixth' also found at: "<<found2;

    found2=str2.rfind("sixth are small",found2-1,6);
    if (found2!=string::npos)
        cout<<"\nsecond last 'sixth' found at: "<<found2;


    found2=str2.rfind('.');
    if (found2!=string::npos)
        cout<<"\nPeriod(.) found at: "<<found2;

    // let's replace the last sixth:
    str2.replace(str2.rfind(key2), key2.length(), "seven");
    cout<<"\nafter replace, string str2 = "<<str2;






//find_first_of
    string str3 = "The sixth sick sheik's sixth sheep's sick.";
    string key3 = "aieou"; // find any vowel

    cout<<"\n\nstring str3 = "<<str3;

    int found3 = str3.find_first_of(key3); //same as -> size_t found3 = str3.find_first_of(key3);
    if (found3!=string::npos)
        cout<<"\nfirst vowel found at: "<<found3;


    found3 = str3.find_first_of("aieou"); //same as above one
    if (found3!=string::npos)
        cout<<"\nfirst vowel found at: "<<found3;


    // let's replace all vowels with *:
    found3 = str3.find_first_of(key3);
    while (found3!=string::npos)
    {
        str3[found3]='*';
        found3=str3.find_first_of("aeiou",found3+1);
    }
    cout<<"\nafter replace, string str3 = "<<str3;







//find_last_of
    string str4 = "The sixth sick sheik's sixth sheep's sick.";
    string key4 = "aieou"; // find any vowel

    cout<<"\n\nstring str4 = "<<str4;

    int found4 = str4.find_last_of(key4); //same as -> size_t found4 = str4.find_last_of(key4);
    if (found4!=string::npos)
        cout<<"\nlast vowel found at: "<<found4;


    found4 = str4.find_last_of("aieou"); //same as above one
    if (found4!=string::npos)
        cout<<"\nlast vowel found at: "<<found4;

    // let's replace all vowels with *:
    found4 = str4.find_last_of(key4);
    while (found4!=string::npos)
    {
        str4[found4]='*';
        found4=str4.find_last_of("aeiou",found4-1);
    }
    cout<<"\nafter replace, string str4 = "<<str4;







//find_first_not_of
    string str5 = "The sixth sick sheik's sixth sheep's sick.";
    string key5 = "the seventh";

    cout<<"\n\nstring str5 = "<<str5<<"\ncompare key = "<<key5;

    // Finds first character in str5 which is not present in key5
    int found5 = str5.find_first_not_of(key5); //same as -> size_t found5 = str5.find_first_not_of(key5);
    if (found5!=string::npos)
        cout<<"\nfirst unmatch character found at: "<<found5<<" and character is "<<str5[found5];
    /*can be same way
    int found5 = str5.find_first_not_of(key5); //same as -> size_t found5 = str5.find_first_not_of(key5);
    cout<<"\nfirst unmatch character found at: "<<found5<<" and character is "<<str5[found5];
    */

    // Finds first character in str5 which is not present in "the seventh"
    found5 = str5.find_first_not_of("the seventh"); //same as above one
    if (found5!=string::npos)
        cout<<"\nfirst unmatch character found at: "<<found5<<" and character is "<<str5[found5];

    // Finds first character in str5 which is not present in "T"
    found5 = str5.find_first_not_of('T'); //same as above one
    if (found5!=string::npos)
        cout<<"\nfirst unmatch character found at: "<<found5<<" and character is "<<str5[found5];



    // Finds first character in str5 from index 3 which is not present in key5
    found5 = str5.find_first_not_of(key5, 3);
    if (found5!=string::npos)
        cout<<"\nfirst unmatch character from index 3 found at: "<<found5<<" and character is "<<str5[found5];

    // Finds first character in str5 from index 3 which is not present in key5
    found5 = str5.find_first_not_of("the seventh", 3); //same as above one
    if (found5!=string::npos)
        cout<<"\nfirst unmatch character from index 3 found at: "<<found5<<" and character is "<<str5[found5];

    // Finds first character in str5 from 4th index which is not equal to character 's'
    found5 = str5.find_first_not_of('s', 4); //same as above one
    if (found5!=string::npos)
        cout<<"\nfirst unmatch character from index 4 found at: "<<found5<<" and character is "<<str5[found5];



    // Finds first character in str5 from 4th index which is not equal to any of the first 3 characters from "seven"
    found5 = str5.find_first_not_of("seven", 4, 3);
    if (found5!=string::npos)
        cout<<"\nfirst unmatch character from index 4 found at: "<<found5<<" and character is "<<str5[found5];



    //another example of find_first_not_of
    string s1 = "look for non-alphabetic characters...";
    int index1 = s1.find_first_not_of("abcdefghijklmnopqrstuvwxyz ");

    if (index1!=string::npos)
    {
        cout<<"\nThe first non-alphabetic character is '"<<s1[index1]<<"' at position "<<index1<<'\n';
    }




//find_last_not_of
    string str6 = "The sixth sick sheik's sixth sheep's sick.";
    string key6 = "the seventh";

    cout<<"\n\nstring str6 = "<<str6<<"\ncompare key = "<<key6;

    // Finds last character in str6 which is not present in key6
    int found6 = str6.find_last_not_of(key6); //same as -> size_t found6 = str6.find_last_not_of(key6);
    if (found6!=string::npos)
        cout<<"\nlast unmatch character found at: "<<found6<<" and character is "<<str6[found6];
    /*can be same way
    int found6 = str6.find_last_not_of(key6); //same as -> size_t found6 = str6.find_last_not_of(key6);
    cout<<"\nlast unmatch character found at: "<<found6<<" and character is "<<str6[found6];
    */

    // Finds last character in str6 which is not present in "the seventh"
    found6 = str6.find_last_not_of("the seventh"); //same as above one
    if (found6!=string::npos)
        cout<<"\nlast unmatch character found at: "<<found6<<" and character is "<<str6[found6];

    // Finds last character in str6 which is not present in "T"
    found6 = str6.find_last_not_of('T'); //same as above one
    if (found6!=string::npos)
        cout<<"\nlast unmatch character found at: "<<found6<<" and character is "<<str6[found6];



    // Finds last character in str6 from index 3 which is not present in key6
    found6 = str6.find_last_not_of(key6, 3);
    if (found6!=string::npos)
        cout<<"\nlast unmatch character from index 3 found at: "<<found6<<" and character is "<<str6[found6];

    // Finds last character in str6 from index 3 which is not present in key6
    found6 = str6.find_last_not_of("the seventh", 3); //same as above one
    if (found6!=string::npos)
        cout<<"\nlast unmatch character from index 3 found at: "<<found6<<" and character is "<<str6[found6];

    // Finds last character in str6 from 4th index which is not equal to character 's'
    found6 = str6.find_last_not_of('s', 4); //same as above one
    if (found6!=string::npos)
        cout<<"\nlast unmatch character from index 4 found at: "<<found6<<" and character is "<<str6[found6];



    // Finds last character in str6 from 4th index which is not equal to any of the last 3 characters from "seven"
    found6 = str6.find_last_not_of("seven", 4, 3);
    if (found6!=string::npos)
        cout<<"\nlast unmatch character from index 4 found at: "<<found6<<" and character is "<<str6[found6];


    //anothe example of find_last_not_of
    string s2 = "Please, erase trailing white-spaces   \n";
    int index2 = s2.find_last_not_of("\t\f\v\n\r ");
    cout<<"\n\nstring s2 = "<<s2;

    if (index2!=std::string::npos)
        s2.erase(index2+1);
    else
        s2.clear(); // that means, s2 is all whitespace


    cout<<"string s2 = ["<<s2<<"]";





    //output:
    //    string s = test string....
    //    char ch[] = string
    //
    //
    //    string str1 = There are two needles in this haystack with needles.
    //    first 'needle' found at: 14
    //    'needle' also found at: 14
    //    second 'needle' found at: 44
    //    Period(.) found at: 51
    //    after replace, string str1 = There are two prepositions in this haystack with needles.
    //
    //    string str2 = The sixth sick sheik's sixth sheep's sick.
    //    last 'sixth' found at: 23
    //    'sixth' also found at: 23
    //    second last 'sixth' found at: 4
    //    Period(.) found at: 41
    //    after replace, string str2 = The sixth sick sheik's seven sheep's sick.
    //
    //    string str3 = The sixth sick sheik's sixth sheep's sick.
    //    first vowel found at: 2
    //    first vowel found at: 2
    //    after replace, string str3 = Th* s*xth s*ck sh**k's s*xth sh**p's s*ck.
    //
    //    string str4 = The sixth sick sheik's sixth sheep's sick.
    //    last vowel found at: 38
    //    last vowel found at: 38
    //    after replace, string str4 = Th* s*xth s*ck sh**k's s*xth sh**p's s*ck.
    //
    //    string str5 = The sixth sick sheik's sixth sheep's sick.
    //    compare key = the seventh
    //    first unmatch character found at: 0 and character is T
    //    first unmatch character found at: 0 and character is T
    //    first unmatch character found at: 1 and character is h
    //    first unmatch character from index 3 found at: 5 and character is i
    //    first unmatch character from index 3 found at: 5 and character is i
    //    first unmatch character from index 4 found at: 5 and character is i
    //    first unmatch character from index 4 found at: 5 and character is i
    //    The first non-alphabetic character is '-' at position 12
    //
    //
    //    string str6 = The sixth sick sheik's sixth sheep's sick.
    //    compare key = the seventh
    //    last unmatch character found at: 41 and character is .
    //    last unmatch character found at: 41 and character is .
    //    last unmatch character found at: 41 and character is .
    //    last unmatch character from index 3 found at: 0 and character is T
    //    last unmatch character from index 3 found at: 0 and character is T
    //    last unmatch character from index 4 found at: 3 and character is
    //    last unmatch character from index 4 found at: 3 and character is
    //
    //    string s2 = Please, erase trailing white-spaces
    //    string s2 = [Please, erase trailing white-spaces]
}
