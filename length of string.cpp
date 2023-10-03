//program to find length of string using user-defined functions..
#include<iostream>
using namespace std;

int len(string a)
{
    return a.length();
}
main()
{
    string a;

    cout<<"Enter a string:";
    cin>>a;
    int count1 = len(a);
    cout<<"Length of string:"<<count1 <<endl;
}
