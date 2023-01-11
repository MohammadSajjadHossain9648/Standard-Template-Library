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
    other function:
    1.stod() - convert string to double
    2.stof() - convert string to float
    3.stoi() - convert string to int
    4.stol() - convert string to long int
    5.stold() - convert string to long double
    6.stoll() - convert string to long long
    7.stoul() - convert string to unsigned integer
    8.stoull() - convert string to unsigned long long
    9.to_string() - convert numerical value to string
    10.to_wstring() - convert numerical value to wide string
*/
int main()
{
    string orbits ("365.24 29.53");
    string::size_type sz;     // alias of size_t

//1.stod & 5.stold
    double earth1 = stod(orbits,&sz);
    double moon1 = stod(orbits.substr(sz));
    cout<<"\nusing stod, The moon completes "<<(earth1/moon1)<<" orbits per Earth year.\n";

//2.stof
    float earth2 = stof(orbits,&sz);
    float moon2 = stof(orbits.substr(sz));
    cout<<"\nusing stof, The moon completes "<<(earth2/moon2)<<" orbits per Earth year.\n";

//3.stoi
    string orbits1 ("365 29");
    string::size_type sz1;     // alias of size_t

    int earth3 = stoi(orbits1,&sz1);
    int moon3 = stoi(orbits1.substr(sz1));
    cout<<"\nusing stoi, The moon completes "<<(earth3/moon3)<<" orbits per Earth year.\n\n";


//4.stol
    string str_dec = "1987520";
    string str_hex = "2f04e009";
    string str_bin = "-11101001100100111010";
    string str_auto = "0x7fffff";

    string::size_type sz2;   // alias of size_t

    long li_dec = stol (str_dec,&sz2);
    long li_hex = stol (str_hex,nullptr,16);
    long li_bin = stol (str_bin,nullptr,2);
    long li_auto = stol (str_auto,nullptr,0);

    cout<<str_dec<<": "<<li_dec<<'\n';
    cout<<str_hex<<": "<<li_hex<<'\n';
    cout<<str_bin<<": "<<li_bin<<'\n';
    cout<<str_auto<<": "<<li_auto<<'\n';



//6.stoll & 8.stoull
    string str = "8246821 0xffff 020";

    string::size_type sz3 = 0;   // alias of size_t

    while (!str.empty())
    {
        long long ll = stoll (str,&sz3,0); //unsigned long long ull = stoull (str,&sz3,0);
        cout<<str.substr(0,sz3)<<" interpreted as "<<ll<<'\n';
        str = str.substr(sz3);
    }



//7.stoul
    string str2;
    cout<<"Enter an unsigned number: ";
    getline (cin,str2);
    unsigned long ul = stoul (str2,nullptr,0);
    cout<<"You entered: "<<ul<<'\n';




//9.to_string & 10.to_wstring
    string pi = "pi is " + to_string(3.1415926);
    string perfect = to_string(1+2+4+7+14) + " is a perfect number";
    cout<<pi<<'\n';
    cout<<perfect<<'\n';



    //output:
    //
    //    using stod, The moon completes 12.3684 orbits per Earth year.
    //
    //    using stof, The moon completes 12.3684 orbits per Earth year.
    //
    //    using stoi, The moon completes 12 orbits per Earth year.
    //
    //    1987520: 1987520
    //    2f04e009: 788848649
    //    -11101001100100111010: -956730
    //    0x7fffff: 8388607
    //    8246821 interpreted as 8246821
    //    0xffff interpreted as 65535
    //    020 interpreted as 16
    //    Enter an unsigned number: 1000
    //    You entered: 1000
    //    pi is 3.141593
    //    28 is a perfect number

}
