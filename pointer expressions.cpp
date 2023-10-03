//pointer expressions

#include<iostream>
using namespace std;

int main()
{
    int x = 5;
    int *p = &x;
    cout<<"Value of p is address of x: "<<p<<endl;
    p = p+1;
    cout<<"After updating p by 1 :"<<p<<endl;
}
