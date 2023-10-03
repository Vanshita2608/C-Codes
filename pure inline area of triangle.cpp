//area of triangle pure inline

#include<iostream>
using namespace std;

inline float area(float b , float h)
{
    return(0.5 * b * h);
}
main()
{
    float b , h;
    cout<<"Enter base:";
    cin>>b;
    cout<<"Enter height:";
    cin>>h;
    cout<<"AREA:"<<area(b,h)<<endl;
    return 0;
}
