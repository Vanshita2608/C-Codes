//quadratic equation
#include<iostream>
#include<cmath>
using namespace std;
int main()
{

    float a , b, c, D , r1 , r2;

    cout<<"Input values of a , b , c : \n "<<endl;
    cin>>a, b, c;

    D = b*b - 4*a*c ;

    if(D<0)
    {
        cout<<"\n\n ROOTS ARE IMAGINARY.\n"<<endl;
    }
    else
    {
        r1 = (-b + sqrt(D))/(2*a);
        r2 = (-b - sqrt(D))/(2*a);

        cout<<"Root 1 = %5.2f"<<r1<<endl;
        cout<<"Root 2 = %5.2f"<<r2<<endl;

    }


}
