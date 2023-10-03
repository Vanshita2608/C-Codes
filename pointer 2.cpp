//pointer 2

#include<iostream>
#include<stdlib.h>
using namespace std;

int main()
{
    int x = 5;
    *(&x) = *(&x) + 2;
    cout<<"x = "<<x<<endl;
}
