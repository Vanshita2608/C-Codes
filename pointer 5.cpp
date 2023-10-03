//pointer

#include<iostream>
#include<stdlib.h>
using namespace std;

int main()
{
    int x = 7 , y ;
    cout<<"Addresses are as below:"<<endl;
    cout<<"Add. of x = "<<&x<<endl;
    cout<<"Add. of y = "<<&y<<endl;
    //cout<<"Add. of p = "<<&p<<endl;
    int *p = &y;
    cout<<endl<<"Values are as below:"<<endl;
    cout<<"Val. of x = "<<&x<<endl;
    cout<<"Val. of y = "<<&y<<endl;
    cout<<"Val. of p = "<<&p<<endl;
    *p = 6;
    cout<<"Val. of y = "<<y<<endl;
    p = &x;
    *p = *p * 2;
    cout<<"Val. of x = "<<x<<endl;
    cout<<"Val. of y = "<<y<<endl;
    cout<<"Val. of p = "<<p<<endl;

}
