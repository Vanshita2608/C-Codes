//INLINE FUNCTION WITH CLASS

#include<iostream>
using namespace std;

inline float mul(float a , float b)
{
    return(a*b);
}
inline float div(float a , float b)
{
    return(a/b);
}

main()
{
    float x , y;
    cout<<"Enter the value of x:";
    cin>>x;
    cout<<"Enter the value of y:";
    cin>>y;

    cout<<mul(x,y)<<"\n";
    cout<<div(x,y)<<"\n";
    return 0;
}
