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
    Modifiers:
    1.assign() – It assigns new value to the string elements by replacing old ones
    2.push_back() – It is used to input a character at the end of the string.
    3.pop_back() – It is used to delete the last character from the string.
    4.insert()/append() – It inserts new elements before the element at the specified position
    5.erase() – It is used to remove elements from a container from the specified position or range.
    6.swap() – It is used to swap the contents of one string with another string of same type. Sizes may differ.
    7.clear() – It is used to remove all the elements of the string container
    8.replace() - It is used to replace portion of string.
*/
int main()
{
    // Assign string
    string s = "hello";

//assign
    // fill the array with 'h' five times
    s.assign(5, 'h'); // same as fill constructor, string s(5, 10); -> here 5 is size, h is value

    cout<<"The string elements are: ";
    for (auto i = 0; i < s.size(); i++)
        cout<<s[i]<<" ";
    cout<<endl;

    //another example
    string str;
    string base="The quick brown fox jumps over a lazy dog.";

    // used in the same order as described above:
    str.assign(base);
    cout<<str<<'\n';

    str.assign(base,10,9);
    cout<<str<<'\n';         // "brown fox"

    str.assign("pangrams are cool",7);
    cout<<str<<'\n';         // "pangram"

    str.assign("c-string");
    cout<<str<<'\n';         // "c-string"

    str.assign(10,'*');
    cout<<str<<'\n';         // "**********"

    str.assign<int, char>(10,0x2D); //same as str.assign<int, int>(10,0x2D);
    cout<<str<<'\n';         // "----------"

    str.assign(base.begin()+16,base.end()-12);
    cout<<str<<'\n';         // "fox jumps over"



//pushback & popback
    // inserts '.' to the last position
    s = "i am new";
    s.push_back('.');
    int n = s.size();
    cout<<"\nThe last element is: "<<s[n - 1];

    // removes last element
    s.pop_back();

    // prints the string
    cout<<"\nThe string elements are: ";
    for (auto i = 0; i < s.size(); i++)
        cout<<s[i]<<" ";




//insert(only take character to insert) & append(only take string to insert)
    s = "i am new";
    // inserts * at the beginning
    s.insert(s.begin(), '*');
    cout<<"\nafter insert '*' -> string s = "<<s;



    //append(only take string to insert)
    string str5 = "hello ";
    string str6 = "world";
    // Appends str6 in str5
    str5.append(str6); //same as  str5.append("world");
    cout<<"\nUsing append() : string str5 = "<<str5<<endl;


    //same as above one
    str5 = "hello ";
    // Appends 5 characters from 0th index of str5 to str6
    str5.append("world");
    cout<<"\nUsing append() : string str5 = "<<str5<<endl;



    str5 = "jack ";
    str6 = "hello world";
    // Appends 5 characters from 0th index of str5 to str6
    str5.append(str6, 0, 5);
    cout<<"\nUsing append() : string str5 = "<<str5<<endl;




    str5 = "world of ";
    // Appends 5 characters from 0th index of str5 to str6
    str5.append("geeksforgeeks", 5);
    cout<<"\nUsing append() : string str5 = "<<str5<<endl;



    str5 = "#####";
    // Appends 5 characters from 0th index of str5 to str6
    str5.append(5, '*');
    cout<<"\nUsing append() : string str5 = "<<str5<<endl;



    str5 = "world of ";
    str6 = "geeksforgeeks";
    str5.append(str6, 5);
    cout<<"\nUsing append() : string str5 = "<<str5<<endl;


    str5 = "print 10 and then 5 more";
    str5.append(10u,'.');                         // ".........."
    str5.append(str5.begin()+8,str5.end());       // " and then 5 more"
    str5.append<int, int>(5,0x2E);                // "....."
    cout<<"\nUsing append() : string str5 = "<<str5<<endl;




//erase & clear
    // removes the first element
    s.erase(s.begin());
    cout<<"\nThe first element is: "<<s[0]<<endl;

    s = "This is an example sentence.";
    cout<<s<<'\n';

    s.erase(10,8);
    cout<<s<<'\n';

    s.erase(s.begin()+9);
    cout<<s<<'\n';

    s.erase(s.begin()+5, s.end()-9);
    cout<<s<<'\n';


    // erases the string
    s.clear();
    cout<<"\nstring size after erase(): "<<s.size();



//swap
    string s1 = "this is s1 string", s2 = "this is s2 string";

    cout<<"\n\nstring 1: "<<s1;
    cout<<"\n\nstring 2: "<<s2;

    // Swaps s1 and s2
    s1.swap(s2);

    cout<<"\nAfter Swap \nstring 1: "<<s1;
    cout<<"\nstring 2: "<<s2;




//replace
    string base1="this is a test string.";
    string str2="n example";
    string str3="sample phrase";
    string str4="useful.";

    // replace signatures used in the same order as described above:

    // Using positions:                 0123456789*123456789*12345
    string str1=base1;                  // "this is a test str1ing."

    // Replaces 5 characters ( test) from 9th index by str2
    str1.replace(9,5,str2);          // "this is an example string." (1)
    // Replaces 6 characters from 19th index of str1 with 6 characters from 7th of str3
    str1.replace(19,6,str3,7,6);     // "this is an example phrase." (2)
    // Replaces 10 characters from 8th index with "just a"
    str1.replace(8,10,"just a");     // "this is just a phrase."     (3)
    // Replaces 6 characters from 8th index of str1 with 7 characters from string "a shorty"
    str1.replace(8,6,"a shorty",7);  // "this is a short phrase."    (4)
    // Replaces 1 character from 22th index of str1 with 3 copies of '!'
    str1.replace(22,1,3,'!');        // "this is a short phrase!!!"  (5)

    // Using iterators:                                               0123456789*123456789*
    str1.replace(str1.begin(),str1.end()-3,str3);                    // "sample phrase!!!"      (1)
    str1.replace(str1.begin(),str1.begin()+6,"replace");             // "replace phrase!!!"     (3)
    str1.replace(str1.begin()+8,str1.begin()+14,"is coolness",7);    // "replace is cool!!!"    (4)
    str1.replace(str1.begin()+12,str1.end()-4,4,'o');                // "replace is cooool!!!"  (5)
    str1.replace(str1.begin()+11,str1.end(),str4.begin(),str4.end());// "replace is useful."    (6)
    cout<<'\n'<<str1<<'\n';



    //output:
    //    The string elements are: h h h h h
    //    The quick brown fox jumps over a lazy dog.
    //    brown fox
    //    pangram
    //    c-string
    //    **********
    //    ----------
    //    fox jumps over
    //
    //    The last element is: .
    //    The string elements are: i   a m   n e w
    //    after insert '*' -> string s = *i am new
    //    Using append() : string str5 = hello world
    //
    //    Using append() : string str5 = hello world
    //
    //    Using append() : string str5 = jack hello
    //
    //    Using append() : string str5 = world of geeks
    //
    //    Using append() : string str5 = #####*****
    //
    //    Using append() : string str5 = world of forgeeks
    //
    //    Using append() : string str5 = print 10 and then 5 more.......... and then 5 more...............
    //
    //    The first element is: i
    //    This is an example sentence.
    //    This is an sentence.
    //    This is a sentence.
    //    This sentence.
    //
    //    string size after erase(): 0
    //
    //    string 1: this is s1 string
    //
    //    string 2: this is s2 string
    //    After Swap
    //    string 1: this is s2 string
    //    string 2: this is s1 string
    //    replace is useful.

}
