//multiply and add 2 nos. pure inline

#include<iostream>
using namespace std;

inline int mult(int a , int b)
{
    return(a * b);
}
inline int add(int p , int q)
{
    return(p + q);
}
main()
{
    int a , b , p , q;
    cout<<"Enter a:";
    cin>>a;
    cout<<"Enter b:";
    cin>>b;
    cout<<"Enter p:";
    cin>>p;
    cout<<"Enter q:";
    cin>>q;

    cout<<"MULTIPLICATION:"<<mult(a,b)<<endl;
    cout<<"ADDITION:"<<add(p,q)<<endl;
    return 0;
}
