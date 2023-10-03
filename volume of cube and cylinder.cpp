//overload volume() function for calculation of cube and cylinder
#include<iostream>
using namespace std;

float volume(float r , float h)
{
    float cyl = 3.14*r*r*h;
    return cyl;
}
int volume(int s)
{
    int cube = s*s*s;
    return cube;
}

int main()
{
    int s , choice;
    float r , h;

    cout<<"*****YOUR LIST*****"<<endl;
    cout<<"1. Volume of cylinder"<<endl;
    cout<<"2. Volume of cube"<<endl;
    cout<<"Your choice:"<<endl;
    cin>>choice;

    switch(choice)
    {
        case 1:{cout<<"Enter the radius:"<<endl;
                cin>>r;
                cout<<"Enter the height:"<<endl;
                cin>>h;
                float cyl = volume(r,h);
                cout<<"ANSWER:"<<cyl <<endl;
                break;}

        case 2:{cout<<"Enter the side:"<<endl;
                cin>>s;
                int cube = volume(s);
                cout<<"ANSWER:"<<cube <<endl;
                break;}

        default:{cout<<"BYE-BYE"<<endl;
                break;}
    }
}



