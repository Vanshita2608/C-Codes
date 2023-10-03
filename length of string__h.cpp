//program to find length of string using user-defined functions..
#include<iostream>
#include<string.h>
using namespace std;

void length()
{
    char a[50];
    cout<<"Enter a string:";
    cin>>a;
    int V = strlen(a);
    cout<<"Length is:"<<V <<endl;
}

main()
{
    length();
}
