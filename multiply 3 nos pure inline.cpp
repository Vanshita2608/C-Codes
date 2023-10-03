//multiply 3 nos pure inline

#include<iostream>
using namespace std;

inline int mult(int a , int b , int c)
{
    return(a*b*c);
}
main()
{
    int a , b , c;
    cout<<"Enter numbers:";
    cin>>a>>b>>c;
    cout<<"ANSWER:"<<mult(a,b,c)<<endl;
    return 0;
}
