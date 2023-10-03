//WAP to calculate area of circle using inline functions

#include<iostream>
using namespace std;

inline int area(int r)
{
    float answer;
    cout<<"Enter radius:";
    cin>>r;
    answer = 3.14 * r * r;
    cout<<"Area of circle="<<answer;
}
int main()
{
    int r;
    area(r);
}
