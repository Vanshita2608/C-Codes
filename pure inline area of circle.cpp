//area of circle pure inline

#include<iostream>
using namespace std;

inline float area(int r)
{
    return(3.14 * r * r);
}
main()
{
    int a;
    cout<<"Enter radius:";
    cin>>a;

    cout<<"AREA:"<<area(a)<<endl;
    return 0;
}
