//overload add() function with different no. of arguments...
#include<iostream>
using namespace std;

int add(int a , int b)
{
    int sum1 = a + b;
    return sum1;
}
float add(int c, float d , int e)
{
    float sum2 = c + d + e;
    return sum2;
}

int main()
{
    int a , b , c , select;
    float d , e;

    cout<<"1. SUM 1"<<endl;
    cout<<"2. SUM 2"<<endl;
    cout<<"Select your choice:"<<endl;
    cin>>select;

    switch(select)
    {
        case 1:{cout<<"Enter number 1:"<<endl;
                cin>>a;
                cout<<"Enter number 2:"<<endl;
                cin>>b;
                int sum1 = add(a,b);
                cout<<"ANSWER:"<<sum1 <<endl;
                break;}

        case 2:{cout<<"Enter number 1:"<<endl;
                cin>>c;
                cout<<"Enter number 2:"<<endl;
                cin>>d;
                cout<<"Enter number 3:"<<endl;
                cin>>e;
                float sum2 = add(c,d,e);
                cout<<"ANSWER:"<<sum2 <<endl;
                break;}

        default:{cout<<"YOU ARE WRONG!! SO BYE-BYE!! WE DON'T NEED YOU!!"<<endl;
                break;}
    }
}
