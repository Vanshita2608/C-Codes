//overload add() function with different no. of arguments...
#include<iostream>
using namespace std;

int calc(int a , float b , int c , int d)
{
    int add = a + b + c + d;
    return add;
}
float calc(int i , float j)
{
    float sub = i - j;
    return sub;
}
int calc(float m , float n , float o )
{
    int mult = m*n*o;
    return mult;
}
int calc(float s , float t)
{
    float div = s/t;
    return div;
}

int main()
{
    int select , a , b , c , d , i , j;
    float m , n , o , s , t;
    cout<<"*****CALCULATIONS*****"<<endl;
    cout<<"1. Addition"<<endl;
    cout<<"2. Subtraction"<<endl;
    cout<<"3. Multiplication"<<endl;
    cout<<"4. Division"<<endl;
    cout<<"Choose a choice:"<<endl;
    cin>>select;

    switch(select)
    {
        case 1:{cout<<"Enter number 1:"<<endl;
                cin>>a;
                cout<<"Enter number 2:"<<endl;
                cin>>b;
                cout<<"Enter number 3:"<<endl;
                cin>>c;
                cout<<"Enter number 4:"<<endl;
                cin>>d;
                int add = calc(a,b,c,d);
                cout<<"Your answer is:"<<add <<endl;
                break;}

        case 2:{cout<<"Enter number 1:"<<endl;
                cin>>i;
                cout<<"Enter number 2:"<<endl;
                cin>>j;
                float sub = calc(i,j);
                cout<<"Your answer is:"<<sub <<endl;
                break;}

        case 3:{cout<<"Enter number 1:"<<endl;
                cin>>m;
                cout<<"Enter number 2:"<<endl;
                cin>>n;
                cout<<"Enter number 3:"<<endl;
                cin>>o;
                float mult = calc(m,n,o);
                cout<<"Your answer is:"<<mult <<endl;
                break;}

        case 4:{cout<<"Enter number 1:"<<endl;
                cin>>s;
                cout<<"Enter number 2:"<<endl;
                cin>>t;
                float div = calc(s,t);
                cout<<"Your answer is:"<<div <<endl;
                break;}

        default:{cout<<"You are wrong!!!as always!!"<<endl;
                break;}
    }
}
