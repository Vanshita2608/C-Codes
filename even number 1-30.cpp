//program to print even no.s from 1-30
#include<iostream>
using namespace std;

main()
{
    int i;

    cout<<"Even number:"<<endl;
    for(i=0 ; i<=30 ; i++)
    {
        if(i%2==0)
        {
            cout<<i<<endl;
        }
    }
}
