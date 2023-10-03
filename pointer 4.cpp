//pointer

#include<iostream>
#include<stdlib.h>
using namespace std;

int main()
{
    int x = 5;
    int *p;
    cout<<"Value of x = "<<x<<endl;
    cout<<"Address of x = "<<&x<<endl;

    cout<<"Value of p = "<<p<<endl;
    cout<<"Address of p = "<<&p<<endl;

    p = &x;
    *p = *p + 2;

    cout<<"Value of p = "<<p<<endl;
    cout<<"Value of x = "<<x<<endl;
    system("pause");
}
