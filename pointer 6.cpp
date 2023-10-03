//pointer

#include<iostream>
#include<stdlib.h>
using namespace std;


void swap(int *p , int *q)
{
    cout<<"Add. of p = "<<&p<<endl;
    cout<<"Add. of q = "<<&q<<endl;
    cout<<"Val. of p = "<<p<<endl;
    cout<<"Val. of q = "<<q<<endl<<endl;
    int temp;
    temp = *p;
    *p = *q;
    *q = temp;
}

int main()
{
    int x , y;
    cout<<"Enter values of x and y:"<<endl;
    cin>>x>>y;
    cout<<endl<<"Address of x = "<<&x<<endl;
    cout<<"Address of y = "<<&y<<endl;
    cout<<endl<<"BEFORE SWAP:"<<endl;
    cout<<"Value of x = "<<x<<endl;
    cout<<"Value of y = "<<y<<endl;
    swap(&x , &y);
    cout<<endl<<"AFTER SWAP:"<<endl;
    cout<<"Value of x = "<<x<<endl;
    cout<<"Value of y = "<<y<<endl;
}

